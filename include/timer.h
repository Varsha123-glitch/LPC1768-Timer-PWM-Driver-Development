#ifndef __TIMER_0_H__
#define __TIMER_0_H__

#include "bits.h"

void start_timer0();
void stop_timer0();
void reset_and_stop_timer0();
void enable_timer0();
void enable_timer0_interrupt();
void disable_timer0_interrupt();
void enable_timer0_mr_reset();
void disable_timer0_mr_reset();
void enable_stop_timer0_mr_match();
void disable_stop_timer0_mr_match();
void set_timer0_pre_scale_value(uint32_t in_pre_scale_value);
void set_timer0_match_value(uint32_t in_match_value);
void set_timer0_interrupt_priority(uint8_t in_interrupt_priority);
void timer0_init();

#endif
