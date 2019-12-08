#ifndef _DS3231_H
#define _DS3231_H
#include<stdint.h>

#define RTC_ADD 0x68    //I2C address of the module
#define SECOND_REG 0x00
#define MINUTE_REG 0x01
#define HOUR_REG 0x02
#define DAY_REG 0x03
#define DATE_REG 0x04
#define MONTH_REG 0x05
#define YEAR_REG 0x06
#define CONTROL_REG 0x0E
#define STATUS_REG 0x0F
#define TEMP_H_REG 0x11
#define TEMP_L_REG 0x12

void initRTC();
uint8_t bcdToInt(uint8_t bcd);
void initRead(uint8_t add);
uint8_t readRegister(uint8_t add);
void writeRegister(uint8_t add, uint8_t data);
void loadDateTime();
uint8_t getSeconds();
uint8_t getMinutes();
uint8_t getHour();
uint8_t getDate();
uint8_t getMonth();
uint8_t getYear();
char* getDay3();
char* getDayFull();
#endif
