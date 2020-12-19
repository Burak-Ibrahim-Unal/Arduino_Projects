int led = 9;           // the PWM pin the LED is attached to
int button=2;

void setup() {
  // put your setup code here, to run once:
    pinMode(led, OUTPUT);
    Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
    for(int i=0;i<=255;i+=5){
    analogWrite(led, i);
    Serial.print("i=");
    Serial.println(i);
    }
 
    for( int j=255;j>=0;j-=5){
    analogWrite(led, j);
    Serial.print("j=");
    Serial.println(j);
    }
}
