///////////////////////////////////////////////////////////////////////////////////
//Timer Functions
///////////////////////////////////////////////////////////////////////////////////
#ifndef _timer_
#define _timer_


volatile unsigned char TimerFlag = 0;

unsigned long _avr_timer_M = 1;
unsigned long _avr_timer_cntcurr = 0;


void TimerOn();

void TimerOff();

void TimerISR();

ISR(TIMER1_COMPA_vect);

void TimerSet(unsigned long M);
#endif