// pin definitions
int ledPin = 2;
int buttonPin = 3;

// global variables
int toggleState;
int buttonState;

void setup() {
  // setup pin modes
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {  
  buttonState = digitalRead(buttonPin);
  
  while(buttonState == 0)
  {
    toggleState =! toggleState;
    digitalWrite(ledPin, toggleState);
    delay(50);
    buttonState = digitalRead(buttonPin); // Bu kodu butona basıldığında buttonState 1 durumuna geçsin ve while döngüsünden çıksın diye yazdık.
  }

  toggleState =! toggleState;
  digitalWrite(ledPin, toggleState);
  delay(200);
}
