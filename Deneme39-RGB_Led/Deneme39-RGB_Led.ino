int kirmiziPin = 9;
int maviPin = 10;
int yesilPin = 11;
 
void setup() {
  pinMode(kirmiziPin, OUTPUT);
  pinMode(maviPin, OUTPUT);
  pinMode(yesilPin, OUTPUT);
}
 
void loop() {
  //Mavi renk için kırmızı ve yeşil pine voltaj verilip
  //gerilim farkı düşürülüyor. Mavi pin toprak.
  digitalWrite(maviPin, LOW);
  digitalWrite(kirmiziPin, HIGH);
  digitalWrite(yesilPin, HIGH); 
  delay(1000);
 
  //Yeşil renk için kırmızı ve mavi pine voltaj verilip
  //gerilim farkı düşürülüyor. Yeşil pin toprak.
  digitalWrite(yesilPin, LOW);
  digitalWrite(kirmiziPin, HIGH);
  digitalWrite(maviPin, HIGH);
  delay(1000);
 
  //Kırmızı renk için yeşil ve mavi pine voltaj verilip
  //gerilim farkı düşürülüyor. Kırmızı pin toprak.
  digitalWrite(kirmiziPin, LOW);
  digitalWrite(yesilPin, HIGH);
  digitalWrite(maviPin, HIGH);
  delay(1000);  
}
