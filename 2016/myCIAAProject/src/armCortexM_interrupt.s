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


.syntax unified

/* --------------[ _yield ]-------------- */
	.text
	.thumb_func
	.align	2
	.word	stackPointer
	.global	_yield
_yield:

	/* Guarda el msp en r0 */
	mrs r0,msp

	/* Guarda el contexto de FPU */
	tst lr,0x10
	it eq
	vstmdbeq r0!,{s16-s31}

	/* Guarda el contexto, enteros */
	stmdb r0!,{r4-r11,lr}

   /* Guarda el stack pointer del proceso actual en r0 */
	ldr r1,=stackPointer
	str r0,[r1]

   /* Ejecuta una funcion externa que realiza el cambio de proceso */
	bl	_transfer

	/* Carga el stack pointer del nuevo proceso en r0 */
	ldr r1,=stackPointer
	ldr r0,[r1]

	/* Recupera el contexto, enteros */
	ldmia r0!,{r4-r11,lr}

	/* Recupera contexto FPU si es necesario */
	tst lr,0x10
	it eq
	vldmiaeq r0!,{s16-s31}

	/* Guarda r0 en el msp */
	msr msp,r0

	bx lr


/* --------------[ get_stack_pointer ]-------------- */
	.text
	.thumb_func
	.align	2
	.global	get_stack_pointer
get_stack_pointer:

	/* Guarda el msp en r0 */
	mrs r0,msp

	bx lr


/* --------------[ set_stack_pointer ]-------------- */
	.text
	.thumb_func
	.align	2
	.global	set_stack_pointer
set_stack_pointer:

	/* Carga el stack pointer del nuevo proceso en r0 */
	ldr r1,=stackPointer
	ldr r0,[r1]

   /* Guarda r0 en el msp */
	msr msp,r0

	bx lr
