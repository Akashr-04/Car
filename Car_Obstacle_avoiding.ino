#include <AFMotor.h>
#include <Servo.h>

AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
AF_DCMotor motor3(3);
AF_DCMotor motor4(4);
Servo Servol;

void setup() {
  // put your setup code here, to run once:
  Servol.attach(10);
  Servol.write(115);

}

void loop() {
  // put your main code here, to run repeatedly:
  motor1.setSpeed(255);
  motor2.setSpeed(255);
  motor3.setSpeed(255);
  motor4.setSpeed(255);
  lookRight();
  delay(2000);
  lookLeft();
  delay(2000);
  moveForward();
  delay(2000);
  moveBackward();
  delay(2000);
  moveLeft();
  delay(2000);
  moveRight();
  delay(2000);
  moveStop();
  delay(2000);

}

void moveForward(){
  motor1.run(FORWARD);
  motor2.run(FORWARD);
  motor3.run(FORWARD);
  motor4.run(FORWARD);
}

void moveBackward(){
  motor1.run(BACKWARD);
  motor2.run(BACKWARD);
  motor3.run(BACKWARD);
  motor4.run(BACKWARD);
}

void moveLeft(){
  motor1.run(FORWARD);
  motor4.run(FORWARD);
  motor3.run(BACKWARD);
  motor2.run(BACKWARD);
}

void moveRight(){
  motor2.run(FORWARD);
  motor3.run(FORWARD);
  motor1.run(BACKWARD);
  motor4.run(BACKWARD);
}

void moveStop(){
  motor1.run(RELEASE);
  motor2.run(RELEASE);
  motor3.run(RELEASE);
  motor4.run(RELEASE);
}

int lookRight(){
  Servol.write(50);
  delay(500);
  Servol.write(115);
}

int lookLeft(){
  Servol.write(170);
  delay(500);
  Servol.write(115);
}