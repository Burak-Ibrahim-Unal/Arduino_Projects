const int A0pin=A0;

float ReadValue;
float Voltage;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  ReadValue = analogRead(A0pin);
  Serial.print("Value:");
  Serial.println(ReadValue);
  Serial.print("Voltage:");
  Serial.println(ReadValue*5/1023);
  delay(500);
}
