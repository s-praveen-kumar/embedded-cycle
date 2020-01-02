#include "include/screens.h"
#include "include/lcd.h"

extern uint8_t currentScreen;

void ConfigScreen_init(){

}

void ConfigScreen_update(){

}

void ConfigScreen_render(){
    clearScreen();
    printStr("WELCOME!");
}

void Configcreen_input(uint8_t btn){
    if(btn == MODE_BUTTON)
        currentScreen = TIME_SCREEN;
}
