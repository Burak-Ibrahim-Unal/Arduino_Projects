#include <LiquidCrystal.h>

int rs=7; //rs 8.pinde> register select
int e=8; // enable pini 7'de

int d4=9; //data serisi d pinlerini sırasıyla atadık.
int d5=10;
int d6=11;
int d7=12;
LiquidCrystal mylcd(rs,e,d4,d5,d6,d7);
//Eğer rw pini de direkt + ya da - ye bağlanmayacaksa LiquidCrystal mylc(rs,rw,e,d4,d5,d6,d7); olarak tanımlanmalı.

void setup() {
  // put your setup code here, to run once:
  mylcd.begin(16,2);
  mylcd.print("Salamlar");
}

void loop() {
  // put your main code here, to run repeatedly:
}
