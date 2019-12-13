#ifndef _SETTING_H
#define _SETTING

#include<stdint.h>

#define FLIP_SETTING 1
#define NEXT_SETTING 0
#define TIME_FORMAT_24 0
#define TIME_FORMAT_12 1
#define TEMP_UNIT_C  0
#define TEMP_UNIT_F 1
#define ON 1
#define OFF 0

uint8_t getTimeFormat();
uint8_t getTempUnit();
uint8_t getLight();
#endif
