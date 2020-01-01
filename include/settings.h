#ifndef _SETTING_H
#define _SETTING_H

#include<stdint.h>

#define TIME_FORMAT_24 0
#define TIME_FORMAT_12 1
#define TEMP_UNIT_C  0
#define TEMP_UNIT_F 1
#define ON 1
#define OFF 0

//Address
#define TIME_FORMAT_ADDRESS 0x00
#define TEMP_UNIT_ADDRESS 0x01
#define LIGHT_ADDRESS 0x02

uint8_t getTimeFormat();
uint8_t getTempUnit();
uint8_t getLight();
#endif
