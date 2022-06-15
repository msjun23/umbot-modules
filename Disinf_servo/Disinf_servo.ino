#include <Servo.h>

#define servoPin 9
#define ioPin 7

Servo servo;
int state = 0;

void setup(){
  pinMode(ioPin, INPUT);
  servo.attach(servoPin);
}

void loop() {
  if (state == 0 && digitalRead(ioPin) == HIGH) {
    state = 1;
    servo.write(180);

    delay(2000);
    servo.write(0);
  }
  else if (state == 1 && digitalRead(ioPin) == LOW) {
    state = 0;
    servo.write(180);

    delay(2000);
    servo.write(0);
  }
  else {
    servo.write(0);
  }
}
