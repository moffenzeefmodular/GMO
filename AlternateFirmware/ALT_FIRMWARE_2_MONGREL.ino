#include <ADC.h>  // Teensy 3.1 uncomment this line and install http://github.com/pedvide/ADC
#include <MozziGuts.h>
#include <Oscil.h> // oscillator template
#include <tables/smoothsquare8192_int8.h> // recorded audio wavetable
#include <tables/sin8192_int8.h> // recorded audio wavetable

#include <Ead.h> // exponential attack decay
#include <mozzi_rand.h>

#define CONTROL_RATE 256 // powers of 2 please

Oscil<SMOOTHSQUARE8192_NUM_CELLS, AUDIO_RATE> oscOne(SMOOTHSQUARE8192_DATA);
Oscil<SMOOTHSQUARE8192_NUM_CELLS, AUDIO_RATE> oscTwo(SMOOTHSQUARE8192_DATA);

Ead envelopeOne(CONTROL_RATE); // resolution will be CONTROL_RATE

int trigOne = 0;

int toggle = 0;
int toggleCv = 0;

int pitchPotOne = 0;
int pitchOneCvRaw = 0;
int pitchOneMath = 0;
float pitchOne = 0;

int decayPotOne = 0;
int decayOneCvRaw = 0;
int decayOneMath = 0;
int decayOne = 0;

int gainOne;

int pitchPotTwo = 0;
int pitchTwoCvRaw = 0;
int pitchTwoMath = 0;
float pitchTwo = 0;

float fm = 0;
int fmPot = 0;
int fmCvRaw = 0;
int fmMath = 0;

byte volumeOne;
byte volumeTwo;


int CURRENT_TABLE = 0; // variable to hold table size


float mapfloat(float x, float in_min, float in_max, float out_min, float out_max)
{
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

void setup() {
  // use float to set freq because it will be small and fractional
  randSeed(); // fresh random, MUST be called before startMozzi - wierd bug
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  startMozzi(CONTROL_RATE);
}


void updateControl() {

  toggleCv = digitalRead(2);

  trigOne = digitalRead(3);

  toggle   = digitalRead(4);

  if (toggle == HIGH || toggleCv == HIGH) {
    oscOne.setTable(SMOOTHSQUARE8192_DATA); // change the current wavetable
    oscTwo.setTable(SMOOTHSQUARE8192_DATA); // change the current wavetable
    CURRENT_TABLE = SMOOTHSQUARE8192_NUM_CELLS; // set the wavetable length to current wavetable
  }

  else {
    oscOne.setTable(SIN8192_DATA); // change the current wavetable
    oscTwo.setTable(SIN8192_DATA); // change the current wavetable
    CURRENT_TABLE = SIN8192_NUM_CELLS; // set the wavetable length to current wavetable
  }

  decayPotOne = analogRead(A7);
  decayOneCvRaw = analogRead(A8) - 512;

  if (decayOneCvRaw > 512) // If the reading is above 512 we know it's a positive value
  {
    decayOneMath = (decayPotOne - decayOneCvRaw); // So we add it to the Pot
  }
  else if (decayOneCvRaw < 512) // If the reading is below 512 we know it's a negatie value
  {
    decayOneMath = (decayPotOne + decayOneCvRaw); // So we subtract it from the Pot
  }

  decayOneMath = max(decayOneMath, 1);   // limit the lowest possible value to 1, data below this limit gets truncated
  decayOneMath = min(decayOneMath, 1023); // limit the highest possible value to 1023, data above this limit gets truncated

  decayOne = map(decayOneMath, 1, 1023, 0, 255);

  if (trigOne == HIGH) {
    envelopeOne.start(10, decayOne);
  }

  pitchPotOne = analogRead(A1);
  pitchOneCvRaw = analogRead(A2) - 512;

  if (pitchOneCvRaw > 512) // If the reading is above 512 we know it's a positive value
  {
    pitchOneMath = (pitchPotOne - pitchOneCvRaw); // So we add it to the Pot
  }
  else if (pitchOneCvRaw < 512) // If the reading is below 512 we know it's a negatie value
  {
    pitchOneMath = (pitchPotOne + pitchOneCvRaw); // So we subtract it from the Pot
  }

  pitchOneMath = max(pitchOneMath, 1);   // limit the lowest possible value to 1, data below this limit gets truncated
  pitchOneMath = min(pitchOneMath, 1023); // limit the highest possible value to 1023, data above this limit gets truncated

  pitchOne = mapfloat(pitchOneMath, 1, 1023, 20.0, 2000.0);

  oscOne.setFreq(pitchOne);

  ///////////////////////////////////////////

  pitchPotTwo = analogRead(A5);
  pitchTwoCvRaw = analogRead(A6) - 512;

  if (pitchTwoCvRaw > 512) // If the reading is above 512 we know it's a positive value
  {
    pitchTwoMath = (pitchPotTwo - pitchTwoCvRaw); // So we add it to the Pot
  }
  else if (pitchTwoCvRaw < 512) // If the reading is below 512 we know it's a negatie value
  {
    pitchTwoMath = (pitchPotTwo + pitchTwoCvRaw); // So we subtract it from the Pot
  }

  pitchTwoMath = max(pitchTwoMath, 1);   // limit the lowest possible value to 1, data below this limit gets truncated
  pitchTwoMath = min(pitchTwoMath, 1023); // limit the highest possible value to 1023, data above this limit gets truncated

  pitchTwo = mapfloat(pitchTwoMath, 1, 1023, 20.0, 2000.0);

  oscTwo.setFreq(pitchTwo);
  //////////////////////////////////////////

  gainOne = (int) envelopeOne.next();

  fmPot = analogRead(A3);
  fmCvRaw = analogRead(A4) - 512;

  if (fmCvRaw > 512) // If the reading is above 512 we know it's a positive value
  {
    fmMath = (fmPot - fmCvRaw); // So we add it to the Pot
  }
  else if (fmCvRaw < 512) // If the reading is below 512 we know it's a negatie value
  {
    fmMath = (fmPot + fmCvRaw); // So we subtract it from the Pot
  }

  fmMath = max(fmMath, 0);   // limit the lowest possible value to 1, data below this limit gets truncated
  fmMath = min(fmMath, 1023); // limit the highest possible value to 1023, data above this limit gets truncated

  volumeOne = map(fmMath, 0, 1023, 255, 0);
  volumeTwo = map(fmMath, 0, 1023, 0, 127);

  analogWrite(A9, (int)(gainOne * (oscOne.next() + oscTwo.next())) ); // mirror the audio output boost the gain x 100  and write it to the LED
}


int updateAudio() {
  return gainOne * ( ((volumeOne * (oscOne.next() + oscTwo.next())) * 15) + (volumeTwo * (oscOne.next() * oscTwo.next())) ) >> 16;

}


void loop() {
  audioHook();
}
