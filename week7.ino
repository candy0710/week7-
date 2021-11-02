#include <Wire.h>
#include "SSD1306Wire.h"
SSD1306Wire  display(0x3c, 21, 22);

void setup() {
  // put your setup code here, to run once:
 Serial.begin(115200);
 pinMode(13,INPUT);

     display.init();

    display.flipScreenVertically(); //畫面上下顛倒顯示

    display.clear(); //清空畫面
   //設定字型與大小
    //display.drawString(0, 0, "Hello World");  //(x座標,y座標,"字串")
     //設定字型與大小
   // display.drawString(0, 0, "Hello World");  //(x座標,y座標,"字串")
    display.setFont(ArialMT_Plain_24);   //設定字型與大小
  
    //display.drawString(0, 16, "Hello World"); //(x座標,y座標,"字串")

    display.display(); //顯示畫面
}

void loop() {
 display.clear();
   display.drawString(0, 0, "Value:");
  // put your main code here, to run repeatedly:
int input=analogRead(13);
Serial.println(input);
 String str=String(input);
// display.setFont(ArialMT_Plain_24);
display.drawString(0, 20,str);  //(x座標,y座標,"字串")
display.display();
delay(10);
}
