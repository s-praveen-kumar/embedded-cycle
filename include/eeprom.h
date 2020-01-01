#ifndef _EEPROM_H
#define _EEPROM_H

#include<stdint.h>
#define EEPROM_DEVICE_ADD 0x57

uint8_t readAddress(uint16_t address);
void writeAddress(uint16_t address, uint8_t byte);

#endif