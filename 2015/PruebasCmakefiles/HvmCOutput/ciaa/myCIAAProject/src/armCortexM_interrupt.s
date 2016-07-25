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
