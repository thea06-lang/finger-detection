int count = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  motor_setup();
}

void loop() {
  // put your main code here, to run repeatedly:
if (Serial.available()>0){
  count = Serial.parseInt();
  if (count == 1) {
    forward(50);
    Serial.println("Forward");
  }
  else if (count == 2) {
    backward(50);
        Serial.println("Backward");
  }
  else if (count == 3) {
    turnLeft(50);
    Serial.println("Left");

  }
  else if (count == 4) {
    turnRight(50);
    Serial.println("Right");

  }
  else {
    stop();
    Serial.println("Stop");

  }
}
}
