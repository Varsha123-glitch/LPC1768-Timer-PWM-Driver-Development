#include "pwm.h"

void pwm_init()
{
    // Enable PWM1 power
    set_bit(LPC_SC->PCONP, 6);

    // Select PWM1.1 pin (P2.0 ? PINSEL4 bits 1:0 = 01)
    LPC_PINCON->PINSEL4 &= ~(3 << 0);
    LPC_PINCON->PINSEL4 |=  (1 << 0);

    // Disable pull-up/pull-down
    LPC_PINCON->PINMODE4 |= (2 << 0);

    // Reset counter
    set_bit(LPC_PWM1->TCR, 1);
    LPC_PWM1->PR = 0;

    // Set period and duty cycle
    LPC_PWM1->MR0 = 250000;   // Period
    LPC_PWM1->MR1 = 125000;   // 50% duty

    // Reset on MR0
    set_bit(LPC_PWM1->MCR, 1);

    // Enable PWM output (PWM1.1)
    set_bit(LPC_PWM1->PCR, 9);

    // Latch values
    LPC_PWM1->LER = (1 << 0) | (1 << 1);

    // Enable PWM + Counter
    LPC_PWM1->TCR = (1 << 0) | (1 << 3);
}