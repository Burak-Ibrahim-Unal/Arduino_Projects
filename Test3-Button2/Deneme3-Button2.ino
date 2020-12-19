int but1=2;
int but2=3;
int but3=4;
int but4=5;

int but1status;
int but2status;
int but3status;
int but4status;


int led1=8;
int led2=9;
int led3=10;


void setup() {
  // put your setup code here, to run once:
  pinMode(but1,INPUT);
  pinMode(but2,INPUT);
  pinMode(but3,INPUT);
  pinMode(but4,INPUT);

  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  but1status=digitalRead(but1);
  but2status=digitalRead(but2);
  but3status=digitalRead(but3);
  but4status=digitalRead(but4);
  
  if(but1status==HIGH){
    digitalWrite(led1,HIGH);
  }
  else if(but2status==HIGH){
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  }
  else if(but3status==HIGH){
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    delay(250);
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    delay(250);
  }
  else if(but4status==HIGH){
    digitalWrite(led1,HIGH);
    delay(250);
    digitalWrite(led1,LOW);
    digitalWrite(led2,HIGH);
    delay(250);
    digitalWrite(led2,LOW);
    digitalWrite(led3,HIGH);
    delay(250);
    digitalWrite(led3,LOW);
  }
  
  else{
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
  }
}
