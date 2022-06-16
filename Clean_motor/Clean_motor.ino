#define pwmPin 9
#define dirPin 5
#define ioPin 7

int nSpeed = 0;

void setup() {
  pinMode(pwmPin, OUTPUT);
  pinMode(dirPin, OUTPUT);
  pinMode(ioPin, INPUT);

  digitalWrite(dirPin, LOW);
}

void loop() {
  if (digitalRead(ioPin) == HIGH) {
    nSpeed++;
    if (nSpeed >= 200) nSpeed = 200;
    analogWrite(pwmPin, nSpeed);
    delay(20);
  }
  else {
    nSpeed = 0;
    analogWrite(pwmPin, nSpeed);
  }
}
