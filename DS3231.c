#include "include/DS3231.h"
#include "include/i2c.h"


char DAY3[7][4] ={"SUN","MON","TUE","WED","THU","FRI","SAT"};
char DAY_FULL[7][10] ={"SUNDAY","MONDAY","TUESDAY","WEDNESDAY","THURSDAY","FRIDAY","SATURDAY"};

uint8_t secByte, minByte, hourByte, dateByte, dayByte, monthByte, yearByte;

void initRTC(){
  I2CInit(400);
}

uint8_t bcdToInt(uint8_t bcd){
  return (bcd>>4)*10 + (bcd&0x0F);
}

void initRead(uint8_t add){
  I2CStart();
  I2CSLA_W(RTC_ADD);
  I2CWrite(add);
  I2CStart();
  I2CSLA_R(RTC_ADD);
}

uint8_t readRegister(uint8_t add){
  initRead(add);
  uint8_t data = I2CRead(0);
  I2CStop();
  return data;
}

void writeRegister(uint8_t add, uint8_t data){
  I2CStart();
  I2CSLA_W(RTC_ADD);
  I2CWrite(add);
  I2CStart();
  I2CSLA_W(RTC_ADD);
  I2CWrite(data);
  I2CStop();
}

void loadDateTime(){
  initRead(SECOND_REG);
  secByte = I2CRead(1);
  minByte = I2CRead(1);
  hourByte = I2CRead(1);
  dayByte = I2CRead(1);
  dateByte = I2CRead(1);
  monthByte = I2CRead(1);
  yearByte = I2CRead(0);
  I2CStop();
}

uint8_t getSeconds(){
  return bcdToInt(secByte);
}

uint8_t getMinutes(){
  return bcdToInt(minByte);
}

uint8_t getHour(){
  return bcdToInt(hourByte&0x3F);
}

uint8_t getDate(){
  return bcdToInt(dateByte);
}
uint8_t getMonth(){
  return bcdToInt(monthByte);
}
uint8_t getYear(){
  return bcdToInt(yearByte);
}

char* getDay3(){
  return DAY3[dayByte];
}

char* getDayFull(){
  return DAY_FULL[dayByte];
}
