#include <Arduino.h>
#define DIR 33 //Nos indica el sentido del mov. 
#define STEP 32 //Un pulso equivale a un paso.

void setup() {
  pinMode(DIR, OUTPUT); 
  pinMode(STEP, OUTPUT); 
}

void loop() {
  digitalWrite(DIR, HIGH); 
  for (size_t i = 0; i < 10000; i++)
  {
    digitalWrite(STEP, HIGH); 
    delayMicroseconds(100);
//    delay(100);
    digitalWrite(STEP, LOW); 
//    delay(100);
    delayMicroseconds(100);  
  }
  delay(100); 
  //Atras 
  digitalWrite(DIR, LOW); 
  for (size_t i = 0; i < 1000; i++)
  {
    digitalWrite(STEP, HIGH); 
    delay(1);
    digitalWrite(STEP, LOW); 
    delay(1);  
  }
  delay(100); 

}