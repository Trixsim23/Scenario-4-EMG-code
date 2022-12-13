  // Setting names for each of the Pins in analogue in 
const int EMGin=0;
  //initialising variables where the readings from the emg wil be stored
float EMGval=0; 
float mv=0;

void setup() {
  Serial.begin(9600);
  // Putting pin A0 as an input 
  pinMode(EMGin,INPUT);

}

void loop() {
  EMGval=analogRead(EMGin);
  mv=((EMGval/1023)*5);
  Serial.print ("actual value :  ");Serial.println(EMGval);
  Serial.print ("reading in mv:  ");Serial.println(mv);

}
