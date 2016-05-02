/*

_____/\\\\\\\\\\\\__/\\\\____________/\\\\_______/\\\\\______        
 ___/\\\//////////__\/\\\\\\________/\\\\\\_____/\\\///\\\____       
  __/\\\_____________\/\\\//\\\____/\\\//\\\___/\\\/__\///\\\__      
   _\/\\\____/\\\\\\\_\/\\\\///\\\/\\\/_\/\\\__/\\\______\//\\\_     
    _\/\\\___\/////\\\_\/\\\__\///\\\/___\/\\\_\/\\\_______\/\\\_    
     _\/\\\_______\/\\\_\/\\\____\///_____\/\\\_\//\\\______/\\\__   
      _\/\\\_______\/\\\_\/\\\_____________\/\\\__\///\\\__/\\\____  
       _\//\\\\\\\\\\\\/__\/\\\_____________\/\\\____\///\\\\\/_____ 
        __\////////////____\///______________\///_______\/////_______
            
        Moffenzeef Modular  
  Genetically Modified Oscillator 
   Created by Ross Fish July 2015
           CC-BY-NC-SA 
    http://moffenzeefmodular.com   
  
  Mozzi Synthesis Library by Tim Barrass CC-BY-NC-SA

/////////////////////////////////////////////////////////////////
          DEPENDENCIES 
/////////////////////////////////////////////////////////////////

  Verified on Arduino version 1.6.3 
  https://www.arduino.cc/en/Main/OldSoftwareReleases
    
  How to download libraries for Arduino: 
  http://www.arduino.cc/en/Guide/Libraries
  
  ADC
  http://github.com/pedvide/ADC 
  Mozzi
  http://sensorium.github.io/Mozzi/download/
  Teensyduino 1.22
      Mac: http://www.pjrc.com/teensy/td_122/teensyduino.dmg
      Linux (32 bit): http://www.pjrc.com/teensy/td_122/teensyduino.32bit
      Linux (64 bit): http://www.pjrc.com/teensy/td_122/teensyduino.64bit
      Windows XP 7/8/10:http://www.pjrc.com/teensy/td_122/teensyduino.exe       
      
  Move these files into 
  Arduino/Libraries/Mozzi/Samples 
  https://github.com/moffenzeefmodular/GMO/tree/master/AlternateFirmware/Wavetables
  
  ^ ^ ^
  The ".h" files must be taken out of any folders or .zip archives 
  and placed directly into that folder. 

/////////////////////////////////////////////////////////////////
            PINOUT 
/////////////////////////////////////////////////////////////////

  /////DIGITAL INS//////
  Looping CV Input (jack with little snake symbol) ==> Pin 2
  Reset Trigger Input (Bang!) ==> Pin 3
  Looping Switch Input (switch with little snake symbol) ==> Pin 4 
  
  /////DIGITAL OUTS//////
  LED Teensy Power Indicator ==> Pin 13
  
  /////ANALOG INS - POTS//////
  Pitch Potentiometer (Speed) ==> Pin 15 (A1)
  Start Potentiometer (Head) ==> Pin 17 (A3)
  End Potentiometer (Tail) ==> Pin 19 (A5)
  Sample Potentiometer (Specimen) ==> Pin 21 (A7)

  /////ANALOG INS - JACKS//////
  Pitch CV (Speed) ==> Pin 16 (A2)
  Start CV (Head) ==> Pin 18 (A4)
  End CV (Tail) ==> Pin 20 (A6)
  Sample CV (Specimen) ==> Pin 22 (A8)
  
  /////ANALOG OUTS//////
  Audio Ouput == > DAC/A14 
  LED Audio Indicator ==> Pin 23 (A9)
  
*/



#include <ADC.h>  // Needed for DAC output 
#include <MozziGuts.h> // Necessary for running the sketch 
#include <Sample.h> // Library to play sound samples 
#include <samples/Wavetables/bassicOne_int8.h> // Table for Sample
#include <samples/Wavetables/bassicTwo_int8.h> // Table for Sample 
#include <samples/Wavetables/bassicThree_int8.h> // Table for Sample 
#include <samples/Wavetables/bassicFour_int8.h> // Table for Sample 
#include <samples/Wavetables/bassicFive_int8.h> // Table for Sample 
#include <samples/Wavetables/bassicSix_int8.h> // Table for Sample 
#include <samples/Wavetables/bassicSeven_int8.h> // Table for Sample 
#include <samples/Wavetables/bassicEight_int8.h> // Table for Sample 

#define CONTROL_RATE 256 // powers of 2 please 

Sample <BASSICONE_NUM_CELLS, AUDIO_RATE> aSample(BASSICONE_DATA); // create the wavetable template 

float pot1Raw = 0; // variable to hold raw data from Potentiometer connected to pin A1
int pot3Raw = 0; // variable to hold raw data from Potentiometer connected to pin A3
int pot5Raw = 0; // variable to hold raw data from Potentiometer connected to pin A5
int pot7Raw = 0; // variable to hold raw data from Potentiometer connected to pin A7

int trigState = 0; // variable to hold current trigger state
int lastTrigState = 0; // variable to hold previous trigger state
int loopingSwitch = 0; // varaible to hold looping switch
int loopingCv = 0; // variable to hold looping CV input 

int startPosition = 0; // variable to hold start position of loop
int startCvRaw = 0; // variable to hold start CV raw data input 
int startMath = 0; // variable to hold start CV + Pot math

int endPosition = 0; // variable to hold end position of loop
int endCvRaw = 0; // variable to hold end CV raw data input 
int endMath = 0; // variable to hold end CV + Pot math 

int sampleSelect = 0; // variable to hold sample selection
int sampleCvRaw = 0; // variable to hold sample CV raw data input 
int sampleMath = 0; // variable to hold sample CV + pot math

float pitch = 0; // variable to hold playback speed
float pitchCvRaw = 0; // variable to hold pitch CV raw data input 
float pitchMath = 0; // variable to hold pitch CV + pot math

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
  
  startMozzi(CONTROL_RATE); // start Mozzi at control rate as determined at beginning of sketch 
  
  pinMode(2, INPUT); // Enable pin 2 as input for looping CV
  pinMode(3, INPUT); // Enable pin 3 as input for reset trigger 
  pinMode(4, INPUT); // Enable pin 4 as input for Looping switch (temporary Kluge for prototype, will change back to pin 1)
  pinMode(A9, OUTPUT); // Enable pin 9 as output for audio Indicator LED
  pinMode(13, OUTPUT); // Enable Pin 13 as Teensy power status LED output (onboard the Teensy) 
  digitalWrite(13, HIGH); // Power status LED ON to let us know that the Teensy is recieving proper Vcc. 
  
}

void updateControl() {
  
  loopingCv = digitalRead(2); // read looping CV input
  
  trigState = digitalRead(3); // read reset trigger input

  loopingSwitch = digitalRead(4); // read looping switch

  /* 
  To determine the rising edge of the incoming trigger we check to see 
  if the trigger has changed state. If it has we know it has gone from 
  Low to High or High to low. The extra condition is to determine that 
  we should trigger only when we recieve a positive trigger. When 
  we do, reset the current audio file to the beginning of the file 
  (as determined by startPosition and endPosition). Anything over +2 volts  
  will be considered a positive trigger. 
*/

  if (trigState != lastTrigState && trigState == HIGH) { 
    aSample.start(); 
  }
  
   lastTrigState = trigState;  
  

/* 
If the looping switch is on, or the loopingCv input jack recieves +5 volts, 
enable looping of the audio file. If neither one of them is on, turn looping off
*/

  if (loopingSwitch == HIGH || loopingCv == HIGH) { 
    aSample.setLoopingOn();
  }

  else {
    aSample.setLoopingOff();
  }

  pot1Raw = mozziAnalogRead(1); // read pot 1 on Pin (A1) value is 1-1023
  pitchCvRaw = (mozziAnalogRead(2) - 512); // read pitch CV on Pin (A2) value is 1-1023.
  
  /*  
  The CV inputs have a DC offset added to them to convert the +5/-5 signal from Eurorack into 
  0-3.3 volts for clean reading into Teensy in the full range of the Eurorack standard. 
  This puts ~1.65v into the Teensy when nothing is plugged into the Jack. 
  This ~1.65v (interpreted in the Teensy as 512 bits) is our 0 value to allow for bipolar control. 
  We subtract it from the reading to give us a 0 starting point when nothing is plugged in. 
  */
  
  if (pitchCvRaw > 512) // If the reading is above 512 we know it's a positive value 
  {
  pitchMath = (pot1Raw - pitchCvRaw); // So we add it to the Pot  
  }
  else if (pitchCvRaw < 512) // If the reading is below 512 we know it's a negatie value 
  {
  pitchMath = (pot1Raw + pitchCvRaw); // So we subtract it from the Pot
  }
  
  pitchMath = max(pitchMath, 1);   // limit the lowest possible value to 1, data below this limit gets truncated 
  pitchMath = min(pitchMath, 1023); // limit the highest possible value to 1023, data above this limit gets truncated 
  
  pitch = mapfloat(pitchMath, 1, 1023, 0.01, 3.0); // map from 0.01% to triple speed
  

  pot3Raw = mozziAnalogRead(3); // read pot 3 on Pin (A3) value is 1-1023
  startCvRaw = (mozziAnalogRead(4) - 512); // read start CV on Pin (A4) value is 1-1023  
  
  /*  
  The CV inputs have a DC offset added to them to convert the +5/-5 signal from Eurorack into 
  0-3.3 volts for clean reading into Teensy in the full range of the Eurorack standard. 
  This puts ~1.65v into the Teensy when nothing is plugged into the Jack. 
  This ~1.65v (interpreted in the Teensy as 512 bits) is our 0 value to allow for bipolar control. 
  We subtract it from the reading to give us a 0 starting point when nothing is plugged in. 
  */
  
  if (startCvRaw > 512) // If the reading is above 512 we know it's a positive value 
  {
  startMath = (pot3Raw - startCvRaw); // So we add it to the Pot  
  }
  else if (startCvRaw < 512) // If the reading is below 512 we know it's a negatie value 
  {
  startMath = (pot3Raw + startCvRaw);  // So we subtract it from the Pot
  }
  
  startMath = max(startMath, 1); // limit the lowest possible value to 1, data below this limit gets truncated 
  startMath = min(startMath, 1023); // limit the highest possible value to 1023, data above this limit gets truncated 
  
  /*  
  map to the full length of the current wavetable with 50 samples of space between 
  start and end time to prevent overlap and crashing
  */
  
  startPosition = map(startMath, 1, 1023, 1, CURRENT_TABLE - 50); 
  
  pot5Raw = mozziAnalogRead(5); // read pot 5 on Pin (A5) value is 1-1023
  endCvRaw = (mozziAnalogRead(6) - 512); // read end CV on Pin (A6) value is 1-1023. 
  
   /*  
  The CV inputs have a DC offset added to them to convert the +5/-5 signal from Eurorack into 
  0-3.3 volts for clean reading into Teensy in the full range of the Eurorack standard. 
  This puts ~1.65v into the Teensy when nothing is plugged into the Jack. 
  This ~1.65v (interpreted in the Teensy as 512 bits) is our 0 value to allow for bipolar control. 
  We subtract it from the reading to give us a 0 starting point when nothing is plugged in. 
  */
  
  if (endCvRaw > 512) // If the reading is above 512 we know it's a positive value 
  {
  endMath = (pot5Raw - endCvRaw); // So we add it to the Pot 
  }
  else if (endCvRaw < 512) // If the reading is below 512 we know it's a negatie value 
  {
  endMath = (pot5Raw + endCvRaw); // So we subtract it from the Pot
  }
  
  endMath = max(endMath, 1); // limit the lowest possible value to 1, data below this limit gets truncated 
  endMath = min(endMath, 1023); // limit the highest possible value to 1023, data above this limit gets truncated 
  
   /*  
  map to the full length of the current wavetable with 50 samples of space between 
  start and end time to prevent overlap and crashing
  */
  
  endPosition = map(endMath, 1, 1023, startPosition + 50, CURRENT_TABLE);  

  pot7Raw = mozziAnalogRead(7); // read pot 7 on Pin (A7) value is 1-1023
  sampleCvRaw = (mozziAnalogRead(8) - 512); // read sample CV on Pin (A8) value is 0-1023
  
   /*  
  The CV inputs have a DC offset added to them to convert the +5/-5 signal from Eurorack into 
  0-3.3 volts for clean reading into Teensy in the full range of the Eurorack standard. 
  This puts ~1.65v into the Teensy when nothing is plugged into the Jack. 
  This ~1.65v (interpreted in the Teensy as 512 bits) is our 0 value to allow for bipolar control. 
  We subtract it from the reading to give us a 0 starting point when nothing is plugged in. 
  */
  
  if (sampleCvRaw > 512) // If the reading is above 512 we know it's a positive value 
  {
  sampleMath = (pot7Raw - sampleCvRaw); // So we add it to the Pot
  }
  else if (sampleCvRaw < 512) // If the reading is above 512 we know it's a negative value
  {
  sampleMath = (pot7Raw + sampleCvRaw); // So we subtract it from the Pot 
  }
  
  sampleMath = max(sampleMath, 1); // limit the lowest possible value to 1, data below this limit gets truncated 
  sampleMath = min(sampleMath, 1023); // limit the highest possible value to 1023, data above this limit gets truncated 
  
  /* 
  map from 1 to 9 (the number of sound files loaded + 1 to account for 0). If adding more files into the sketch, 
  change the last number of this map function to the total number of files + 1.
  */
  
  sampleSelect = map(sampleMath, 1, 1023, 1, 9); 
  
  /* Use a switch statement to hot swap between wavetables. 
  If you've added files to this sketch, you must add a new case for each  
  new file in the following statement. 
  */
  
  switch (sampleSelect) {
    case 1:
      aSample.setTable(BASSICONE_DATA); // change the current wavetable
      CURRENT_TABLE = BASSICONE_NUM_CELLS; // set the wavetable length to current wavetable
      break;

    case 2:
      aSample.setTable(BASSICTWO_DATA); // change the current wavetable
      CURRENT_TABLE = BASSICTWO_NUM_CELLS; // set the wavetable length to current wavetable
      break;

    case 3:
      aSample.setTable(BASSICTHREE_DATA); // change the current wavetable
      CURRENT_TABLE = BASSICTHREE_NUM_CELLS; // set the wavetable length to current wavetable
      break;

    case 4:
      aSample.setTable(BASSICFOUR_DATA); // change the current wavetable
      CURRENT_TABLE = BASSICFOUR_NUM_CELLS; // set the wavetable length to current wavetable
      break;

    case 5:
      aSample.setTable(BASSICFIVE_DATA); // change the current wavetable
      CURRENT_TABLE = BASSICFIVE_NUM_CELLS; // set the wavetable length to current wavetable
      break;
      
    case 6:
      aSample.setTable(BASSICSIX_DATA); // change the current wavetable
      CURRENT_TABLE = BASSICSIX_NUM_CELLS; // set the wavetable length to current wavetable
      break;
      
    case 7:
      aSample.setTable(BASSICSEVEN_DATA); // change the current wavetable
      CURRENT_TABLE = BASSICSEVEN_NUM_CELLS; // set the wavetable length to current wavetable
      break;
      
    case 8:
      aSample.setTable(BASSICEIGHT_DATA); // change the current wavetable
      CURRENT_TABLE = BASSICEIGHT_NUM_CELLS; // set the wavetable length to current wavetable
      break;
     
  }
  
  aSample.setStart(startPosition); // set the final startPosition to the calculation of Pot +/- CV
  aSample.setEnd(endPosition);    // set the final endPosition to the calculation of Pot +/- CV 
  
  aSample.setFreq(pitch);  // Set the final pitch to the calculation of Pot +/- CV.
  
  analogWrite(A9, (int)aSample.next() * 100); // mirror the audio output boost the gain x 100  and write it to the LED 

}

int updateAudio() {
  return aSample.next() * 100; // step through the next phase incremement of the audio and boost the gain x 100 
}

void loop() {
  audioHook(); 
}







