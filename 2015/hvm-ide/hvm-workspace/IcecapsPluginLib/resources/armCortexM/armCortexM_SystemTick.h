/* By Eric Pernia */

#ifndef STM32_SYSTEM_TICK_H_
#define STM32_SYSTEM_TICK_H_


	// ----------------------------------------------------------------------------

	#ifndef TIMER_FREQUENCY_HZ
		#define TIMER_FREQUENCY_HZ 100u // (100u) = 10ms ; (1000u) = 1ms
	#endif
	// Config SysTick Timer to TIMER_FREQUENCY_HZ interrupt.
	void start_system_tick(void);

	// Disable SysTick IRQ
	void stop_system_tick(void);

	// ----------------------------------------------------------------------------

#endif // STM32_SYSTEM_TICK_H_
