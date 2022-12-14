#include "Mouse.h"
//initialising pin names
const int EMGinclick=0;
const int mousecontrol=1;//

//initialising global variables
int EMGval=0;
int buttonval=0;

// do a test with the emg sensors to find out what the reference value
int ref=5;//example value 

//function for reading values
void analoginputs(){
  EMGval=analogRead(EMGinclick);
  buttonval=analogRead(mousecontrol);

}

void setup() {
  //Turning A0 into an input 
  pinMode(EMGinclick,INPUT);
  pinMode(mousecontrol,INPUT);
  //initialising serial comms and the mouse
  Serial.begin(9600);
  Mouse.begin();
}


void loop() {
//calling a function which reads all of the values from the electrodes and stores them in their respective variables 
  analoginputs();
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  float voltage = buttonval * (5.0 / 1023.0);
  // print out the value you read:
  Serial.println(voltage);
  //checks the value of a switch which if pressed ends the control of the code to the mouse.
  if ((voltage)==3.3){;
    if (EMGval> ref) {
    Mouse.click(MOUSE_LEFT);
    Serial.println("a click should have been done");
    delay(500);
    
  }
  }
  else{

    Mouse.end();
  }

  

}

