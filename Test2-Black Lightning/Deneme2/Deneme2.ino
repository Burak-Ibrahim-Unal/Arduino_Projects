int ledPin=2;
int buttonPin=8;
int state;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT);
  pinMode(buttonPin,INPUT_PULLUP);

}
/*Butona basıldığında led sönecek.Pullup direnç kullan.
Pulldown kullanılsaydı led yanacaktı.
Yani:
Pulldown direnç takılıyken - bacak arduinoya gidecek.
Pullup direnç takılıyken + bacak arduinoya gidecek.

*/
void loop() {
  // put your main code here, to run repeatedly:
  state=digitalRead(buttonPin);
  digitalWrite(ledPin,state);
}
