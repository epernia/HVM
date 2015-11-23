#include "../../../ostypes.h"

#include "../../../types.h"

#include "board.h"
/* nwrite
 * param : [byte[], int]
 * return: void
 */
//int16 n_devices_X86Writer_nwrite(int32 *sp) {
//pointer arg0 = (pointer) sp[0];
//int32 arg1 = sp[1];

/* method body */
//return -1;
//}

/* delayTicks
 * param : [int]
 * return: void
 */
int16 n_scjhelloworld_Delay_delayTicks(int32 *sp) {
pointer self = (pointer)sp[0];

int32 arg0 = sp[1];

/* method body */
	volatile unsigned long i;
	volatile unsigned long delay;

	delay = 20400 * arg0;

	for( i=delay; i>0; i-- );

return -1;
}
/* ledStatus
 * param : [int, int]
 * return: void
 */
int16 n_scjhelloworld_Led_ledStatus(int32 *sp) {
pointer self = (pointer)sp[0];

int32 arg0 = sp[1];
int32 arg1 = sp[2];

/* method body */
Board_LED_Set(arg0,arg1);

return -1;
}
