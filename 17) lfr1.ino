#define LeftMotorReverse 2
#define LeftMotorForward 3
#define RightMotorReverse 4
#define RightMotorForward 5

#define leftIR 6
#define rightIR 7

void setup() {
  pinMode(LeftMotorForward, OUTPUT);
  pinMode(RightMotorForward, OUTPUT);
  pinMode(LeftMotorReverse, OUTPUT);
  pinMode(RightMotorReverse, OUTPUT);
  pinMode(leftIR, INPUT);
  pinMode(rightIR, INPUT);
}

void loop() {
  if (digitalRead(leftIR) == LOW && digitalRead(rightIR) == LOW)  //Forward
  {
    digitalWrite(LeftMotorForward, HIGH);
    digitalWrite(RightMotorForward, HIGH);
  }

  else if (digitalRead(leftIR) == HIGH && digitalRead(rightIR) == HIGH)  //Stop
  {
    digitalWrite(LeftMotorForward, LOW);
    digitalWrite(RightMotorForward, LOW);
  }

  else if (digitalRead(leftIR) == LOW && digitalRead(rightIR) == HIGH)  //Right
  {
    digitalWrite(LeftMotorForward, HIGH);
    digitalWrite(RightMotorForward, LOW);
  }

  else if (digitalRead(leftIR) == HIGH && digitalRead(rightIR) == LOW)  //Left
  {
    digitalWrite(LeftMotorForward, LOW);
    digitalWrite(RightMotorForward, HIGH);
  }
}
