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


#include "ostypes.h"
#include "types.h"

#include "chip.h"
#include "sAPI.h"


#define  SYSTEM_BAUD_RATE 115200
#define CIAA_BOARD_UART LPC_USART2

/*----------------------------------------------------------------------------*/
static void setupDebugUart(void)
{
   /* UART2 (USB-UART)/Debugger */
	/* Initialize peripheral */
   Chip_UART_Init(CIAA_BOARD_UART);
   /* Set Baud rate */
   Chip_UART_SetBaud(CIAA_BOARD_UART, SYSTEM_BAUD_RATE);
   /* Modify FCR (FIFO Control Register) */
   Chip_UART_SetupFIFOS(CIAA_BOARD_UART, UART_FCR_FIFO_EN | UART_FCR_TRG_LEV0);
   /* Enable UART Transmission */
   Chip_UART_TXEnable(CIAA_BOARD_UART);
   Chip_SCU_PinMux(7, 1, MD_PDN, FUNC6);              /* P7_1: UART2_TXD */
   Chip_SCU_PinMux(7, 2, MD_PLN|MD_EZI|MD_ZI, FUNC6); /* P7_2: UART2_RXD */
   /* Enable UART Rx Interrupt */
   /*
	//Receiver Buffer Register Interrupt
   Chip_UART_IntEnable(CIAA_BOARD_UART,UART_IER_RBRINT );
	// Enable UART line status interrupt
	//LPC43xx User manual page 1118
   //Chip_UART_IntEnable(CIAA_BOARD_UART,UART_IER_RLSINT );
   NVIC_SetPriority(USART2_IRQn, 6);
   // Enable Interrupt for UART channel
   NVIC_EnableIRQ(USART2_IRQn);
   */
}

/*----------------------------------------------------------------------------*/
/*
RX Interrupt needed to detect NULL (0x00) in the reception buffer
(can't be done by pooling)
*/
/*
void UART2_IRQHandler(void){
   if (Chip_UART_ReadLineStatus(CIAA_BOARD_UART) & UART_LSR_RDR) {
      receivedByte = Chip_UART_ReadByte(CIAA_BOARD_UART);
   }
      UART_Tx_Byte(receivedByte);
}
*/

/*----------------------------------------------------------------------------*/
/*
Esta funcion se llama al comienzo de la funcion main. Se utiliza en algunas
plataformas para copiar datos inicializados en los segmentos correctos. Si esto
no es necesario, se puede dejar vacia. Solo se llama una unica vez.
*/
/*This function gets called as the first thing upon entry into main. It has been
used on some platforms to copy initialized data into the correct segments. It
can be left empty. It is only called once.
*/
void init_compiler_specifics(void) {
   boardInit();
   setupDebugUart();
}

/*----------------------------------------------------------------------------*/
/* JAVA STACK */
int32 java_stack[JAVA_STACK_SIZE];

/*
Esta funcion se llama antes de entrar en la maquina virtual. Debe devolver un
puntero a un area de memoria RAM que se utilizara como la pila de Java.
*/
/*
This function gets called before entering the VM. It should return a pointer to
a RAM memory area that is used as the Java stack
*/
int32* get_java_stack_base(int16 size) {
   return (int32*) &java_stack[0];
}

/*----------------------------------------------------------------------------*/
/*
Esta funcion se llama antes de iniciar la m ́aquina virtual. Si la maquina
virtual se reinicia, la misma vuelve a ser llamada. Se puede dejar vacia.
*/
/*
This function gets called before starting the VM. It is recalled if the VM is
restarted. It can be left empty
*/
void initNatives(void) {
   /* Empty */
}

/*----------------------------------------------------------------------------*/
/*
Solo las utiliza el sistema de pruebas de regresion. Si el mismo no es utilizado
se pueden dejar vacias.
*/
/*
Only used by the regression testing system. Can be left empty
*/
void mark_error(void) {
	/* Empty */
}

void mark_success(void) {
	/* Empty */
}

/*----------------------------------------------------------------------------*/
/*
Estas funciones se utilizan para la implementacion de objetos hardware. Se debe
implementar para escribir lsb a la direccion + offset. El offset es en bits.
En la mayor ́ıa de las arquitecturas esto puede implementarse muy facilmente como
una deferencia normal de puntero. En otras arquitecturas, en cambio, se deben
ejecutar instrucciones de prop ́osito especial para la lectura y escritura de
registros I/O.
*/
/*
This functions are used for implementing hardware objects. It must be
implemented to write lsb to address + offset. The offset is in bits. On most
architectures this can be very easily implemented as a normal pointer deference.
But on some architectures special purpose instructions must be executed to
read/write to IO space.
*/

void writeLongToIO(pointer address, unsigned short offset, int32 msb, int32 lsb) {
	/* Empty */
}

void writeIntToIO(pointer address, unsigned short offset, int32 lsb) {
	/* Empty */
}

void writeShortToIO(pointer address, unsigned short offset, unsigned short lsb) {
	/* Empty */
}

void writeByteToIO(pointer address, unsigned short offset, unsigned char lsb) {
	/* Empty */
}

void writeBitToIO(pointer address, unsigned short offset, unsigned char bit) {
	/* Empty */
}

void readLongFromIO(pointer address, unsigned short offset, int32* msb, int32* lsb) {
	/* Empty */
}

int32 readIntFromIO(pointer address, unsigned short offset) {
	/* Empty */
   return 0;
}

unsigned short readShortFromIO(pointer address, unsigned short offset) {
	/* Empty */
   return 0;
}

unsigned char readByteFromIO(pointer address, unsigned short offset) {
	/* Empty */
   return 0;
}

unsigned char readBitFromIO(pointer address, unsigned short offset) {
	/* Empty */
   return 0;
}

/*----------------------------------------------------------------------------*/
/*
Deben ser implementadas en caso de que puedan producirse interrupciones mientras
se asigna memoria utilizando new. Estas funciones se utilizan para realizar un
mutex alrededor de la asignacion de memoria. Se pueden dejar vacias para
programas que no utilizan las interrupciones o si ninguno de los handlers de
interrupciones asignan memoria.
*/
/*
If interrupts can occur while allocating memory using new these functions must
implement a mutex around memory allocation. Can be left empty for programs not
using interrupts or if none of the interrupt handlers allocate memory (which
they are not supposed to do).
*/
void init_memory_lock(void) {
	/* Empty */
}

void lock_memory(void){
	/* Empty */
}

void unlock_memory(void){
	/* Empty */
}

/*----------------------------------------------------------------------------*/
/*
Imprime un byte. Se utiliza para imprimir los mensajes de la consola. Se puede
dejar vacia. Si la plataforma posee una UART disponible, se puede utilizar para
la impresion.
*/
/*
Prints a byte. Used to print messages the console.
*/
void sendbyte(unsigned char byte) {
   /* Wait for space in FIFO */
   while (!(Chip_UART_ReadLineStatus(CIAA_BOARD_UART) & UART_LSR_THRE));
   /* send byte */
   Chip_UART_SendByte(CIAA_BOARD_UART, (int32)byte );
}

/*----------------------------------------------------------------------------*/
#if defined(N_DEVICES_SYSTEM_BLINK)
int32 n_devices_System_blink(int32 *sp) {
   return -1;
}
#endif

/*----------------------------------------------------------------------------*/
