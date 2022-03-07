#include <LiquidCrystal.h>
// definirea pinilor de conexiune

const int rs = 8, en = 9, d4 = 4, d5 = 5, d6 = 6, d7 = 7;

static LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int var1=0, var2=0, s=0, m=0, h=18;
int aux=0, c=0;
float a, T;

void setup()
{ 
  lcd.begin(16,2);
}

void loop(){
 a=analogRead(A0);
  	lcd.setCursor(0,0);
  	T=(a*5000.0)/1023/10-50;
  	lcd.print("Temp = ");
  	lcd.print(T);
  	lcd.print(" 'C");
}