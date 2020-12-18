#include <LiquidCrystal.h>

LiquidCrystal lcd(7, 8, 9,10, 11, 12);

const int lm35 = A3  ;

float voltaj_deger = 0;
float sicaklik = 0;
int gelen_veri = 0;

void setup()
{
  lcd.begin(16, 2);
  pinMode(lm35, INPUT);
}

void loop()
{
  gelen_veri = analogRead(lm35);
  voltaj_deger = (gelen_veri / 1023.0) * 900; //5000di 1000 yaptım.
  sicaklik = voltaj_deger / 10.0;
  lcd.clear();
  lcd.home();
  lcd.print("sicaklik = ");
  lcd.setCursor(0, 1);
  lcd.print(sicaklik);
  lcd.print(" derece");
  delay(1000);

}
