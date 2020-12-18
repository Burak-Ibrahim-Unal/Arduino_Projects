
const int analog=A0;
int anadurum;

void setup() {
  // put your setup code here, to run once:
  pinMode(analog,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  anadurum=analogRead(analog);
  Serial.println(anadurum);
}
