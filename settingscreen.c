#include"include/screens.h"
#include"include/lcd.h"
#include"include/settings.h"
#include<avr/io.h>

uint8_t position;
uint8_t timeFormat , tempUnit, backLight;

uint8_t getTimeFormat(){
  return timeFormat;
}

uint8_t getTempUnit(){
  return tempUnit;
}

uint8_t getLight(){
  return backLight;
}
void initSettingScreen(){
  position = 0;
  timeFormat = TIME_FORMAT_24;
  tempUnit = TEMP_UNIT_C;
  backLight = ON;
  PORTB |= 1<<1;
}

void updateSettingScreen(uint8_t a){
  if(a == NEXT_SETTING){
    position++;
    if(position>=3)
      position = 0;
  } else{
    switch (position) {
      case 0:
        timeFormat=!timeFormat;
        break;
      case 1:
        tempUnit=!tempUnit;
        break;
      case 2:
        backLight=!backLight;
        if(backLight)
          PORTB |= 1<<1;
        else
          PORTB &= ~(1<<1);
    }
  }
}

void renderSettingScreen(){
  clearScreen();
  printStr("Time ");
  printStr("Temp ");
  printStr("Light");
  moveToLine2();
  printStr("  ");
  printStr(timeFormat==TIME_FORMAT_12?"12":"24");
  printStr("   ");
  printCh(0xDF);
  printStr(tempUnit==TEMP_UNIT_C?"C":"F");
  printStr("   ");
  printStr(backLight?"ON":"OFF");

  moveToXY(5*position,1);
  printCh(0x7E);          //Arrow
}
