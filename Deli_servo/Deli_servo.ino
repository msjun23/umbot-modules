#include <Servo.h>

#define servoPin 9
#define ioPin 7

Servo servo;

int angle = 0;

void setup(){
  pinMode(ioPin, INPUT);
  servo.attach(servoPin);
}

void loop() {
  if (digitalRead(ioPin) == HIGH) {
    // On delivery
    servo.write(100);
  }
  else {
    // Waiting
    servo.write(0);
  }
}
