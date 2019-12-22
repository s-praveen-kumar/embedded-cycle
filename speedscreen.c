#include "include/screens.h"
#include "include/lcd.h"

long count;

void initSpeedScreen(){
  count = 0;
}


void updateSpeedScreen(){
  count++;
}

void renderSpeedScreen(){
  clearScreen();
  printInt(count);
}
