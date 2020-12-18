int counter=0;
int const myvalue=10;
#define timer 500
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your  main code here, to run repeatedly:
  Serial.print("Counter value:");
  Serial.println(counter);
  counter += 1;
  delay(timer);
}
