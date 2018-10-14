char state;
int flag = 0;
void setup() {
  pinMode(12, OUTPUT);//move channel A 
  pinMode(13, OUTPUT);//move channel B
  pinMode(9, OUTPUT);//brake channel A
  pinMode(8, OUTPUT);//brake channel B
  Serial.begin(9600);
}
void loop() {
  if (Serial.available() > 0) {
    state = Serial.read();
    flag = 0;
  }
  if (state == 'F') {
    //go right
    digitalWrite(12, HIGH);
    digitalWrite(13, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(8, LOW);
    analogWrite(3, 255);
    analogWrite(11, 255);
    if (flag == 0) {
      Serial.println("GO Foward");
      flag = 1;
    }
  }
  //BRAKE BITCH
  //digitalWrite(9, HIGH);
  ///digitalWrite(8, HIGH);


  else if (state == 'R') {
    //go back
    digitalWrite(12, HIGH);
    digitalWrite(9, LOW);
    analogWrite(3, 255);
    digitalWrite(13, LOW);
    digitalWrite(8, LOW);
    analogWrite(11, 255);
    if (flag == 0) {
      Serial.println("Turn Right");
      flag = 1;
    }

  }

  //go forward
  else if (state == 'L') {
    digitalWrite(12, LOW);
    digitalWrite(9, LOW);
    analogWrite(3, 255);
    digitalWrite(13, HIGH);
    digitalWrite(8, LOW);
    analogWrite(11, 255);
    if (flag == 0) {
      Serial.println("Turn Left");
      flag = 1;
    }

  }


  //go left
  else if (state == 'B') {
    digitalWrite(12, LOW);
    digitalWrite(9, LOW);
    analogWrite(3, 255);
    digitalWrite(13, LOW);
    digitalWrite(8, LOW);
    analogWrite(11, 255);
    if (flag == 0) {
      Serial.println("Go Back");
      flag = 1;
    }
  }
  else if (state == 'S') {
    digitalWrite(9, HIGH);
    digitalWrite(8, HIGH);
    if (flag == 0) {
      Serial.println("BRAKE BOI BRAKE");
      flag = 1;
    }

  }

}
