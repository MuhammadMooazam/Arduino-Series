int LeftMotorForward = 5;
int LeftMotorReverse = 3;
int RightMotorForward = 9;
int RightMotorReverse = 6;

void setup() {
  pinMode(LeftMotorForward, OUTPUT);
  pinMode(RightMotorForward, OUTPUT);
  pinMode(LeftMotorReverse, OUTPUT);
  pinMode(RightMotorReverse, OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {
    char command = Serial.read();
    Stop();  //initialize with motors stoped

    //Change pin mode only if new command is different from previous.
    //    Serial.println(command);

    switch (command) {
      case 'F':
        forward();
        break;
      case 'B':
        back();
        break;
      case 'L':
        left();
        break;
      case 'R':
        right();
        break;
    }
  }
}

void forward() {
  analogWrite(LeftMotorForward, 255);
  analogWrite(RightMotorForward, 255);
}
void back() {
  analogWrite(LeftMotorReverse, 255);
  analogWrite(RightMotorReverse, 255);
}
void left() {
  analogWrite(LeftMotorReverse, 255);
  analogWrite(RightMotorForward, 255);
}
void right() {
  analogWrite(LeftMotorForward, 255);
  analogWrite(RightMotorReverse, 255);
}
void Stop() {
  analogWrite(LeftMotorForward, 0);
  analogWrite(RightMotorForward, 0);
}