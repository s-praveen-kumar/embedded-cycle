#include<avr/io.h>
#include<avr/interrupt.h>
#include<stdint.h>
#include<util/delay.h>
#include"include/lcd.h"
#include"include/DS3231.h"
#include"include/screens.h"
#include"include/settings.h"

void loop();
void initTimer();
void initSwitches();
void renderCurrentScreen();

volatile int currentScreen = 0;
volatile uint32_t millis = 0;
volatile uint8_t shouldRender = 1;

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
  initTimeScreen();
  initSettingScreen();
  initSpeedScreen();

  //Setting Interrupt
  initTimer();
  initSwitches();
  sei();
  renderCurrentScreen();
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
      renderSpeedScreen();
      break;
    case TIME_SCREEN:
      renderTimeScreen();
      break;
    case SETTING_SCREEN:
      renderSettingScreen();
      break;
  }
}

long getMillis(){
  return millis;
}

ISR(TIMER1_COMPA_vect){
  millis++;
}

ISR(PCINT1_vect){
  if(!(PINC & 1<<3)){       //PC3
    currentScreen++;
    if(currentScreen >= SCREENS_COUNT)
        currentScreen = 0;
  } else if(!(PINC & 1<<2)){   //PC2
      if(currentScreen == SETTING_SCREEN)
        updateSettingScreen(NEXT_SETTING);
  } else if(!(PINC & 1<<1)){   //PC1
      if(currentScreen == SETTING_SCREEN)
          updateSettingScreen(FLIP_SETTING);
  }
  shouldRender = 1;
}

ISR(PCINT0_vect){
  if(!(PINB & 1)){          //PB0
    updateSpeedScreen();
    shouldRender = currentScreen == SPEED_SCREEN;
  }
}

void loop(){
  if(millis%1000 == 0){
    updateTimeScreen();
    shouldRender = currentScreen == TIME_SCREEN;
  }
  if(shouldRender){
    renderCurrentScreen();
    shouldRender = 0;
  }
}
