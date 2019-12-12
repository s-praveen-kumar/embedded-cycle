#include "include/screens.h"
#include "include/lcd.h"
#include "include/DS3231.h"

void updateTimeFromRTC();
void printTime();
int sec, min, hr, renderDate = 1;

void initTimeScreen(){
  updateTimeFromRTC();
  printTime();
}

void updateTimeFromRTC(){
  loadDateTime();
  sec = getSeconds();
  min = getMinutes();
  hr = getHour();
  renderDate = 1;
}

void onTickTimeScreen(){                //To be called from ISR
  sec++;
  if(sec>=60){
    sec = 0;
    min++;
    if(min>=60){
      updateTimeFromRTC();    //Cross check time with RTC each one hour.
    }
  }
  printTime();
}

void printTime(){
    moveToLine1();
    printIntFixed(hr,2);
    printCh(':');
    printIntFixed(min,2);
    printCh(':');
    printIntFixed(sec,2);
    printCh(' ');
    int8_t temp = readRegister(TEMP_H_REG);
    printIntFixed(temp,2);
    uint8_t frac = 25*(readRegister(TEMP_L_REG)>>6);
    printCh('.');
    printIntFixed(frac,2);
    writeData(0xDF);    //Code for Degree symbol
    printCh('C');
    if(renderDate){
      clearRegion(0,1,16,1);
      printIntFixed(getDate(),2);
      printCh('-');
      printIntFixed(getMonth(),2);
      printCh('-');
      printIntFixed(getYear(),2);
      printStr("   ");
      printStr(getDay3());
      renderDate = 0;       //To avoid re rendering the same date to save time
  }
}
