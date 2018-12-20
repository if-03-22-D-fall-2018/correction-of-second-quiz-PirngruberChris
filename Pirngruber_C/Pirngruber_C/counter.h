/*-----------------------------------------------------------------------------
*				HTBLA-Leonding / Class: <your class name here>
*-----------------------------------------------------------------------------
* Exercise Number: #exercise_number#
* File:			counter.h
* Author(s):	<your name here>
* Due Date:		#due#
*-----------------------------------------------------------------------------
* Description:
* A counter to count up and count down.
*-----------------------------------------------------------------------------
*/
#include <stdbool.h>
#ifndef ___COUNTER_H
#define ___COUNTER_H

#define  COUNTER_COUNT 8

typedef struct CounterImplementation* Counter;

enum Direction {UP, DOWN, UNDEFINED};

void init();
Counter new_counter(enum Direction directions);
enum Direction get_direction(Counter c);
void set_direction(Counter c, enum Direction directions);
int get_value(Counter c);
bool set_value(Counter c, int n);
int get_increment_value(Counter c);
void set_increment_value(Counter c, int n);
void increment(Counter c);
#endif
