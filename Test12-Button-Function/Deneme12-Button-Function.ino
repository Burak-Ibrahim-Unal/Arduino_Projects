const int button1=2;
const int button2=3;
const int button3=4;
const int led=7;

int button1status;
int button2status;
int button3status;
int counter;


int myCounter(){
  button3status=digitalRead(button3);
  while(button3status==HIGH){
    button1status=digitalRead(button1);
    button2status=digitalRead(button2);
    if ( button1status==HIGH){
      counter++;
      Serial.print("Counter:");
      Serial.println(counter);
      if ( button1status==HIGH){
          while(1){
          button1status=digitalRead(button1);
          if(button1status==LOW)
          break;        
          }
      }
    }
    
      else if(button2status==HIGH){
        counter--;
        Serial.print("Counter:");
        Serial.println(counter);
        if ( button2status==HIGH){
          while(1){
          button2status=digitalRead(button2);
          if(button2status==LOW)
          break;                  
          
          }
        }
       }
       button3status=digitalRead(button3status);
     }
     return counter;
     }

void setup() {
  // put your setup code here, to run once:
  pinMode(button1,INPUT);
  pinMode(button2,INPUT);
  pinMode(button3,INPUT);
  pinMode(led,OUTPUT);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  counter = myCounter();
  for(int i=0;i<counter;i++){
    digitalWrite(led,HIGH);
    delay(150);
    digitalWrite(led,LOW);
    delay(150);
  }
  while(1);
}
