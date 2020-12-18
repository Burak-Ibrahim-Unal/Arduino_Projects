#include <Wire.h>

#include <LiquidCrystal.h>


int rs=7; //rs 8.pinde> register select
int e=8; // enable pini 7'de

int d4=9; //data serisi d pinlerini sırasıyla atadık.
int d5=10;
int d6=11;
int d7=12;
LiquidCrystal lcd(rs,e,d4,d5,d6,d7);

void setup() {
lcd.begin(16,2);
 lcd.print("BURAK IBRAHIM");
/*lcd.begin(16, 2) LCD’nin boyutlarını ayarlar. Programın void setup () bölümünde herhangi bir LiquidCrystal işlevinin önüne yerleştirilmelidir. 
Satır ve sütunların sayısı lcd.begin (sütunlar, satırlar) olarak belirtilir. 16×2 LCD için, lcd.begin (16, 2) kullanmanız gerekiyor ve 
20×4 LCD için lcd.begin (20, 4) kullanmanız gerekiyor.*/
}

void loop() {
  lcd.setCursor(0, 0); //İmleç konumu, lcd.setCursor (sütun, satır) ile tanımlanır.
  lcd.print("BURAK IBRAHIM");
  lcd.setCursor(4, 1);
  lcd.print(" UNAL "); //Bu işlev, LCD’ye metin yazdırmak için kullanılır.
  //lcd.home(); lcd.print("XXX"); ilk üç harfini X ile değiştirir.
  //lcd.setCursor(4, 1);
  //lcd.cursor(); //Bu işlev görünür bir imleç oluşturur.
  for(int i=0;i<16;i++){
         lcd.scrollDisplayRight( ); //Bu işlev, lcd.scrollDisplayLeft ( ) gibi davranır ancak metni sağa taşır.
         delay(300);
  }

  
  lcd.clear(); //LCD’de halihazırda görüntülenen herhangi bir metni siler.
  //lcd.noCursor();//Bu işlev görünür bir imleç kapatır.
  delay(100);
  //lcd.blink ( ); //500 milisaniyede bir yanıp sönen blok stili bir imleç oluşturur. lcd.noBlink ( ) devre dışı bırakır.
  

 

  /*lcd.write ( )
  LCD’ye farklı tipte veri yazmak için bu işlevi kullanabilirsiniz, örneğin bir sıcaklık sensöründen okuma veya bir GPS modülünden gelen koordinatlar. Kendiniz oluşturduğunuz özel 
  karakterleri yazdırmak için de kullanabilirsiniz. Programınızın void setup ( ) veya void loop ( ) bölümünde lcd.write ( ) öğesini kullanabilirsiniz.*/
  
  /*
    lcd.print (100, DEC) “100” yazar.
    lcd.print (100, BIN) “1100100” yazar.
    lcd.print (100, HEX) “64” yazar.
    lcd.print (100, OCT) “144” yazar. 
  */

  /*lcd.autoscroll( )
  Bu işlev bir metin dizisi alır ve dizinin karakter sayısının artışlarıyla sağdan sola kaydırır. Örneğin; 3 karakter uzunluğunda bir metin diziniz varsa,
  her adımda metni 3 alan sola kaydırır: lcd.noAutoscroll( ) kapatır.
  
  lcd.rightToLeft() Bu işlev, metnin ekrana yazdırıldığı yönü ayarlar. */
}
