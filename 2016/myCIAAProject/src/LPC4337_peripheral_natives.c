/* Copyright 2015, Eric Pernia.
 * All rights reserved.
 *
 * This file is part HVM4CIAA.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its
 *    contributors may be used to endorse or promote products derived from this
 *    software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 */

#include "../../../ostypes.h"
#include "../../../types.h"

#include "sAPI.h"

/* ------------------------- Digital I/O ------------------------- */

/* digitalConfig
 * param : [int, int]
 * return: boolean
 */
int16 n_ar_edu_unq_embebidos_DigitalIO_digitalConfig(int32 *sp) {
   pointer self = (pointer)sp[0];
   int32 peripheralID = sp[1];
   int32 mode = sp[2];
   int8 returnValue;

   /*method body has to set returnValue variable */
   returnValue = digitalConfig( (int8)peripheralID, (int8)mode );
   
   sp[0] = (int8) returnValue;
   return -1;
}

/* digitalRead
 * param : [int]
 * return: boolean
 */
int16 n_ar_edu_unq_embebidos_DigitalIO_digitalRead(int32 *sp) {
   pointer self = (pointer)sp[0];
   int32 peripheralID = sp[1];
   int8 returnValue;

   /*method body has to set returnValue variable */
   returnValue = digitalRead( (int8)peripheralID );
   
   sp[0] = (int32) returnValue;
   return -1;
}

/* digitalWrite
 * param : [int, boolean]
 * return: boolean
 */
int16 n_ar_edu_unq_embebidos_DigitalIO_digitalWrite(int32 *sp) {
   pointer self = (pointer)sp[0];
   int32 peripheralID = sp[1];
   int8 value = (int8) sp[2];
   int8 returnValue;

   /*method body has to set returnValue variable */
   returnValue = digitalWrite( (int8)peripheralID, (int8)value );
   
   sp[0] = (int8) returnValue;
   return -1;
}

/* ------------------------- Analog I/O -------------------------- */

/* analogRead
 * param : [int]
 * return: int
 */
int16 n_ar_edu_unq_embebidos_AnalogIO_analogRead(int32 *sp) {
   pointer self = (pointer)sp[0];
   int32 peripheralID = sp[1];
   int32 returnValue;
   
   /*method body has to set returnValue variable */
   returnValue = analogRead(peripheralID);
   
   sp[0] = (int32) returnValue;
   return -1;
}

/* analogWrite
 * param : [int, int]
 * return: boolean
 */
int16 n_ar_edu_unq_embebidos_AnalogIO_analogWrite(int32 *sp) {
   pointer self = (pointer)sp[0];
   int32 peripheralID = sp[1];
   int32 value = sp[2];
   int8 returnValue;
   
   /*method body has to set returnValue variable */
   returnValue = analogWrite( peripheralID, value );
   
   sp[0] = (int8) returnValue;
   return -1;
}

/* analogConfig
 * param : [int]
 * return: boolean
 */
int16 n_ar_edu_unq_embebidos_AnalogIO_analogConfig(int32 *sp) {
   pointer self = (pointer)sp[0];
   int32 analogIorO = sp[1];
   int8 returnValue;
   
   /*method body has to set returnValue variable */
   analogConfig( analogIorO );
   
   sp[0] = (int8) returnValue;
   return -1;
}

/* analogAdvancedConfig
 * param : [int, int]
 * return: boolean
 */
int16 n_ar_edu_unq_embebidos_AnalogIO_analogAdvancedConfig(int32 *sp) {
   pointer self = (pointer)sp[0];
   int32 analogIorO = sp[1];
   int32 mode = sp[2];
   int8 returnValue;
   
   /*method body has to set returnValue variable */
   analogAdvancedConfig( analogIorO, mode );
   
   sp[0] = (int8) returnValue;
   return -1;
}

/* ---------------------------- Uart ----------------------------- */





/* ---------------------------- Delay ---------------------------- */

// Delay instances for HVM - DelayID from 0 to 19, 20 is in use
delay_t nonBlockingdelays[21];

/* delayMs
 * param : [int]
 * return: void
 */
int16 n_ar_edu_unq_embebidos_Delay_delayMs(int32 *sp) {
   pointer self = (pointer)sp[0];
   int32 timeMs = sp[1];
   
   /* method body */
   delay( (tick_t)timeMs );

   return -1;
}

/* setDelay
 * param : [int, int]
 * return: void
 */
int16 n_ar_edu_unq_embebidos_Delay_setDelay_(int32 *sp) {
   pointer self = (pointer)sp[0];
   int32 delayID = sp[1];
   int32 timeMs = sp[2];
   
   /* method body */
   setDelay( nonBlockingdelays + delayID, timeMs );
   
   return -1;
}

/* isDelayComplete
 * param : [int]
 * return: boolean
 */
int16 n_ar_edu_unq_embebidos_Delay_isDelayComplete_(int32 *sp) {
   pointer self = (pointer)sp[0];
   int32 delayID = sp[1];
   int8 returnValue;
   
   /*method body has to set returnValue variable */
   returnValue = isDelayComplete( nonBlockingdelays + delayID );
   
   sp[0] = (int8) returnValue;
   return -1;
}

