#include <Servo.h>

#define servoPin 9
#define ioPin 7

Servo servo;

void setup(){
  pinMode(ioPin, INPUT);
  servo.attach(servoPin);
}

void loop() {
  if (digitalRead(ioPin) == LOW){
    servo.write(0);
  }
  else {
    // Sanitizer spray!!!
    servo.write(180);
    delay(2000);
  }
}
