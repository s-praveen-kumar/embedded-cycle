#include "include/screens.h"
#include "include/lcd.h"

uint16_t count;
uint32_t lastTime;
uint16_t dt;
float speed, distance;
const float diameter = 0.65;    //m
float circ;
extern uint8_t currentScreen;

void SpeedScreen_init(){
  count = 0;
  lastTime = 0;
  speed = 0.0;
  distance = 0;
  circ = 3.1415*diameter; //m
}


void SpeedScreen_update(uint8_t sense){
    if(sense){
      if(count++){
        dt = getMillis() - lastTime;
        speed = (circ*3600)/(float)dt;
        distance = count*circ/1000.0;
      }
      lastTime = getMillis();
    }
    else{
      speed = 0;
    }
}

void SpeedScreen_input(uint8_t btn){
  if(btn == MODE_BUTTON)
    currentScreen = TIME_SCREEN;
  else if(btn == B_BUTTON)
    currentScreen = SETTING_SCREEN;
}

void SpeedScreen_render(){
  clearScreen();
  printIntFixed((uint8_t)speed,2);
  printCh('.');
  printIntFixed(((uint16_t)(speed*100))%100,2);
  printStr("km/h");
  moveToLine2();
  printIntFixed((uint8_t)distance,2);
  printCh('.');
  printIntFixed(((uint16_t)(distance*100))%100,2);
  printStr("km");
}
