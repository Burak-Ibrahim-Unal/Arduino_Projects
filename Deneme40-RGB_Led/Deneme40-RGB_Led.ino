int kirmiziPin = 9;
int maviPin = 10;
int yesilPin = 11;
 
void setup()
{
  pinMode(kirmiziPin, OUTPUT);
  pinMode(maviPin, OUTPUT);
  pinMode(yesilPin, OUTPUT);   
}
 
void loop()
{     
  //Mavi renk için kırmızı ve yeşil pine voltaj verilip
  //gerilim farkı düşürülüyor. Mavi pin toprak.  
  analogWrite(maviPin,0);
  analogWrite(kirmiziPin, 255);    
  analogWrite(yesilPin, 255); 
  delay(750);
 
  //Yeşil renk için kırmızı ve mavi pine voltaj verilip
  //gerilim farkı düşürülüyor. Yeşil pin toprak.  
  analogWrite(yesilPin, 0);   
  analogWrite(kirmiziPin, 255);    
  analogWrite(maviPin,255);  
  delay(750);  
 
  //Kırmızı renk için yeşil ve mavi pine voltaj verilip
  //gerilim farkı düşürülüyor. Kırmızı pin toprak.  
  analogWrite(kirmiziPin, 0);   
  analogWrite(yesilPin, 255);  
  analogWrite(maviPin,255); 
  delay(750); 
   
  /**Ortak katotta olduğu gibi direk istenilen değerle
    renk elde etmek için alttaki fonksiyon da kullanılabilir.**/
 
  //Mavi için
  analogWrite(maviPin, istenenDeger(255)); //Mavi ledin yanması isteniyor
  analogWrite(kirmiziPin, istenenDeger(0));  //Kırmızı led sönsün
  analogWrite(yesilPin, istenenDeger(0)); //Yeşil led sönsün
  delay(750);
 
  //Renkler karıştırılarak kullanılabilir  
  analogWrite(kirmiziPin, istenenDeger(150));
  analogWrite(maviPin, istenenDeger(50));
  analogWrite(yesilPin, istenenDeger(75));
  delay(750);
}
 
int istenenDeger(int deger)
{
  return 255-deger;
}
