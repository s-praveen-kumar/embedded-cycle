#include "include/i2c.h"
#include<avr/io.h>
void I2CInit(int bitRatekHz){
  TWBR = (uint8_t) (((F_CPU/1000)/bitRatekHz) - 16)/2;
  TWSR = 0x00;                                //Prescaller = 0
  TWCR = 1<<TWEN;                             //Enable TWI
}

void I2CStart(){
  TWCR = (1<<TWINT) | (1<<TWSTA) | (1<<TWEN); //Send start condition
  while(!(TWCR&(1<<TWINT)));                  //Poll till start complete
}

void I2CStop(){
  TWCR = (1<<TWINT) | (1<<TWEN) | (1<<TWSTO); //Send stop condition
}

void I2CWrite(uint8_t data){
  TWDR = data;
  TWCR = (1<<TWINT) | (1<<TWEN);
  while(!(TWCR&(1<<TWINT)));                  //Poll till complete
}

uint8_t I2CStatus(){
  return TWSR & 0xF8;                          //Mask the Prescaller bits
}

uint8_t I2CRead(uint8_t ack)
{
    TWCR = (1<<TWINT)|(1<<TWEN)|(ack<<TWEA);
    while (!(TWCR & (1<<TWINT)));
    return TWDR;
}

void I2CSLA_W(uint8_t add){
  I2CWrite(add<<1);
}

void I2CSLA_R(uint8_t add){
  I2CWrite(add<<1 | 1);
}
