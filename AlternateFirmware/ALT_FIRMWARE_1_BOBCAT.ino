/*
__/\\\\\\\\\\\\\_________/\\\\\_______/\\\\\\\\\\\\\__________/\\\\\\\\\_____/\\\\\\\\\_____/\\\\\\\\\\\\\\\_        
 _\/\\\/////////\\\_____/\\\///\\\____\/\\\/////////\\\_____/\\\////////____/\\\\\\\\\\\\\__\///////\\\/////__       
  _\/\\\_______\/\\\___/\\\/__\///\\\__\/\\\_______\/\\\___/\\\/____________/\\\/////////\\\_______\/\\\_______      
   _\/\\\\\\\\\\\\\\___/\\\______\//\\\_\/\\\\\\\\\\\\\\___/\\\_____________\/\\\_______\/\\\_______\/\\\_______     
    _\/\\\/////////\\\_\/\\\_______\/\\\_\/\\\/////////\\\_\/\\\_____________\/\\\\\\\\\\\\\\\_______\/\\\_______    
     _\/\\\_______\/\\\_\//\\\______/\\\__\/\\\_______\/\\\_\//\\\____________\/\\\/////////\\\_______\/\\\_______   
      _\/\\\_______\/\\\__\///\\\__/\\\____\/\\\_______\/\\\__\///\\\__________\/\\\_______\/\\\_______\/\\\_______  
       _\/\\\\\\\\\\\\\/_____\///\\\\\/_____\/\\\\\\\\\\\\\/_____\////\\\\\\\\\_\/\\\_______\/\\\_______\/\\\_______ 
        _\/////////////_________\/////_______\/////////////__________\/////////__\///________\///________\///________
            
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
#include <MozziGuts.h> // Necessary to run this sketch
#include <Oscil.h> // oscillator template
#include <tables/whitenoise8192_int8.h> // recorded audio wavetable
#include <tables/brownnoise8192_int8.h> // recorded audio wavetable

#include <Ead.h> // exponential attack decay
#include <mozzi_rand.h> // random library 

#define CONTROL_RATE 256 // powers of 2 please

Oscil<WHITENOISE8192_NUM_CELLS, AUDIO_RATE> aNoise(WHITENOISE8192_DATA);
Oscil<WHITENOISE8192_NUM_CELLS, AUDIO_RATE> bNoise(WHITENOISE8192_DATA);

Ead envelopeOne(CONTROL_RATE); // resolution will be CONTROL_RATE
Ead envelopeTwo(CONTROL_RATE); // resolution will be CONTROL_RATE

int trigOneState = 0; // Variable to hold trigger state for first drum 
int trigTwoState = 0; // Variable to hold trigger state for second drum 

int lastTrigOneState = 0; // Variable to hold last trigger state for first drum
int lastTrigTwoState = 0; // Variable to hold last trigger state for second drum 

int toggle = 0; // Variable to hold toggle switch state 
 
int pitchPotOne = 0; // Variable to hold raw data for pitch potentiometer for first drum
int pitchOneCvRaw = 0; // Variable to hold raw data for pitch CV for first drum 
int pitchOneMath = 0; // Variable to hold pitch math of potentiometer & CV for first drum
float pitchOne = 0; // Variable to hold final pitch information for first drum 

int decayPotOne = 0; // Variable to hold raw data for decay potentiometer for first drum
int decayOneCvRaw = 0; // Variable to hold raw data for decay CV for first drum
int decayOneMath = 0; // Variable to hold decay math of potentiometer & CV for first drum
int decayOne = 0; // Varialbe to hold final decay information for first drum 

int gainOne; // Variable to hold envelope information for first drum as INT

int pitchPotTwo= 0; // Variable to hold raw data for pitch potentiometer for second drum 
int pitchTwoCvRaw = 0; // Variable to hold raw data for pitch CV for second drum 
int pitchTwoMath = 0; // Variable to hold pitch math of potentiometer & CV for second drum
float pitchTwo = 0; // Variable to hold final pitch information for second drum 
 
int decayPotTwo = 0; // Variable to hold raw data for decay potentiometer for second drum 
int decayTwoCvRaw = 0; // Variable to hold raw data for decay CV for second drum
int decayTwoMath = 0; // Variable to hold decay math of potentiometer & CV for second drum
int decayTwo = 0;  // Varialbe to hold final decay information for seond drum 

int gainTwo; // Variable to hold envelope information for second drum as INT

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

void setup(){
  randSeed(); // fresh random, MUST be called before startMozzi - wierd bug
  pinMode(2, INPUT); // Initialize pin 2 as input
  pinMode(3, INPUT); // Initalize pin 3 as input
  pinMode(4, INPUT); // Initialize pin 4 as input
  startMozzi(CONTROL_RATE); // Initialize Mozzi 
}


void updateControl(){
 
 ///////////////////////////////////////////
                  GLOBAL
 ///////////////////////////////////////////
  
  // jump around in audio noise table to disrupt obvious looping in sound file. 
  aNoise.setPhase(rand((unsigned int)WHITENOISE8192_NUM_CELLS));
  bNoise.setPhase(rand((unsigned int)WHITENOISE8192_NUM_CELLS));
    
  trigOneState = digitalRead(3); // Read trigger one input on digital pin 3
  trigTwoState  = digitalRead(2); // Read trigger two input on digital pin 2  
  
  toggle = digitalRead(4); // Read toggle switch on digital pin 4
  
  if (toggle == HIGH) {   // If the switch is flipped in the on position
     aNoise.setTable(BROWNNOISE8192_DATA); // change the current wavetable for drum one to brown noise
     bNoise.setTable(BROWNNOISE8192_DATA); // change the current wavetable for drum two to brown noise
     CURRENT_TABLE = BROWNNOISE8192_NUM_CELLS; // set the wavetable length to current wavetable
  }
  
  else { // If the switch is in the low position 
     aNoise.setTable(WHITENOISE8192_DATA); // change the current wavetable for drum one to white noise
     bNoise.setTable(WHITENOISE8192_DATA); // change the current wavetable for drum two to white noise
     CURRENT_TABLE = WHITENOISE8192_NUM_CELLS; // set the wavetable length to current wavetable
  }
  
  ///////////////////////////////////////////
                 DRUM ONE
  ///////////////////////////////////////////

  decayPotOne = analogRead(A7); // Read decay potentiometer for drum one on Pin (A7) value is 0-1023 
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
  
  if (trigOneState != lastTrigOneState && trigOneState == HIGH) { 
    envelopeOne.start(10, decayOne); // Trigger the envelope. 10 was set for attack time as any smaller increment didn't trigger the envelope.
  }
  
  lastTrigOneState = trigOneState;  // set the last trigger state to the current trigger state because we are done with the reading 

  pitchPotOne = analogRead(A1); // Read pitch potentiometer for drum one on Pin (A1) value is 0-1023 
  pitchOneCvRaw = analogRead(A2) - 512;  // Read pitch CV on Pin (A2) value is 0-1023 
  
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
  
  pitchOne = mapfloat(pitchOneMath, 1, 1023, 0.01, 3.0); // map from 0.01% to triple speed. 
 
  aNoise.setFreq(pitchOne);  // Set the frequency of first drum 
  
  ///////////////////////////////////////////
                 DRUM TWO 
  ///////////////////////////////////////////

  decayPotTwo   = analogRead(A3); // Read decay potentiometer for drum two on Pin (A3) value is 0-1023
  decayTwoCvRaw = analogRead(A4) - 512; // Read decay potentiometer for drum two on Pin (A4) value is 0-1023 
  
    /*  
  The CV inputs have a DC offset added to them to convert the +5/-5 signal from Eurorack into 
  0-3.3 volts for clean reading into Teensy in the full range of the Eurorack standard. 
  This puts ~1.65v into the Teensy when nothing is plugged into the Jack. 
  This ~1.65v (interpreted in the Teensy as 512 bits) is our 0 value to allow for bipolar control. 
  We subtract it from the reading to give us a 0 starting point when nothing is plugged in. 
  */
  
  if (decayTwoCvRaw > 512) // If the reading is above 512 we know it's a positive value 
  {
  decayTwoMath = (decayPotTwo - decayTwoCvRaw); // So we add it to the Pot  
  }
  else if (decayTwoCvRaw < 512) // If the reading is below 512 we know it's a negatie value 
  {
  decayTwoMath = (decayPotTwo + decayTwoCvRaw); // So we subtract it from the Pot
  }
    
  decayTwoMath = max(decayTwoMath, 1);   // limit the lowest possible value to 1, data below this limit gets truncated 
  decayTwoMath = min(decayTwoMath, 1023); // limit the highest possible value to 1023, data above this limit gets truncated 
  
  decayTwo = map(decayTwoMath, 1, 1023, 0, 255);// Map to full range of exponential attack/decay envelope. Range is 0-255 bits
                                                // which translates to 2ms - 230ms
  
  /* Detect only the rising edge of the incoming trigger by only detecting a change of state. If it the trigger 
  has changed state and is HIGH then we know it is a positive trigger. 
  */
  
  if (trigTwoState != lastTrigTwoState && trigTwoState == HIGH) { 
    envelopeTwo.start(10, decayTwo); // Trigger the envelope. 10 was set for attack time as any smaller increment didn't trigger the envelope.
  }
  
  lastTrigTwoState = trigTwoState;  // set the last trigger state to the current trigger state because we are done with the reading 
  
  pitchPotTwo = analogRead(A5); // Read pitch potentiometer for drum two on Pin (A5) value is 0-1023
  pitchTwoCvRaw = analogRead(A6) - 512; // Read CV input for drum two on Pin (A6) value is 0-1023 
  
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
  
  pitchTwo = mapfloat(pitchTwoMath, 1, 1023, 0.01, 3.0); // Map from 0.01% to triple speed 
 
  bNoise.setFreq(pitchTwo); // Set frequency of drum two
  
 ////////////////////////////////////////////////////////////////////////////////////
  
  gainOne = (int) envelopeOne.next(); // Set amplitude information as INT for drum one to envelope one
  gainTwo = (int) envelopeTwo.next(); // Set amplitude information as INT for drum two to envelope two
 
 analogWrite(A9, (int)(gainOne * aNoise.next()) + (gainTwo * bNoise.next()) * 5);  // Write audio output to LED. Multiply it by 5 for brightness increase
}

int updateAudio(){
 /* Multiplying amplitude information by an audio source allows us to control volume the audio source with it. 
 Adding two signals together is how we "mix" in Mozzi. We will add both audio sources together and multiply 
 both by 5 to boost the overall gain of everything to taste. 
 */
  return ( (gainOne * aNoise.next()) + (gainTwo * bNoise.next()) ) * 5;
}


void loop(){
  audioHook(); // Required 
}
