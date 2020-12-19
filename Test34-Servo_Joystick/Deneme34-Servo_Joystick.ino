#include <Servo.h>

Servo sg;

const int x=A0;
const int y=A1;

int xstate;
int ystate;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  sg.attach(3);
}

void loop() {
  // put your main code here, to run repeatedly:
  xstate=map(analogRead(x),0,1023,0,180);
  ystate=map(analogRead(y),0,1023,0,180);
  sg.write(xstate);
  
  
  
  Serial.println();

}
