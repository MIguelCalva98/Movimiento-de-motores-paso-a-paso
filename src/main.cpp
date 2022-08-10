#include <Arduino.h>
#define DIR 12 //Nos indica el sentido del mov. 
#define STEP 13 //Un pulso equivale a un paso.

void setup() {
  pinMode(DIR, OUTPUT); 
  pinMode(STEP, OUTPUT); 
}

void loop() {
  digitalWrite(DIR, HIGH); 
  for (size_t i = 0; i < 200; i++)
  {
    digitalWrite(STEP, HIGH); 
    delay(10);
    digitalWrite(STEP, LOW); 
    delay(10);  
  }
  delay(1000); 
  //Atras 
  digitalWrite(DIR, LOW); 
  for (size_t i = 0; i < 200; i++)
  {
    digitalWrite(STEP, HIGH); 
    delay(10);
    digitalWrite(STEP, LOW); 
    delay(10);  
  }
  delay(1000); 

}