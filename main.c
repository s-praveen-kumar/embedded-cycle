#include<avr/io.h>
#include<avr/interrupt.h>
#include<stdint.h>
#include<util/delay.h>
#include"include/lcd.h"
#include"include/DS3231.h"
#include"include/screens.h"

void loop();
void initTimer();
int main(){
  DDRD = 0xFF;
  initLCD(&PORTD,PD0,PD1);
  initRTC();
  hideCursor();

  initTimeScreen();
  initTimer();
  while(1);
    loop();
  return 0;
}

void initTimer(){
  TCNT1 = 0;              //Reset Counter
  TCCR1B|= 1<<WGM12;      //CTC mode
  TCCR1B|= 1<<CS12;       //256 prescaler
  OCR1A = (F_CPU/256);
  TIMSK1 |= 1<<OCIE1A;    //Enable Timer
  sei();
}

void loop(){

}

ISR(TIMER1_COMPA_vect){
  onTickTimeScreen();
}
