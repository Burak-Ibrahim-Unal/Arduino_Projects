#include <Servo.h>

Servo sg90;

void setup() {
  // put your setup code here, to run once:
  sg90.attach(3);
}

void loop() {
  // put your main code here, to run repeatedly:

  for ( int i=0;i<=180;i+=2){
      sg90.write(i);
      delay(100);
  }
  delay(500);
  for (int j=180;j>0;j-=2){
      sg90.write(j);
      delay(100);
  }
  delay(500);
}
