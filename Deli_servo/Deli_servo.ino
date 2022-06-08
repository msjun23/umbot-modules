#include <Servo.h>

#define servoPin 9
#define ioPin 7

Servo servo;

int angle = 0; // servo position in degrees

void setup(){
  pinMode(ioPin, INPUT);
  servo.attach(servoPin);
}

void loop() {
  if (digitalRead(ioPin) == LOW){
    servo.write(0);
  }
  else {
    servo.write(100);
  }
}
