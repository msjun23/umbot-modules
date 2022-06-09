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
  if (digitalRead(ioPin) == HIGH){
    // Reverse lock state!!!
    if (angle == 0) {
      angle = 100;
    }
    else {
      angle = 0;
    }
  }

  servo.write(angle);
  delay(1000);
}
