const int x=A0;
const int y=A1;
const int button = 7;
int xdurum;
int ydurum;
int bdurum;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  xdurum=analogRead(x);
  ydurum=analogRead(y);
  bdurum=digitalRead(button);

  Serial.print("buton'un durumu:");
  Serial.println(bdurum);
  Serial.print("x'in durumu:");
  Serial.println(xdurum);
  Serial.print("y'in durumu:");
  Serial.println(ydurum);
  Serial.println("***************************");
  delay(500);
  
}
