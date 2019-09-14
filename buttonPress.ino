#include <Servo.h>
#define SERVOPIN 9

Servo myServo;
void setup() {
  // put your setup code here, to run once:
  myServo.attach(SERVOPIN);
}

void loop() {
  // put your main code here, to run repeatedly:
  myServo.write(0);
  delay(500);
  myServo.write(45);
  delay(500);
  
 }
