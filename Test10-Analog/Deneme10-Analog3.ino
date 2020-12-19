const int A0pin=A0;
const int buzzer = 6;

int status=0;
int new_status;
void setup() {
  // put your setup code here, to run once:
  pinMode(buzzer,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  status=analogRead(A0pin);
  Serial.println(status);
  new_status=map(status,0,1023,0,255);

  analogWrite(buzzer,new_status);
  
}
