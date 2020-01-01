#include "include/eeprom.h"
#include "include/i2c.h"

uint8_t readAddress(uint16_t address){
    I2CStart();
    I2CSLA_W(EEPROM_DEVICE_ADD);
    I2CWrite(address >> 8);     //MSB
    I2CWrite(address & 0xFF);    //LSB
    I2CStart();
    I2CSLA_R(EEPROM_DEVICE_ADD);
    uint8_t byte = I2CRead(0);
    I2CStop();
    return byte;
}

void writeAddress(uint16_t address, uint8_t byte){
    I2CStart();
    I2CSLA_W(EEPROM_DEVICE_ADD);
    I2CWrite(address >>8);
    I2CWrite(address & 0xFF);
    I2CWrite(byte);
    I2CStop();
}