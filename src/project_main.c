#include <LPC17xx.h>
#include "bits.h"
#include "timer.h"
#include "pwm.h"

BOOL led_on = TRUE;

void TIMER0_IRQHandler(void)
{
    if (LPC_TIM0->IR & (1 << 0))
    {
        LPC_TIM0->IR = (1 << 0);

        if (led_on)
        {
            LPC_GPIO0->FIOSET = (0xFF << 17);
            led_on = FALSE;
        }
        else
        {
            LPC_GPIO0->FIOCLR = (0xFF << 17);
            led_on = TRUE;
        }
    }
}

int main()
{
    // GPIO output
    LPC_GPIO0->FIODIR = (0xFF << 17);

    // Timer setup
    timer0_init();
    stop_timer0();
    set_timer0_pre_scale_value(0);
    set_timer0_match_value(3000000);
    enable_timer0_interrupt();
    enable_timer0_mr_reset();
    set_timer0_interrupt_priority(2);
    start_timer0();

    // PWM start
    pwm_init();

    while (1)
    {
        // main loop
    }
}
