#include <Mouse.h>

int EMGVal = 0;
int EMGclick = 1.5;
int EMGPin = A0;




void setup() {
pinMode(5,INPUT);
Serial.begin(9600);
}

void loop() {
  if (digitalRead(A5) ==HIGH){ 
  EMGVal = analogRead(A0);
Serial.println(EMGVal);

if (EMGVal > EMGclick) {
  Mouse.click();
  delay(100);
}
  }else {Serial.println("Goodbye!");delay(1000);}
 delay(1);

}
