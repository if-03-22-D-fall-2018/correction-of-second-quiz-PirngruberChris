/*-----------------------------------------------------------------------------
*				HTBLA-Leonding / Class: <your class name here>
*-----------------------------------------------------------------------------
* Exercise Number: #exercise_number#
* File:			counter.cpp
* Author(s):	<your name here>
* Due Date:		#due#
*-----------------------------------------------------------------------------
* Description:
* A counter to count up and count down.
*-----------------------------------------------------------------------------
*/
#include "counter.h"

struct CounterImplementation
{
    enum Direction directions;
    int increment_value;
    int value;
    bool is_used;
};

struct CounterImplementation c1={UNDEFINED,0,0,false};
struct CounterImplementation c2={UNDEFINED,0,0,false};
struct CounterImplementation c3={UNDEFINED,0,0,false};
struct CounterImplementation c4={UNDEFINED,0,0,false};
struct CounterImplementation c5={UNDEFINED,0,0,false};
struct CounterImplementation c6={UNDEFINED,0,0,false};
struct CounterImplementation c7={UNDEFINED,0,0,false};
struct CounterImplementation c8={UNDEFINED,0,0,false};
static Counter counters_so_far[COUNTER_COUNT]={&c1,&c2,&c3,&c4,&c5,&c6,&c7,&c8};


void init()
{
  for (int i = 0; i < COUNTER_COUNT; i++)
  {
    counters_so_far[i]->is_used=false;
    counters_so_far[i]->increment_value=1;
    counters_so_far[i]->value=0;
    counters_so_far[i]->directions=UNDEFINED;
  }
}
Counter new_counter(enum Direction directions)
{
  for (int i = 0; i < COUNTER_COUNT; i++)
  {
    if (!counters_so_far[i]->is_used)
    {
      counters_so_far[i]->is_used=true;
      counters_so_far[i]->directions=directions;
      return counters_so_far[i];
    }
  }
  return 0;
}
enum Direction get_direction(Counter c)
{
  return c->directions;
}
void set_direction(Counter c, enum Direction directions)
{
  c->directions=directions;
}
bool set_value(Counter c, int value)
{
  if (c->directions==DOWN)
  {
    c->value=value;
      return true;
  }
  return false;
}
int get_increment_value(Counter c)
{
  return c->increment_value;
}
void set_increment_value(Counter c, int value)
{
  if(value>=0) c->increment_value=value;
}
void increment(Counter c)
{
  if (c->directions==UP)
  {
    c->value+=c->increment_value;
  }
  else if (c->directions==DOWN)
  {
    c->value-=c->increment_value;
  }
}
int get_value(Counter c)
{
  return c->value;
}
