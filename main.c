#include<avr/io.h>
#include<avr/interrupt.h>
#include<stdint.h>
#include<util/delay.h>
#include"include/lcd.h"
#include"include/DS3231.h"
#include"include/screens.h"

void loop();
void initTimer();
void initSwitches();
void renderCurrentScreen();
void renderWelcomeScreen();
int currentScreen = 0;

int main(){
  //Initializations
  DDRD = 0xFF;
  initLCD(&PORTD,PD0,PD1);
  initRTC();
  hideCursor();
  initTimeScreen();

  //Setting Interrupt
  initTimer();
  initSwitches();
  sei();

  renderCurrentScreen();
  while(1);
  return 0;
}

void initTimer(){
  TCNT1 = 0;              //Reset Counter
  TCCR1B|= 1<<WGM12;      //CTC mode
  TCCR1B|= 1<<CS12;       //256 prescaler
  OCR1A = (F_CPU/256);
  TIMSK1 |= 1<<OCIE1A;    //Enable Timer
}

void initSwitches(){
  PCICR |= 1<<PCIE1;
  PCMSK1 |= 1<<PCINT11;
}

void renderCurrentScreen(){
  switch (currentScreen) {
    case WELCOME_SCREEN:
      renderWelcomeScreen();
      break;
    case TIME_SCREEN:
      renderTimeScreen();
      break;
  }
}

void renderWelcomeScreen(){
  clearScreen();
  printStr("WELCOME!");
}

ISR(TIMER1_COMPA_vect){
  updateTimeScreen();
  if(currentScreen == TIME_SCREEN)
    renderTimeScreen();
}

ISR(PCINT1_vect){
  if(PINC & 1<<3){       //PC3
    currentScreen++;
    if(currentScreen >= SCREENS_COUNT)
        currentScreen = 0;
    renderCurrentScreen();
  }
}
