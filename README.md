## Features
- Timer0 based periodic interrupt generation  
- LED blinking using timer interrupt service routine  
- PWM waveform generation using PWM1 module  
- Direct register-level peripheral configuration  
- NVIC interrupt setup for Timer0 handling  
- Modular and reusable driver design

 ## Technologies Used
- Embedded C Programming  
- ARM Cortex-M3 Architecture  
- NXP LPC1768 Microcontroller  

## Project Structure
```bash
├── project_main.c   # Main application logic
├── timer.c          # Timer driver source file
├── timer.h          # Timer driver header
├── pwm.c            # PWM driver source file
├── pwm.h            # PWM driver header
└── bits.h           # Bitwise utility macros

```
## Working Principle
-Timer0 is initialized to generate interrupts at fixed intervals.
-Each timer interrupt triggers LED state toggling on GPIO output pin.
-PWM1 is configured to generate PWM output on pin P2.0 (PWM1.1).
-Match registers define PWM frequency and duty cycle values.

##Concepts Demonstrated
-Hardware timer initialization
-Interrupt-driven embedded programming
-PWM frequency and duty cycle control
-NVIC configuration on LPC1768
-Low-level register manipulation


##How to Run
-Open the project in Keil uVision or any ARM-supported IDE.
-Build and compile the source files.
-Flash the program into LPC1768 using Flash Magic or equivalent tool.
-Verify output:
-LED blinks periodically through Timer0 interrupts
-PWM signal appears on P2.0 pin


##Expected Output
-Continuous LED blinking at fixed timer intervals
-Stable PWM waveform with default configured duty cycle


##Possible Enhancements
-Real-time PWM duty cycle adjustment using ADC input
-UART serial debugging integration
-Support for multiple PWM channels
-RTOS-based multitasking extension
-User-configurable timer interval settings
