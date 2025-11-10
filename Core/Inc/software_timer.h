/*
 * software_timer.h
 *
 *  Created on: Jan 3, 2025
 *      Author: User
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer0_flag;
extern int timer1_flag;		//LED
extern int timer2_flag;		//DOT
extern int timer3_flag;
extern int timer4_flag;

extern int timer0_counter;
extern int timer1_counter;	//LED counter
extern int timer2_counter;	//DOT counter
extern int timer3_counter;
extern int timer4_counter;

extern int EN[4];


void setTimer0(int duration);
void setTimer1(int duration);
void setTimer2(int duration);
void setTimer3(int duration);
void setTimer4(int duration);

void timerRun();

#endif /* INC_SOFTWARE_TIMER_H_ */
