#include<avr/io.h>
#include<avr/interrupt.h>
#include<stdint.h>
#include<util/delay.h>
#include"include/lcd.h"
#include"include/DS3231.h"
#include"include/screens.h"
#include"include/settings.h"

#define DEBOUNCE_THRESHOLD 600

void loop();
void initTimer();
void initSwitches();
void renderCurrentScreen();

const uint8_t seqLength = 10;
const uint8_t KEY_SEQUENCE[] = {MODE_BUTTON, A_BUTTON, MODE_BUTTON, B_BUTTON, MODE_BUTTON, MODE_BUTTON, MODE_BUTTON, A_BUTTON, A_BUTTON, B_BUTTON};

volatile uint8_t curPosInSeq = 0;
volatile int currentScreen = 0;
volatile uint32_t millis = 0;
volatile uint8_t shouldRender = 1;
volatile uint32_t lastButtonTime;

extern uint32_t lastTime;
int main(){
  //Initializations
  DDRD = 0xFF;
  DDRB &= ~1;
  DDRB |= 1<<1;
  PORTB |= 1;             //Enable PULLUP
  initLCD(&PORTD,PD0,PD1);
  initRTC();
  hideCursor();

  //Screens
  TimeScreen_init();
  SettingScreen_init();
  SpeedScreen_init();
  ConfigScreen_init();

  //Setting Interrupt
  initTimer();
  initSwitches();
  renderCurrentScreen();
  lastButtonTime = 0;
  sei();
  while(1)
    loop();
  return 0;
}

void initTimer(){
  TCNT1 = 0;              //Reset Counter
  TCCR1B|= 1<<WGM12;      //CTC mode
  TCCR1B|= 1<<CS11;       //8 prescaler
  OCR1A = (F_CPU/1000/8); //Every 1ms
  TIMSK1 |= 1<<OCIE1A;    //Enable Timer
}

void initSwitches(){
  PCICR |= 1<<PCIE1 | 1<<PCIE0;
  PCMSK1 |= 1<<PCINT11 | 1<<PCINT10 | 1<<PCINT9;
  PCMSK0 |= 1<<PCINT0;
}

void renderCurrentScreen(){
  switch (currentScreen) {
    case SPEED_SCREEN:
      SpeedScreen_render();
      break;
    case TIME_SCREEN:
      TimeScreen_render();
      break;
    case SETTING_SCREEN:
      SettingScreen_render();
      break;
    case CONFIG_SCREEN:
      ConfigScreen_render();
      break;
  }
}

void inputCurrentScreen(uint8_t btn){
  switch (currentScreen) {
    case SPEED_SCREEN:
      SpeedScreen_input(btn);
      break;
    case TIME_SCREEN:
      TimeScreen_input(btn);
      break;
    case SETTING_SCREEN:
      SettingScreen_input(btn);
      break;
    case CONFIG_SCREEN:
      Configcreen_input(btn);
      break;
  }
  if(btn == KEY_SEQUENCE[curPosInSeq])
    curPosInSeq++;
  else
    curPosInSeq = 0;
  if(curPosInSeq == seqLength){
    curPosInSeq = 0;
    currentScreen = CONFIG_SCREEN;
  }
}
uint32_t getMillis(){
  return millis;
}

ISR(TIMER1_COMPA_vect){
  millis++;
  if(millis%1000 == 0){
    TimeScreen_update();
    shouldRender |= currentScreen == TIME_SCREEN;
    if(millis - lastTime > HALT_THRESHOLD){
      SpeedScreen_update(0);
      shouldRender |= currentScreen == SPEED_SCREEN;
      lastTime = millis;
    }
  }
}

ISR(PCINT1_vect){
  if(millis - lastButtonTime < DEBOUNCE_THRESHOLD)
    return;
  if(!(PINC & 1<<3)){       //PC3 = Mode button
    inputCurrentScreen(MODE_BUTTON);
  } else if(!(PINC & 1<<2)){   //PC2 = A Button
    inputCurrentScreen(A_BUTTON);
  } else if(!(PINC & 1<<1)){   //PC1 = B Button
    inputCurrentScreen(B_BUTTON);
  }
  lastButtonTime = millis;
  shouldRender = 1;
}

ISR(PCINT0_vect){
  if(!(PINB & 1)){          //PB0 = Reed sensor input
    SpeedScreen_update(1);
    shouldRender |= currentScreen == SPEED_SCREEN;
  }
}

void loop(){
  if(shouldRender){
    renderCurrentScreen();
    shouldRender = 0;
  }
}
