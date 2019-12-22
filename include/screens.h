#ifndef _SCREENS_H
#define _SCREENS_H value

#include<stdint.h>

#define SCREENS_COUNT 3
#define SPEED_SCREEN 0
#define TIME_SCREEN 1
#define SETTING_SCREEN 2

long getMillis();
//<<<<<<TimeScreen
void initTimeScreen();
void updateTimeScreen();
void renderTimeScreen();

//<<<<<<SettingScreend
void initSettingScreen();
void updateSettingScreen(uint8_t a);
void renderSettingScreen();


//<<<<<<SpeedScreen
#define HALT_THRESHOLD 10000UL
void initSpeedScreen();
void updateSpeedScreen(uint8_t sense);
void renderSpeedScreen();

#endif
