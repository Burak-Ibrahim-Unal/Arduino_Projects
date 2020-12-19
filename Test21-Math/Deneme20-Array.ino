int ledArray[] = {2,3,4,5,6,7,8,9};

int delayTime = 50;

void setup() {
  //initialise ledArray as outputs
  for(int i = 0; i<10; i++)
  {
    pinMode(ledArray[i], OUTPUT);
  }
}

void loop() {
  //turn LEDs on from 0-7
  for(int i = 0; i <= 7; i++)
  {
    digitalWrite(ledArray[i], HIGH);
    delay(delayTime);
  }

  //turn LEDs off from 7-0
  for(int i = 7; i >= 0; i--)
  {
    digitalWrite(ledArray[i], LOW);
    delay(delayTime*2);
  }
}
