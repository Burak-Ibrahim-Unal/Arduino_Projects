#include <SPI.h>
#include <RFID.h>

const byte kirmizi_led = 7;
const byte yesil_led = 6;

RFID rfid(10,9);

byte kart[5] = {85,30,164,133,106};

boolean izin = true;

void setup() 
{
  Serial.begin(9600);

  SPI.begin();
  rfid.init();

  pinMode(kirmizi_led, OUTPUT);
  pinMode(yesil_led, OUTPUT);
}

void loop() 
{
  izin=true;
  if(rfid.isCard())
  {
    if(rfid.readCardSerial())
    {
      Serial.print("Kart bulundu ID: ");
      Serial.print(rfid.serNum[0]);
      Serial.print(",");
      Serial.print(rfid.serNum[1]);
      Serial.print(",");
      Serial.print(rfid.serNum[2]);
      Serial.print(",");
      Serial.print(rfid.serNum[3]);
      Serial.print(",");
      Serial.println(rfid.serNum[4]);
    }
    for(int i=0; i<5; i++)
    {
      if(rfid.serNum[i] != kart[i])
      {
        izin = false;
      }
    }
    if(izin==true)
    {
      Serial.println("izin Verildi");
      digitalWrite(yesil_led, HIGH);
      delay(1000);
      digitalWrite(yesil_led, LOW);
    }
    else
    {
     Serial.println("izinsiz Giris");
     digitalWrite(kirmizi_led, HIGH);
     delay(1000);
     digitalWrite(kirmizi_led, LOW);
    }
    


    rfid.halt();
  }
}
