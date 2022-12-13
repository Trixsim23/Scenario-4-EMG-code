void setup() {
  // put your setup code here, to run once:
  //initialising variables where the readings from the emg wil be stored
  int EMGval=0; 



  // Setting names for each of the Pins in analogue in 
  int EMGin=A0;

  // Putting all of the pins for input
  PinMode(EMGin,input)


  Serial.begin(9600);
}

void loop() {
  EMGval=Serial.read(EMGin)
  Serial.println(EMGval)
  // put your main code here, to run repeatedly:

}
