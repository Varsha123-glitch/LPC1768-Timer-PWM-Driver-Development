#include "timer.h"

void start_timer0()
{
    set_bit(LPC_TIM0->TCR, 0);
}

void stop_timer0()
{
    reset_bit(LPC_TIM0->TCR, 0);
}

void reset_and_stop_timer0()
{
    set_bit(LPC_TIM0->TCR, 1);
}

void enable_timer0()
{
    reset_bit(LPC_TIM0->TCR, 1);
}

void enable_timer0_interrupt()
{
    set_bit(LPC_TIM0->MCR, 0);
    NVIC_EnableIRQ(TIMER0_IRQn);
}

void enable_timer0_mr_reset()
{
    set_bit(LPC_TIM0->MCR, 1);
}

void set_timer0_interrupt_priority(uint8_t priority)
{
    NVIC_SetPriority(TIMER0_IRQn, priority);
}

void set_timer0_pre_scale_value(uint32_t value)
{
    LPC_TIM0->PR = value;
}

void set_timer0_match_value(uint32_t value)
{
    LPC_TIM0->MR0 = value;
}

void timer0_init()
{
    set_bit(LPC_SC->PCONP, 1);
}
