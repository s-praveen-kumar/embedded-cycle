#include"include/screens.h"
#include"include/lcd.h"
#include"include/settings.h"
#include"include/eeprom.h"
#include<avr/io.h>

uint8_t position;
uint8_t timeFormat , tempUnit, backLight;
extern uint8_t currentScreen;

uint8_t getTimeFormat(){
  return timeFormat;
}

uint8_t getTempUnit(){
  return tempUnit;
}

uint8_t getLight(){
  return backLight;
}
void SettingScreen_init(){
  position = 0;
   timeFormat = readAddress(TIME_FORMAT_ADDRESS);
   tempUnit = readAddress(TEMP_UNIT_ADDRESS);
   backLight = readAddress(LIGHT_ADDRESS);
  PORTB |= backLight<<1;
}

void SettingScreen_update(uint8_t a){

}

void SettingScreen_input(uint8_t btn){
  if(btn == A_BUTTON){
    position++;
    if(position>=3)
      position = 0;
  } else if (btn == B_BUTTON){
    switch (position) {
      case 0:
        timeFormat=!timeFormat;
         writeAddress(TIME_FORMAT_ADDRESS, timeFormat);
        break;
      case 1:
        tempUnit=!tempUnit;
        writeAddress(TEMP_UNIT_ADDRESS, tempUnit);
        break;
      case 2:
        backLight=!backLight;
        writeAddress(LIGHT_ADDRESS, backLight);
        if(backLight)
          PORTB |= 1<<1;
        else
          PORTB &= ~(1<<1);
    }
  } else
    currentScreen = SPEED_SCREEN;
}

void SettingScreen_render(){
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
