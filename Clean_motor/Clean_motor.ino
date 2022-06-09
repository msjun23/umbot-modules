#define pwmPin 9
#define dirPin 5
#define ioPin 7

int suctionMotor = 0;

void setup() {
  pinMode(pwmPin, OUTPUT);
  pinMode(dirPin, OUTPUT);
  pinMode(ioPin, INPUT);

  digitalWrite(dirPin, LOW);
}

void loop() {
  if (digitalRead(ioPin) == HIGH) {
    // Reverse suction motor state!!!
    if (suctionMotor == 0) {
      suctionMotor = 255;
    }
    else {
      suctionMotor = 0;
    }
  }
  analogWrite(pwmPin, suctionMotor);
  delay(2000);
}
