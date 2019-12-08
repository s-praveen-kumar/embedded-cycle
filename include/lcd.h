#include<stdint.h>
#ifndef _LCD_H
#define _LCD_H
#define LCD_PULSE_DELAY_MS 1
volatile uint8_t *lcd_data_port;
int rs_pin, en_pin;

void initLCD(volatile uint8_t *port, int en, int rs);
void writeCommand(uint8_t cmd);
void writeData(uint8_t data);
void printStr(char *s);
void printCh(char c);
void printInt(int n);
void printIntFixed(int n, int digits);
void showCursor();
void hideCursor();
void blinkCursor();
void clearScreen();
void goHome();
void reset();
void moveToLine1();
void moveToLine2();
void moveToAddress(uint8_t add);
void moveToXY(uint8_t x, uint8_t y);
void clearRegion(uint8_t x1,uint8_t y1, uint8_t x2, uint8_t y2);
#endif
