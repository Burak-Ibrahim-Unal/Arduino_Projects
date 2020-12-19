/* 
Potansiyometrenin ayar ucu bize dönükken:
sağ bacağı +
sol bacağı - kutbunda
orta bacağı analog A0 çıkışında 
(+ ile - yer değiştirdiğinde sadece sağdan sola ya da soldan
sağa ledin parlaklığını artırıp azaltma ayarı değişir.)
----------------------------------------------------------
Ledin + bacağı PWM digital noktasında.Yaklaşık işaretiyle 
işaretlenen pinler... - Bacağı 330ohm ile - kutbuna bağlı
---------------------------------------------------------
Digital pinler için 10 bitlik hafıza saklı. 0-1023 arası 
değerlerle işlem yapılabilir (2^10)

Analog pinler için 8 bitlik hafıza ayrılmış durumda 0-255
arası değerlede işlem yapılabilir (2^8)

Dolayısıyla analogWrite komutu kullanılacaksa ve digital bilgi
analog bilgiye çevirilecekse   state=analogRead(potPin / 4);
şeklinde bilgi okunması sağlanabilir.
----------------------------------------------------------
*/
int ledPin = 3;
int potPin = A0;
int state;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);                  
  pinMode(potPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  state=analogRead(potPin) / 4;
  analogWrite(ledPin,state);
}
