int led=4;
int button=5;
int bstatus;

void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  pinMode(button,INPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  bstatus=digitalRead(button);
  if(bstatus == 1){
    digitalWrite(led,HIGH);
  }
  else{
    digitalWrite(led,LOW);
  }
}
