/*
By Eric Pernia - ericpernia(at)gmail.com
*/

#include "ostypes.h"
#include "types.h"
#include "allocation_point.h"
#include "gc.h"
#include "classes.h"
#include "methods.h"

#include "board.h"

/*----------------------------------------------------------------------------*/
#if defined(N_VM_REALTIMECLOCK_GETNATIVETIME) || defined(N_VM_REALTIMECLOCK_DELAYNATIVEUNTIL)
static unsigned long time_offset = -1;
#endif

/*----------------------------------------------------------------------------*/
/*
Estas funciones inician y terminan un temporizador que actualiza la variable
global systemTick utilizada por el planificador.
*/
/*
Refer to Section 5.2. These functions start a timer updating the volatile
uint8 systemTick global variable. It prevents to eager scheduling if ascheduler
has been started. Only pertains to SCJ programs
*/
#if defined(VM_CLOCKINTERRUPTHANDLER_ENABLE_USED)

	/* SYSTEM TICK */
	volatile uint8 systemTick = 0;
	volatile uint8 stopSystemTick = 1;

	/* NATIVE TIME */
	volatile unsigned long systemMs = 0;

	void start_system_tick(void){
		stopSystemTick = 0;
	}

	void stop_system_tick(void){
		/* Disable SysTick IRQ */
		//SysTick->CTRL &= ~SysTick_CTRL_TICKINT_Msk;
		stopSystemTick = 1;
	}


	/*---------- SysTick_Handler() --------- */
	void SysTick_Handler (void){
		if(!stopSystemTick){
			systemTick++;
		}
		systemMs = systemMs + 10;
	}

#endif

/*----------------------------------------------------------------------------*/
/*
Debe bloquear hasta que se actualice la variable global systemTick.
*/
/*
Should block until the volatile uint8 systemTick_global_variable_gets updated.
Can either be a busy loop or more intelligently implemented using some special
purpose power saving instructions.
*/
/*
#if defined(N_VM_REALTIMECLOCK_AWAITNEXTTICK)
#include <unistd.h>
int16 n_vm_RealtimeClock_awaitNextTick(int32 *sp) {
    while (systemTick == 0) {
        usleep(1000);
    }
    return -1;
}
#endif
*/
/*
#if defined(N_VM_REALTIMECLOCK_AWAITNEXTTICK)
int16 n_vm_RealtimeClock_awaitNextTick(int32 *sp) {
	uint8 systemTickMemory;
	systemTickMemory = systemTick;
	while (systemTickMemory == systemTick);

	sp[0] = (int32) systemTickMemory;
   return -1;
}
#endif
*/
#if defined(N_VM_REALTIMECLOCK_AWAITNEXTTICK)
	int16 n_vm_RealtimeClock_awaitNextTick(int32 *sp) {
		while (systemTick == 0);
	   return -1;
	}
#endif


/*----------------------------------------------------------------------------*/
/*
Debe retornar la resolucion del temporizador que se inicio en la funcion
anterior. Debe retornar en numero de nano segundos entre dos ticks del sistema
con tipo de datos uint32.
*/
/*
Must return the resolution of the system tick timer as started in the function
void start_system_tick(void). The number is returned as an uint32 containing the
number of nanoseconds between two system ticks. Refer to Section 4.2 on how to
implement and return values from native methods
*/
/*
   getNativeResolution
   See:
   http://pubs.opengroup.org/onlinepubs/009695399/functions/clock_getres.html
   http://pficheux.free.fr/eyrolles/linux_embarque/docs_externes/POSIX4.html

   getNativeResolution
   param : javax.safetycritical.RelativeTime
   return: int  A return value of 0 shall indicate that the call succeeded.
                A return value of -1 shall indicate that an error occurred.
*/
#if defined(N_VM_REALTIMECLOCK_GETNATIVERESOLUTION)
	int16 n_vm_RealtimeClock_getNativeResolution(int32 *sp) {
		//sp[0] = (int32) 10000000;
	   *sp = MS_10; // Devuelve por pila de Java el valor de 10ms como 10000000ns
	   return -1;
	}
#endif


/*----------------------------------------------------------------------------*/
/*
Devuelve el tiempo actual del reloj de tiempo real como un objeto AbsoluteTime
con mili segundos y nano segundos.
*/
/* getNativeTime
 * param : javax.safetycritical.AbsoluteTime
 * return: int
 */
/*
#if defined(N_VM_REALTIMECLOCK_GETNATIVETIME)
extern int16 javax_realtime_HighResolutionTime_setNormalized(int32 *fp);
int16 n_vm_RealtimeClock_getNativeTime(int32 *sp) {
    struct timespec timevalue;
    int32 stat;
    long millis;

    stat = clock_gettime(CLOCK_REALTIME, &timevalue);

    if (sizeof(long) != 8) {
        if (time_offset == (unsigned long) -1) {
            time_offset = timevalue.tv_sec;
        }
        timevalue.tv_sec = timevalue.tv_sec - time_offset;
    }

    millis = timevalue.tv_sec * 1000;
    sp[1] = ((millis >> 16) >> 16);
    sp[2] = millis & 0xFFFFFFFF;
    sp[3] = timevalue.tv_nsec;

    javax_realtime_HighResolutionTime_setNormalized(sp);

    *sp = stat;

    return -1;
}
#endif
*/
#if defined(N_VM_REALTIMECLOCK_GETNATIVETIME)
	extern int16 javax_realtime_HighResolutionTime_setNormalized(int32 *fp);
	int16 n_vm_RealtimeClock_getNativeTime(int32 *sp) {
	   int32 stat = 0;

		sp[1] = (int32) ((systemMs >> 16) >> 16);
		sp[2] = (int32) systemMs & 0xFFFFFFFF;
		sp[3] = (int32) 0; // 0 nanosegundos, tengo resolucion de 10ms.

	   javax_realtime_HighResolutionTime_setNormalized(sp);

	   *sp = stat;

	   return -1;
	}
#endif

/*----------------------------------------------------------------------------*/
/* delayNativeUntil
 * param : javax.safetycritical.AbsoluteTime
 * return: void
 */
/*
 * AbsoluteTime has long millis and int nanos
 * timevalue.tv_sec and timevalue.tv_nsec are of type long
 *
 * Result should be:
 *   timevalue.tv_sec  = millis / 1000
 *
 *   timevalue.tv_nsec = (millis % 1000)  * 1000000 + nanos
 */
/*
#if defined(N_VM_REALTIMECLOCK_DELAYNATIVEUNTIL)
extern int32 ldiv32(int32* sp, uint32 xmsb, uint32 xlsb, uint32 ymsb, uint32 ylsb);
extern unsigned char lrem32(int32* sp, uint32 xmsb, uint32 xlsb, uint32 ymsb, uint32 ylsb);
extern void ladd(uint32* msb1, uint32* lsb1, uint32 msb2, uint32 lsb2);

int16 n_vm_RealtimeClock_delayNativeUntil(int32 *sp) {
    Object* absoluteTimeObj = (Object*) (pointer) (*sp);
    int32 nanos;
    long millis, temp;
    struct timespec timevalue;

    absoluteTimeObj = HEAP_REF(absoluteTimeObj, Object*);

    millis = ((javax_realtime_AbsoluteTime_c *) absoluteTimeObj)->lsbmillis_f; // msb
    millis = (millis << 16) << 16;
    millis |= ((javax_realtime_AbsoluteTime_c *) absoluteTimeObj)->millis_f; // lsb

    nanos = ((javax_realtime_AbsoluteTime_c *) absoluteTimeObj)->nanos_f;

    timevalue.tv_sec = millis / 1000;

    if (sizeof(long) != 8)
    {
        timevalue.tv_sec += time_offset;
    }

    temp = millis % 1000;

    timevalue.tv_nsec = nanos + (temp * 1000000);

    clock_nanosleep(CLOCK_REALTIME, TIMER_ABSTIME, &timevalue, NULL);

    return -1;
}
#endif
*/
#if defined(N_VM_REALTIMECLOCK_DELAYNATIVEUNTIL)

int16 n_vm_RealtimeClock_delayNativeUntil(int32 *sp) {
	/* Empty */
   return -1;
}
#endif



/*----------------------------------------------------------------------------*/
