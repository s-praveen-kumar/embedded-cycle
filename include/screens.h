#ifndef _SCREENS_H
#define _SCREENS_H value

#include<stdint.h>

#define SCREENS_COUNT 4
#define SPEED_SCREEN 0
#define TIME_SCREEN 1
#define SETTING_SCREEN 2
#define CONFIG_SCREEN 3

//<<Buttons
#define MODE_BUTTON 0
#define A_BUTTON 1
#define B_BUTTON 2


uint32_t getMillis();
//<<<<<<TimeScreen
void TimeScreen_init();
void TimeScreen_update();
void TimeScreen_render();
void TimeScreen_input(uint8_t btn);

//<<<<<<SettingScreend
void SettingScreen_init();
void SettingScreen_update(uint8_t a);
void SettingScreen_render();
void SettingScreen_input(uint8_t btn);

//<<<<<<SpeedScreen
#define HALT_THRESHOLD 10000L
void SpeedScreen_init();
void SpeedScreen_update(uint8_t sense);
void SpeedScreen_render();
void SpeedScreen_input(uint8_t btn);

//<<<<<<ConfigScreen
void ConfigScreen_init();
void ConfigScreen_update();
void ConfigScreen_render();
void Configcreen_input(uint8_t btn);

#endif
