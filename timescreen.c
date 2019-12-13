#include "include/screens.h"
#include "include/lcd.h"
#include "include/DS3231.h"
#include "include/settings.h"

void updateTimeFromRTC();
int sec, min, hr;

void initTimeScreen(){
  updateTimeFromRTC();
}

void updateTimeFromRTC(){
  loadDateTime();
  sec = getSeconds();
  min = getMinutes();
  hr = getHour();
}

void updateTimeScreen(){                //To be called from ISR
  sec++;
  if(sec>=60){
    sec = 0;
    min++;
    if(min>=60){
      updateTimeFromRTC();    //Cross check time with RTC each one hour.
    }
  }
}

void renderTimeScreen(){
    moveToLine1();
    if(getTimeFormat()==TIME_FORMAT_24)
        printIntFixed(hr,2);
    else
      printIntFixed(hr>12 ? hr-12:hr,2);
    printCh(':');
    printIntFixed(min,2);
    printCh(':');
    printIntFixed(sec,2);
    printCh(' ');
    int8_t temp = readRegister(TEMP_H_REG);
    uint8_t frac = 25*(readRegister(TEMP_L_REG)>>6);
    if(getTempUnit() == TEMP_UNIT_F){
      float f = (temp+(float)frac/100)*1.8 + 32;
      temp = (uint8_t)f;
      frac = (uint8_t)(f*100)%100;
    }
    printIntFixed(temp,2);
    printCh('.');
    printIntFixed(frac,2);
    writeData(0xDF);    //Code for Degree symbol
    printCh(getTempUnit()==TEMP_UNIT_C?'C':'F');
    moveToLine2();
    printIntFixed(getDate(),2);
    printCh('-');
    printIntFixed(getMonth(),2);
    printCh('-');
    printIntFixed(getYear(),2);
    printStr("   ");
    printStr(getDay3());
}
