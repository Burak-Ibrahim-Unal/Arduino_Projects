const int buzzerpin=2;
const int ledpin=3;
const int buttonpin=4;

int buttonstatus=0;

void Start(){
  digitalWrite(ledpin,HIGH);
  delay(300);
  digitalWrite(ledpin,LOW);
  delay(300);
}
void Stop(){
  digitalWrite(buzzerpin,HIGH);
  delay(200);
  digitalWrite(buzzerpin,LOW);
  delay(200);
}

void setup() {
  // put your setup code here, to run once:

  pinMode(ledpin,OUTPUT);
  pinMode(buzzerpin,OUTPUT);
  pinMode(buttonpin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonstatus = digitalRead(buttonpin);

  if (buttonstatus==HIGH){
    Stop();
  }
  else if (buttonstatus==LOW){
    Start();
  }
}
