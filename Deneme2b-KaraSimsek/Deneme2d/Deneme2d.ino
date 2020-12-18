void setup() {
  // put your setup code here, to run once:
  for (int i=2;i<=8;i++){
      pinMode(i,OUTPUT);
  }
}

void loop() {

  // put your main code here, to run repeatedly:
  for (int i=2;i<=8;i++){
      digitalWrite(i,HIGH);
      delay(50);
      
  }
  for(int j=8;j>=2;j--){
      digitalWrite(j,LOW);
      delay(50);
  }
}
