/*

__/\\\\____________/\\\\_______/\\\\\_______/\\\\\_____/\\\_____/\\\\\\\\\\\\____/\\\\\\\\\______/\\\\\\\\\\\\\\\__/\\\_____________        
 _\/\\\\\\________/\\\\\\_____/\\\///\\\____\/\\\\\\___\/\\\___/\\\//////////___/\\\///////\\\___\/\\\///////////__\/\\\_____________       
  _\/\\\//\\\____/\\\//\\\___/\\\/__\///\\\__\/\\\/\\\__\/\\\__/\\\_____________\/\\\_____\/\\\___\/\\\_____________\/\\\_____________      
   _\/\\\\///\\\/\\\/_\/\\\__/\\\______\//\\\_\/\\\//\\\_\/\\\_\/\\\____/\\\\\\\_\/\\\\\\\\\\\/____\/\\\\\\\\\\\_____\/\\\_____________     
    _\/\\\__\///\\\/___\/\\\_\/\\\_______\/\\\_\/\\\\//\\\\/\\\_\/\\\___\/////\\\_\/\\\//////\\\____\/\\\///////______\/\\\_____________    
     _\/\\\____\///_____\/\\\_\//\\\______/\\\__\/\\\_\//\\\/\\\_\/\\\_______\/\\\_\/\\\____\//\\\___\/\\\_____________\/\\\_____________   
      _\/\\\_____________\/\\\__\///\\\__/\\\____\/\\\__\//\\\\\\_\/\\\_______\/\\\_\/\\\_____\//\\\__\/\\\_____________\/\\\_____________  
       _\/\\\_____________\/\\\____\///\\\\\/_____\/\\\___\//\\\\\_\//\\\\\\\\\\\\/__\/\\\______\//\\\_\/\\\\\\\\\\\\\\\_\/\\\\\\\\\\\\\\\_ 
        _\///______________\///_______\/////_______\///_____\/////___\////////////____\///________\///__\///////////////__\///////////////__
     
       Moffenzeef Modular  
  Genetically Modified Oscillator 
   Created by Ross Fish July 2015
           CC-BY-NC-SA 
    http://moffenzeefmodular.com   
  
  Mozzi Synthesis Library by Tim Barrass CC-BY-NC-SA
  
    Information & Help:  
    http://github.com/moffenzeefmodular/GMO/wiki
    
/////////////////////////////////////////////////////////////////
            PINOUT 
/////////////////////////////////////////////////////////////////
  /////DIGITAL INS//////
  BANG! 1 ==> Pin 3
  BANG! 2 ==> Pin 2
  Snarl switch ==> Pin 4 
  
  /////DIGITAL OUTS//////
  LED Teensy Power Indicator ==> Pin 13
  
  /////ANALOG INS - POTS//////
  Tail 1 ==> Pin 21 (A7)
  Hiss 1 ==> Pin 15 (A1)
  Tail 2 ==> Pin 17 (A3)
  Hiss 2  ==> Pin 19 (A5)
  
  /////ANALOG INS - JACKS//////
  Tail 1 CV ==> Pin 22 (A8)
  Hiss 1 CV ==> Pin 16 (A2)
  Tail 2 CV ==> Pin 18 (A4)
  Hiss 2 CV ==> Pin 20 (A6)
  
  /////ANALOG OUTS//////
  Audio Ouput == > DAC/A14 
  LED Audio Indicator ==> Pin 23 (A9)
  
*/  

#include <ADC.h>  // Teensy 3.1 uncomment this line and install http://github.com/pedvide/ADC
#include <MozziGuts.h> // Required to run this sketch 
#include <Oscil.h> // oscillator template
#include <tables/smoothsquare8192_int8.h> // recorded audio wavetable
#include <tables/sin8192_int8.h> // recorded audio wavetable

#include <Ead.h> // exponential attack decay
#include <mozzi_rand.h> // random library 

#define CONTROL_RATE 256 // powers of 2 please

Oscil<SMOOTHSQUARE8192_NUM_CELLS, AUDIO_RATE> oscOne(SMOOTHSQUARE8192_DATA); // Wavetable template for oscillator one 
Oscil<SMOOTHSQUARE8192_NUM_CELLS, AUDIO_RATE> oscTwo(SMOOTHSQUARE8192_DATA); // Wavetable template for oscillator two 

Ead envelopeOne(CONTROL_RATE); // Envelope template. Resolution will be CONTROL_RATE

int trigState = 0; // Variable to hold trigger state for envelope 
int lastTrigState = 0; // Varaible to hold last trigger state for envelope 

int toggle = 0; // Variable to hold toggle switch state
int toggleCv = 0; // Variable to hold toggle CV state 

int pitchPotOne = 0; // Variable to hold pitch potentiometer data for oscillator one 
int pitchOneCvRaw = 0; // Varaible to hold pitch CV data for oscillator one 
int pitchOneMath = 0; // Variable to hold pitch math information for pitch potentiometer & CV for oscillator one
float pitchOne = 0; // Variable to hold final value of pitch for oscillator one 

int decayPotOne = 0; // Variable to hold decay potentiometer data for envelope
int decayOneCvRaw = 0; // Varaible to hold decay CV data for envelope
int decayOneMath = 0; // Variable to hold decay math information for decay potentiometer & CV
int decayOne = 0; // Variable to hold final value of decay 

int gainOne; // Variable to hold amplitude information of envelope as INT

int pitchPotTwo = 0; // Variable to hold pitch potentiometer data for oscillator two
int pitchTwoCvRaw = 0; // Variable to hold pitch CV data for oscillator two  
int pitchTwoMath = 0; // Variable to hold pitch math information for pitch potentiometer & CV for oscillator two 
float pitchTwo = 0; // Variable to hold final value of pitch for oscillator two 

int fmPot = 0; // Variable to hold potentiometer data for global FM 
int fmCvRaw = 0; // Variable to hold CV data for global FM
int fmMath = 0; // Variable to hold math information for FM potentiometer & CV 
float fm = 0; // Variable to hold final FM value 

byte volumeOne; // Byte to hold amplitude information for oscillator one
byte volumeTwo; // Byte to hold amplitude information for oscillator two 


int CURRENT_TABLE = 0; // variable to hold table size

/* This function allows us to map a float to a new value. Using the map() function normally only allows us to map integers.
We need the capability to map floats because we want a smooth playback speeds to give us all the values possible. If you 
use integers for playback speed we'll hear hard stepping between 1 (original speed) 2(double speed) etc. instead of smooth
scrubbing. This also gives us the capability to have a playback speed less than one 0.5 (half speed) 0.25 (quarter speed) etc.
*/

float mapfloat(float x, float in_min, float in_max, float out_min, float out_max)
{
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

void setup() {
  // use float to set freq because it will be small and fractional
  randSeed(); // fresh random, MUST be called before startMozzi - wierd bug
  pinMode(2, INPUT); // Initialize pin 2 as digital input
  pinMode(3, INPUT); // Initialize pin 3 as digital input
  pinMode(4, INPUT); // Initalize pin 4 as digital input 
  startMozzi(CONTROL_RATE); // Initialize Mozzi 
}

void updateControl() {

 ///////////////////////////////////////////
                  GLOBAL
 ///////////////////////////////////////////
 
  toggleCv = digitalRead(2); // Read toggle CV on pin 2 

  trigState = digitalRead(3); // Read trigger input on Pin 3 

  toggle   = digitalRead(4); // Read toggle switch on Pin 4  

  if (toggle == HIGH || toggleCv == HIGH) { // If the switch is in ON position, or pin 2 has recieved over 2 volts 
    oscOne.setTable(SMOOTHSQUARE8192_DATA); // change the current wavetable
    oscTwo.setTable(SMOOTHSQUARE8192_DATA); // change the current wavetable
    CURRENT_TABLE = SMOOTHSQUARE8192_NUM_CELLS; // set the wavetable length to current wavetable
  }

  else { // If the switch is in the OFF position and pin 2 is LOW 
    oscOne.setTable(SIN8192_DATA); // change the current wavetable
    oscTwo.setTable(SIN8192_DATA); // change the current wavetable
    CURRENT_TABLE = SIN8192_NUM_CELLS; // set the wavetable length to current wavetable
  }

  decayPotOne = analogRead(A7); // Read decay potentiometer on Pin (A7) value is 0-1023
  decayOneCvRaw = analogRead(A8) - 512; // Read decay CV on Pin (A8) value is 0-1023 
  
  /*  
  The CV inputs have a DC offset added to them to convert the +5/-5 signal from Eurorack into 
  0-3.3 volts for clean reading into Teensy in the full range of the Eurorack standard. 
  This puts ~1.65v into the Teensy when nothing is plugged into the Jack. 
  This ~1.65v (interpreted in the Teensy as 512 bits) is our 0 value to allow for bipolar control. 
  We subtract it from the reading to give us a 0 starting point when nothing is plugged in. 
  */

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

  decayOne = map(decayOneMath, 1, 1023, 0, 255); // Map to full range of exponential attack/decay envelope. Range is 0-255 bits
                                                 // which translates to 2ms - 230ms

  /* Detect only the rising edge of the incoming trigger by only detecting a change of state. If it the trigger 
  has changed state and is HIGH then we know it is a positive trigger. 
  */
  
  if (trigState != lastTrigState && trigState == HIGH) { 
    envelopeOne.start(10, decayOne); // Trigger the envelope. 10 was set for attack time as any smaller increment didn't trigger the envelope.
  }
  
 ///////////////////////////////////////////
              OSCILLATOR ONE 
 ///////////////////////////////////////////

  pitchPotOne = analogRead(A1); // Read pitch potentiometer on Pin (A1) value is 0-1023 
  pitchOneCvRaw = analogRead(A2) - 512; // Read pitch CV on Pin (A2) value is 0-1023 
  
  /*  
  The CV inputs have a DC offset added to them to convert the +5/-5 signal from Eurorack into 
  0-3.3 volts for clean reading into Teensy in the full range of the Eurorack standard. 
  This puts ~1.65v into the Teensy when nothing is plugged into the Jack. 
  This ~1.65v (interpreted in the Teensy as 512 bits) is our 0 value to allow for bipolar control. 
  We subtract it from the reading to give us a 0 starting point when nothing is plugged in. 
  */
  
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

  pitchOne = mapfloat(pitchOneMath, 1, 1023, 20.0, 2000.0); // Map from 20hz to 2khz 

  oscOne.setFreq(pitchOne); // Set pitch frequency 

  ///////////////////////////////////////////
              OSCILLATOR TWO 
 ///////////////////////////////////////////

  pitchPotTwo = analogRead(A5); // Read pitch potentiometer on Pin (A5) value is 0-1023
  pitchTwoCvRaw = analogRead(A6) - 512; // Read pitch CV on Pin (A6) value is 0-1023 
  
  /*  
  The CV inputs have a DC offset added to them to convert the +5/-5 signal from Eurorack into 
  0-3.3 volts for clean reading into Teensy in the full range of the Eurorack standard. 
  This puts ~1.65v into the Teensy when nothing is plugged into the Jack. 
  This ~1.65v (interpreted in the Teensy as 512 bits) is our 0 value to allow for bipolar control. 
  We subtract it from the reading to give us a 0 starting point when nothing is plugged in. 
  */

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

  pitchTwo = mapfloat(pitchTwoMath, 1, 1023, 20.0, 2000.0); // Map from 20hz to 2khz 

  oscTwo.setFreq(pitchTwo); // Set pitch frequency 
  
  //////////////////////////////////////////////////////////////////////////////////// 
  
  gainOne = (int) envelopeOne.next(); // Set envelope as a byte 

  fmPot = analogRead(A3); // Read FM potentiometer on Pin (A3) value is 0-1023 
  fmCvRaw = analogRead(A4) - 512; // Read FM CV on Pin (A4) value is 0-1023 
    
  /*  
  The CV inputs have a DC offset added to them to convert the +5/-5 signal from Eurorack into 
  0-3.3 volts for clean reading into Teensy in the full range of the Eurorack standard. 
  This puts ~1.65v into the Teensy when nothing is plugged into the Jack. 
  This ~1.65v (interpreted in the Teensy as 512 bits) is our 0 value to allow for bipolar control. 
  We subtract it from the reading to give us a 0 starting point when nothing is plugged in. 
  */

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

  /* "volumeOne" and "volumeTwo" are acting as our "wet/dry" or "fm amount." volumeOne will control 
  the amount of oscillator 1+2 we here or the "dry." They are "dry" because it is simply the sum of 
  both pitches. volumeTwo will control the amount of oscillator 1*2 we here or the "wet." They are wet because
  oscillator one is modulating the frequency of oscillator two. In it's truest sense this is really a pseudo 
  ring modulation as it is X*Y. 
  */

  volumeOne = map(fmMath, 0, 1023, 255, 0); // Map from maximum possible volume to minimum. This way, when the pot is all the way left
                                            // We hear only the "dry" signal of the summed oscillators 
  volumeTwo = map(fmMath, 0, 1023, 0, 127); // Map from minimum possible volume to maximum. This way, when the pot is all the way to the right
                                            // We heard only the "wet" signal of the multiplied oscillators. 

  analogWrite(A9, (int)(gainOne * (oscOne.next() + oscTwo.next())) ); // mirror the audio output boost the gain x 100  and write it to the LED
}


int updateAudio() {
  
  /* We want to control everything with the amplitude envelope so we multiply everything by it. The first section of this code
  illustrates the "dry" segment: both oscillators ADDED together who's volume is controlled by volumeOne. The second section of this 
  code illustrates the "wet" segment: both oscillators MULTIPLIED together who's volume is controlled by volumeTwo. We multiply 
  the first section by 15 to get it to an equal volume of the second section. After we have done this, everything will be blown
  out and distorted. We bit shift everything 16 bits to reduce volume and noise ultimately returning the entire mix to an acceptable
  volume level 
  */
  
  return gainOne * ( ((volumeOne * (oscOne.next() + oscTwo.next())) * 15) + 
                      (volumeTwo * (oscOne.next() * oscTwo.next())) ) >> 16;

}


void loop() {
  audioHook(); // Required 
}
