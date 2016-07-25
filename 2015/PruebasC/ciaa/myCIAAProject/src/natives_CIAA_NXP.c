#include "ostypes.h"

// ERIC ***************************************************I
#include "types.h"

//#include <time.h>
#include "board.h"


#define TIMER_FREQUENCY_HZ (100u)

#define _CLOCKID_T_ 	unsigned long
typedef _CLOCKID_T_ clockid_t;
#define CLOCK_REALTIME (clockid_t)1

extern int16 javax_realtime_HighResolutionTime_setNormalized(int32 *fp);


// Del ejemplo de Ridolfi
static void setupHardware(void)
{
#if defined (__USE_LPCOPEN)
#if !defined(NO_BOARD_LIB)
    // Read clock settings and update SystemCoreClock variable
    SystemCoreClockUpdate();
    // Set up and initialize all required blocks and
    // functions related to the board hardware
    Board_Init();
    // Set the LED to the state of "Off"
    Board_LED_Set(0, false);
    Board_LED_Set(1, false);
    Board_LED_Set(2, false);
    Board_LED_Set(3, false);
    Board_LED_Set(4, false);
    Board_LED_Set(5, false);
#endif
#endif
}

static unsigned long time_offset = -1;

/*This function gets called as the
first thing upon entry into
main. It has been used on some platforms to
copy initialized data into the correct segments. It can be left empty. It is
only called once
*/
void init_compiler_specifics(void) {
	// La dejo vacia
	setupHardware();	// La de Ridolfi
	start_system_tick();
}


/*
This function gets called before starting the
VM. It is recalled if the VM is restarted. It can be left empty
*/
void initNatives(void) {
	// La dejo vacia
}

int32 java_stack[JAVA_STACK_SIZE];	// JAVA STACK

/*This function gets called be-
fore entering the VM. It should return a pointer to a RAM memory area
that is used as the Java stack
*/
int32* get_java_stack_base(int16 size) {
	return (int32*) &java_stack[0];
}

/*Refer
to Section 5.2. These functions start a timer updating the volatile
uint8 systemTick global variable. It prevents to eager scheduling
if ascheduler has been started. Only pertains to SCJ programs
*/

volatile uint8 systemTick;			// SYSTEM TICK


void start_system_tick(void){

	// Config SysTick Timer to 10ms interrupt.
	// 	SystemCoreClock = 16000000
	// 	TIMER_FREQUENCY_HZ = (100u)
	SysTick_Config (SystemCoreClock / TIMER_FREQUENCY_HZ );

}

void stop_system_tick(void){

	// Disable SysTick IRQ
	SysTick->CTRL  &= ~SysTick_CTRL_TICKINT_Msk;
}

// ----- SysTick_Handler() --------
void SysTick_Handler (void)
{
	systemTick++;
}
// --------------------------------


/*Should block until the volatile uint8 systemTick_global_variable_gets updated. Can
either be a busy loop or more intelligently implemented using some special
purpose power saving instructions

*/
int16 n_vm_RealtimeClock_awaitNextTick(int32 *sp) {

	uint8 systemTickMemory;

	systemTickMemory = systemTick;

	while (systemTickMemory == systemTick); // Busy loop

	return 0;
}


/*Must return the resolution of the system tick timer as started in the function
void start_system_tick(void). The number is returned as an
uint32 containing the number of nanoseconds between two system ticks. Refer to
Section 4.2 on how to implement and return values from native methods*/

// EN native_scj.c

	/* getNativeResolution
	 * See:
	 * http://pubs.opengroup.org/onlinepubs/009695399/functions/clock_getres.html
	 * http://pficheux.free.fr/eyrolles/linux_embarque/docs_externes/POSIX4.html
	 *
	 * getNativeResolution
	 * param : javax.safetycritical.RelativeTime
	 * return: int  A return value of 0 shall indicate that the call succeeded.
	 *              A return value of -1 shall indicate that an error occurred.

	int16 n_vm_RealtimeClock_getNativeResolution(int32 *sp) {
		//struct timespec clock_resolution;
		//clock_getres(CLOCK_REALTIME, &clock_resolution);
		*sp = MS_10; // 10 ms -- clock_resolution.tv_nsec + (clock_resolution.tv_sec * 10 ^ 9);
		return -1;
	}
	 */

int16 n_vm_RealtimeClock_getNativeResolution(int32 *sp) {

	*sp = MS_10; // Devuelve por pila de Java el valor de 10ms como 10000000ns

    return 0;
}



/* Refer to the PC host implementation in nativescj.c */

// EN native_scj.c

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

//extern int16 javax_realtime_HighResolutionTime_setNormalized(int32 *fp);

int16 n_vm_RealtimeClock_getNativeTime(int32 *sp) {
	/*struct timespec timevalue;
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
*/
	//return -1;
	return 0;
}


/*. Only used by the
regression testing system. Can be left empty
*/
void mark_error(void) {
	// La dejo vacia
}

void mark_success(void) {
	// La dejo vacia
}

// ERIC ***************************************************F


/*
This function is used for implementing hardware objects. It
must be implemented to write lsb to address + offset. The offset
is in bits. On most architectures this can be very easily implemented
as a normal pointer deference. But on some architectures special pur-
pose instructions must be executed to read/write to IO space. The other
read/writeXXXToIO
are similar but for other data types
*/
void writeByteToIO(pointer address, unsigned short offset, unsigned char lsb) {
}

void writeLongToIO(pointer address, unsigned short offset, int32 msb, int32 lsb) {
}

void writeIntToIO(pointer address, unsigned short offset, int32 lsb) {
    ;
}

void writeShortToIO(pointer address, unsigned short offset, unsigned short lsb) {
    ;
}

/*
void writeByteToIO(pointer address, unsigned short offset, unsigned char lsb) {
    unsigned char *ptr;
    address += offset >> 3;
    ptr = (unsigned char*) (pointer) (address);
    *ptr = lsb;
}*/

void writeBitToIO(pointer address, unsigned short offset, unsigned char bit) {

}

void readLongFromIO(pointer address, unsigned short offset, int32* msb, int32* lsb) {
    *msb = 0;
    *lsb = 0;
}

int32 readIntFromIO(pointer address, unsigned short offset) {
    return 0;
}

unsigned short readShortFromIO(pointer address, unsigned short offset) {
    return 0;
}

unsigned char readByteFromIO(pointer address, unsigned short offset) {
    unsigned char *ptr;
    address += offset >> 3;
    ptr = (unsigned char*) (pointer) (address);
    return *ptr;
}

unsigned char readBitFromIO(pointer address, unsigned short offset) {
    return 0;
}



// ERIC ***************************************************I

/*Must return the value of the stack
pointer as it was when calling the function. Refer to existing implemen-
tations*/
//pointer* get_stack_pointer(void) {	return 0;}

/*
Must set the value of the stack pointer to the value of the global
variable stackPointer and return to the caller.
Refer to existing implementations
*/
// void set_stack_pointer(void) {}



/*Prints a byte. Used to print messages the console.
 * Can be left empty. If a UART is available this can be used
 * for printing. On platforms supporting printf this can simply
 * print the byte as a char on stdout*/
void sendbyte(unsigned char byte) {
	// La dejo vacia POR AHORA, la STM no tiene conectores de
	// puerto serie, hay que agregar hardware externo.
}

/*
 If interrupts can occur while allocating memory using new these
 functions must implement a mutex around memory allocation.
 Can be left empty for programs not using interrupts or if none
 of the interrupt handlers allocate memory (which they are not
 supposed to do).
*/
void init_memory_lock(void) {
	// La dejo vacia
}

void lock_memory(void){
	// La dejo vacia
}

void unlock_memory(void){
	// La dejo vacia
}


// ERIC ***************************************************F

/*Estas funciones no son obligatorias*/

//static uint8 contadorDeTicks;
static int ledState = 0;

void n_devices_System_blink(void) {
}





