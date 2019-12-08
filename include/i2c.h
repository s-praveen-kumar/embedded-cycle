#ifndef _I2C_H
#define _I2C_H
#include<stdint.h>
void I2CInit(int bitRatekHz);
void I2CStart();
void I2CStop();
void I2CWrite(uint8_t byte);
uint8_t I2CRead(uint8_t ack);
uint8_t I2CStatus();
void I2CSLA_R(uint8_t address);
void I2CSLA_W(uint8_t address);
#endif
