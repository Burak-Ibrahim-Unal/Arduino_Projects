#include <Servo.h>

Servo myServo;
int Servopin=9;
int potpin=0;
int val;

void setup() {
  // put your setup code here, to run once:
  myServo.attach(Servopin);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  val=analogRead(potpin);
  val=map(val,0,1023,0,180);
  myServo.write(val);
  Serial.println(val);
  delay(100);
}
