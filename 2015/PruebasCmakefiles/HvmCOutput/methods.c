#include "ostypes.h"
#include "types.h"
#include "classes.h"
#include "methods.h"
int16 devices_Console_clinit_(int32 *fp);
void initializeException(int32* sp, int16 exceptionClass,
		int16 exceptionInitMethod);
RANGE extern const MethodInfo *methods;
extern unsigned short handleAthrow(const MethodInfo* method,
		unsigned short classIndex, unsigned short pc);
extern unsigned char* createArray(unsigned short classIndex, uint16 count FLASHARG(uint8 flash));
extern unsigned short getClassIndex(Object* obj);
extern const unsigned char *classData;
extern const ClassInfo *classes;
extern unsigned char handleNewClassIndex(int32* sp, unsigned short classIndex);
extern int16 enterMethodInterpreter(unsigned short methodNumber, int32* sp);
int16 devices_Console_getBytes(int32 *fp, int32 string, int8 addNewLine);
int16 devices_Console_println(int32 *fp, int32 string);
int16 devices_Console_println_(int32 *fp, int32 string, int8 addNewLine);
static uint32 dummy;
RANGE extern const ClassInfo *classes;
int16 devices_X86Writer_init_(int32 *fp, int32 this);
int16 java_lang_Object_init_(int32* sp);
int16 devices_X86Writer_write(int32 *fp, int32 this, int32 bytes, int16 length);
int16 n_devices_X86Writer_nwrite(int32* sp);
int16 java_lang_AbstractStringBuilder_init_(int32 *fp, int32 lv_0, int32 lv_1);
int16 java_lang_AbstractStringBuilder_append(int32 *fp, int32 lv_0, int32 lv_1);
extern Object* stringConstants[];
extern const ConstantInfo *constants;
#ifndef PRE_INITIALIZE_CONSTANTS
extern int16 initializeStringConstant(const ConstantInfo* constant, int32* sp);
#endif
int16 java_lang_StringBuilder_append__(int32* sp);
int16 java_lang_AbstractStringBuilder_append_(int32 *fp, int32 lv_0,
		int32 lv_1);
int16 java_lang_AbstractStringBuilder_appendNull(int32 *fp, int32 lv_0);
int16 java_lang_AbstractStringBuilder_ensureCapacityInternal(int32 *fp,
		int32 lv_0, int32 lv_1);
int16 java_lang_AbstractStringBuilder_expandCapacity(int32 *fp, int32 lv_0,
		int32 lv_1);
extern int32 imul(int32 x, int32 y);
int16 java_util_Arrays_copyOf(int32* sp);
int16 java_lang_ArrayIndexOutOfBoundsException_init_(int32 *fp);
int16 java_lang_IndexOutOfBoundsException_init_(int32* sp);
int16 java_lang_AssertionError_init_(int32 *fp);
int16 java_lang_Error_init_(int32* sp);
int16 java_lang_Double_clinit_(int32 *fp);
int16 n_java_lang_Class_getPrimitiveClass(int32* sp);
int16 java_lang_Error_init_(int32 *fp);
int16 java_lang_Exception_init_(int32 *fp, int32 lv_0);
int16 java_lang_Exception_init__(int32 *fp, int32 lv_0, int32 lv_1);
int16 java_lang_Float_clinit_(int32 *fp);
int16 java_lang_IllegalArgumentException_init_(int32 *fp, int32 lv_0,
		int32 lv_1);
int16 java_lang_IllegalMonitorStateException_init_(int32 *fp);
int16 java_lang_RuntimeException_init_(int32* sp);
int16 java_lang_IndexOutOfBoundsException_init_(int32 *fp);
int16 java_lang_IndexOutOfBoundsException_init__(int32 *fp, int32 lv_0,
		int32 lv_1);
int16 java_lang_Integer_clinit_(int32 *fp);
int16 java_lang_Integer_getChars(int32 *fp, int32 lv_0, int32 lv_1, int32 lv_2);
extern int32 idiv(int32 x, int32 y);
int16 java_lang_Integer_stringSize(int32 *fp, int32 lv_0);
int16 java_lang_Math_clinit_(int32 *fp);
extern Object* getClass(unsigned short classIndex);
int16 n_java_lang_Class_desiredAssertionStatus(int32* sp);
unsigned char handleLDCWithIndex(int32* sp, unsigned short index);
int16 n_java_lang_Float_floatToRawIntBits(int32* sp);
int16 n_java_lang_Double_doubleToRawLongBits(int32* sp);
int16 java_lang_Math_init_(int32 *fp, int32 lv_0);
int16 java_lang_Math_min(int32 *fp, int32 lv_0, int32 lv_1);
int16 java_lang_Math_powerOfTwoD(int32 *fp, int32 lv_0);
int16 java_lang_AssertionError_init_(int32* sp);
extern void handleLongOperator(unsigned char code, int32* sp);
extern void handleLSHL(int32* sp);
int16 n_java_lang_Double_longBitsToDouble(int32* sp);
int16 java_lang_NegativeArraySizeException_init_(int32 *fp);
int16 java_lang_Object_init_(int32 *fp);
int16 java_lang_RuntimeException_init_(int32 *fp);
int16 java_lang_RuntimeException_init__(int32 *fp, int32 lv_0, int32 lv_1);
int16 java_lang_String_init__(int32 *fp, int32 lv_0, int32 lv_1, int32 lv_2,
		int32 lv_3);
int16 java_lang_String_charAt(int32 *fp, int32 lv_0, int32 lv_1);
int16 java_lang_String_getChars(int32 *fp, int32 lv_0, int32 lv_1, int32 lv_2,
		int32 lv_3, int32 lv_4);
int16 n_java_lang_System_arraycopy(int32* sp);
int16 java_lang_String_length(int32 *fp, int32 lv_0);
int16 java_lang_StringBuilder_init_(int32 *fp, int32 lv_0);
int16 java_lang_StringBuilder_append_(int32 *fp, int32 lv_0, int32 lv_1);
int16 java_lang_StringBuilder_append__(int32 *fp);
int16 java_lang_StringBuilder_append___(int32 *fp, int32 lv_0, int32 lv_1);
int16 java_lang_StringBuilder_toString(int32 *fp, int32 lv_0);
int16 java_lang_StringIndexOutOfBoundsException_init_(int32 *fp, int32 lv_0,
		int32 lv_1);
int16 java_lang_System_clinit_(int32 *fp);
int16 n_java_lang_System_registerNatives(int32* sp);
int16 java_lang_Throwable_init_(int32 *fp, int32 lv_0);
extern unsigned char handleMonitorEnterExit(Object* lockObj,
		unsigned char isEnter, int32* sp, const char* fromMethod);
int16 java_lang_Throwable_init__(int32 *fp, int32 lv_0, int32 lv_1);
int16 java_lang_Throwable_fillInStackTrace(int32 *fp, int32 lv_0);
int16 n_java_lang_Throwable_fillInStackTrace_(int32* sp);
int16 java_lang_VirtualMachineError_init_(int32 *fp);
int16 java_util_Arrays_clinit_(int32 *fp);
int16 java_util_Arrays_init_(int32 *fp, int32 lv_0);
int16 java_util_Arrays_copyOf(int32 *fp);
int16 java_util_Arrays_copyOfRange(int32 *fp, int32 lv_0, int32 lv_1,
		int32 lv_2);
int16 scjhelloworld_Delay_init_(int32 *fp, int32 this, int32 i);
int16 scjhelloworld_Delay_delay(int32 *fp, int32 this);
int16 n_scjhelloworld_Delay_delayTicks(int32* sp);
int16 scjhelloworld_Led_init_(int32 *fp, int32 this, int32 i);
int16 scjhelloworld_Led_off(int32 *fp, int32 this);
int16 n_scjhelloworld_Led_ledStatus(int32* sp);
int16 scjhelloworld_Led_on(int32 *fp, int32 this);
int16 scjhelloworld_TestProcess_P1_init_(int32 *fp, int32 this);
int16 scjhelloworld_TestProcess_P1_init__(int32 *fp);
int16 scjhelloworld_TestProcess_P1_catchError(int32 *fp, int32 this, int32 t);
int16 scjhelloworld_TestProcess_P1_run(int32 *fp);
int16 scjhelloworld_TestProcess_access_0(int32* sp);
int16 scjhelloworld_TestProcess_access_1(int32* sp);
int16 scjhelloworld_TestProcess_P2_init_(int32 *fp, int32 this);
int16 scjhelloworld_TestProcess_P2_init__(int32 *fp);
int16 scjhelloworld_TestProcess_P2_catchError(int32 *fp, int32 this, int32 t);
int16 scjhelloworld_TestProcess_P2_run(int32 *fp);
int16 scjhelloworld_TestProcess_access_2(int32* sp);
int16 scjhelloworld_TestProcess_access_0(int32 *fp);
int16 scjhelloworld_TestProcess_access_1(int32 *fp);
int16 scjhelloworld_TestProcess_access_2(int32 *fp);
int16 scjhelloworld_TestProcess_main(int32 *fp, int32 args);
int16 scjhelloworld_TestProcess_P1_init__(int32* sp);
int16 scjhelloworld_TestProcess_P2_init__(int32* sp);
int16 vm_ClockInterruptHandler_yield(int32 *fp);
int16 vm_Process_ProcessExecutor_init_(int32 *fp, int32 this, int32 thisProcess);
int16 vm_Process_ProcessExecutor_run(int32 *fp);
int16 vm_Process_access_0(int32* sp);
extern signed short dispatchInterface(unsigned short methodIndex,
		unsigned char *vTableIndex, int32* sp);
int16 vm_Process_access_1(int32* sp);
int16 vm_Process_SP_init_(int32 *fp, int32 this);
int16 vm_Process_SP_init__(int32 *fp);
int16 vm_Process_X86_32SP_init_(int32 *fp, int32 this);
int16 vm_Process_SP_init__(int32* sp);
int16 vm_Process_X86_32SP_init__(int32 *fp);
int16 vm_Process_X86_64SP_init_(int32 *fp, int32 this);
int16 vm_Process_X86_64SP_init__(int32 *fp);
int16 vm_Process_init_(int32 *fp, int32 this, int32 logic, int32 stack);
extern int8 architecture;
int16 vm_Process_X86_64SP_init__(int32* sp);
int16 vm_Process_X86_32SP_init__(int32* sp);
int16 vm_Process_access_0(int32 *fp);
int16 vm_Process_access_1(int32 *fp);
int16 vm_Process_initialize(int32 *fp, int32 this);
int16 n_vm_Process_executeWithStack(int32* sp);
int16 vm_Process_transferTo(int32 *fp, int32 this, int32 nextProcess);
int16 n_vm_Process_transfer(int32* sp);
extern void unimplemented_native_function(uint16 methodID);

/* Class: devices.Console */
/* Method: <clinit> */
/* <clinit>
 * param : 
 * return: void
 */
int16 devices_Console_clinit_(int32 *fp) {
	int32* sp;
	int16 s_val1;
	Object* narray;
	uint16 count;
	unsigned short pc;
	int16 excep;
	unsigned short handler_pc;
	int32 i_val1;
	int32 lsb_int32;
	int16 rval_m_16;
	sp = &fp[3]; /* make room for local VM state on the stack */
	/* */
	s_val1 = 513;
	/* */
	count = s_val1;
	narray = (Object*) createArray(0, (uint16) count FLASHARG((0)));
	if (narray == 0) {
		pc = 3;
		goto throwOutOfMemory;
	}
	i_val1 = (int32) (pointer) narray;
	/* */
	lsb_int32 = i_val1;
	((struct _staticClassFields_c *) classData)->bytes_f = lsb_int32;
	/* */
	if (handleNewClassIndex(sp, 4) == 0) {
		fp[0] = *sp;
		return getClassIndex((Object*) (pointer) * sp);
	}
	sp++;
	/* */
	i_val1 = *(sp - 1);
	/* */
	rval_m_16 = devices_X86Writer_init_(sp, i_val1);
	if (rval_m_16 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_16;
	}
	/* */
	sp--;
	lsb_int32 = (int32)(*sp);
	((struct _staticClassFields_c *) classData)->writer_f = lsb_int32;
	/* */
	return -1;
	throwOutOfMemory: initializeException(sp, JAVA_LANG_OUTOFMEMORYERROR,
			JAVA_LANG_OUTOFMEMORYERROR_INIT_);
	excep = JAVA_LANG_OUTOFMEMORYERROR;
	goto throwIt;
	throwIt: handler_pc = handleAthrow(&methods[0], excep, pc);
	sp++;
	switch (handler_pc) {
	case (unsigned short) -1: /* Not handled */
	default:
		fp[0] = *(sp - 1);
		return excep;
	}
}

/* Class: devices.Console */
/* Method: getBytes */
/* getBytes
 * param : java.lang.String, boolean
 * return: byte[]
 */
int16 devices_Console_getBytes(int32 *fp, int32 string, int8 addNewLine) {
	int32* sp;
	int32 i_val3;
	int16 excep;
	unsigned short handler_pc;
	unsigned short pc;
	int16 rval_m_3;
	int32 rval_3;
	int32 i_val2;
	int32 i_val1;
	int32 i_val0;
	int16 rval_m_20;
	int32 rval_20;
	int8 lsb_int8;
	int32 index_int32;
	unsigned char* cobj;
	int16 s_val2;
	int8 b_val3;
	int8 b_val1;
	int32 index;
	int32 length;
	sp = &fp[6]; /* make room for local VM state on the stack */
	/* */
	i_val3 = 0;
	/* */
	index = i_val3;
	/* */
	i_val3 = string;
	/* */
	if (i_val3 == 0) {
		pc = 3;
		goto throwNullPointer;
	}
	rval_m_3 = java_lang_String_length(sp, i_val3);
	if (rval_m_3 == -1) {
		rval_3 = *(int32*) sp;
		i_val3 = rval_3;
	} else {
		fp[0] = *sp;
		return rval_m_3;
	}
	/* */
	length = i_val3;
	/* */
	goto L29;
	/* */
	L11: i_val3 = ((struct _staticClassFields_c *) classData)->bytes_f;
	/* */
	i_val2 = (int32) index;
	/* */
	i_val1 = string;
	/* */
	i_val0 = (int32) index;
	/* */
	sp += 2;
	rval_m_20 = java_lang_String_charAt(sp, i_val1, i_val0);
	if (rval_m_20 == -1) {
		rval_20 = *(int32*) sp;
		i_val1 = rval_20;
	} else {
		fp[0] = *sp;
		return rval_m_20;
	}
	sp -= 2;
	/* */
	/* */
	lsb_int8 = i_val1;
	index_int32 = i_val2;
	cobj = (unsigned char *) (pointer) i_val3;
	if (cobj == 0) {
		pc = 25;
		goto throwNullPointer;
	}
	cobj = cobj + sizeof(Object) + 2 + index_int32;
	cobj = HEAP_REF(cobj, unsigned char*);
	*cobj = lsb_int8;
	/* */
	index = (int32) index + 1;
	/* */
	L29: i_val3 = (int32) index;
	/* */
	i_val2 = (int32) length;
	/* */
	if (i_val3 >= i_val2) {
		goto L41;
	}
	/* */
	i_val3 = (int32) index;
	/* */
	s_val2 = 511;
	/* */
	if (i_val3 < s_val2) {
		goto L11;
	}
	/* */
	L41: b_val3 = (int8) addNewLine;
	/* */
	if (b_val3 == 0) {
		goto L55;
	}
	/* */
	i_val3 = ((struct _staticClassFields_c *) classData)->bytes_f;
	/* */
	i_val2 = (int32) index;
	/* */
	b_val1 = (signed char) 10;
	/* */
	lsb_int8 = b_val1;
	index_int32 = i_val2;
	cobj = (unsigned char *) (pointer) i_val3;
	if (cobj == 0) {
		pc = 54;
		goto throwNullPointer;
	}
	cobj = cobj + sizeof(Object) + 2 + index_int32;
	cobj = HEAP_REF(cobj, unsigned char*);
	*cobj = lsb_int8;
	/* */
	L55: i_val3 = ((struct _staticClassFields_c *) classData)->bytes_f;
	/* */
	*((int32*) fp) = i_val3;
	return -1;
	throwNullPointer: initializeException(sp, JAVA_LANG_NULLPOINTEREXCEPTION,
			JAVA_LANG_NULLPOINTEREXCEPTION_INIT_);
	excep = JAVA_LANG_NULLPOINTEREXCEPTION;
	goto throwIt;
	throwIt: handler_pc = handleAthrow(&methods[1], excep, pc);
	sp++;
	switch (handler_pc) {
	case (unsigned short) -1: /* Not handled */
	default:
		fp[0] = *(sp - 1);
		return excep;
	}
}

/* Class: devices.Console */
/* Method: println */
/* println
 * param : java.lang.String
 * return: void
 */
int16 devices_Console_println(int32 *fp, int32 string) {
	int32* sp;
	int32 i_val1;
	int8 b_val0;
	int16 rval_m_2;
	sp = &fp[3]; /* make room for local VM state on the stack */
	/* */
	i_val1 = string;
	/* */
	b_val0 = 1;
	/* */
	rval_m_2 = devices_Console_println_(sp, i_val1, b_val0);
	if (rval_m_2 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_2;
	}
	/* */
	return -1;
}

/* Class: devices.Console */
/* Method: println */
/* println
 * param : java.lang.String, boolean
 * return: void
 */
int16 devices_Console_println_(int32 *fp, int32 string, int8 addNewLine) {
	int32* sp;
	int32 i_val2;
	int16 excep;
	unsigned short handler_pc;
	unsigned short pc;
	int16 rval_m_1;
	int32 rval_1;
	short int sresult;
	int8 b_val2;
	int16 s_val2;
	int8 b_val1;
	int8 msb_int8;
	int16 lsb_int16;
	int16 rval_m_18;
	int32 rval_18;
	int32 i_val1;
	int16 s_val0;
	unsigned short classIndex;
	unsigned short methodIndex;
	int16 rval_m_36;
	int16 length;
	sp = &fp[5]; /* make room for local VM state on the stack */
	/* */
	i_val2 = string;
	/* */
	if (i_val2 == 0) {
		pc = 1;
		goto throwNullPointer;
	}
	rval_m_1 = java_lang_String_length(sp, i_val2);
	if (rval_m_1 == -1) {
		rval_1 = *(int32*) sp;
		i_val2 = rval_1;
	} else {
		fp[0] = *sp;
		return rval_m_1;
	}
	/* */
	sresult = i_val2;
	i_val2 = sresult;
	/* */
	length = i_val2;
	/* */
	b_val2 = (int8) addNewLine;
	/* */
	if (b_val2 == 0) {
		goto L16;
	}
	/* */
	s_val2 = (int16) length;
	/* */
	b_val1 = 1;
	/* */
	msb_int8 = b_val1;
	lsb_int16 = s_val2;
	lsb_int16 += msb_int8;
	i_val2 = lsb_int16;
	/* */
	sresult = i_val2;
	i_val2 = sresult;
	/* */
	length = i_val2;
	/* */
	L16: i_val2 = string;
	/* */
	b_val1 = (int8) addNewLine;
	/* */
	rval_m_18 = devices_Console_getBytes(sp, i_val2, b_val1);
	if (rval_m_18 == -1) {
		rval_18 = *(int32*) sp;
		i_val2 = rval_18;
	} else {
		fp[0] = *sp;
		return rval_m_18;
	}
	/* */
	dummy = i_val2;
	/* */
	i_val2 = ((struct _staticClassFields_c *) classData)->writer_f;
	/* */
	i_val1 = ((struct _staticClassFields_c *) classData)->bytes_f;
	/* */
	s_val0 = (int16) length;
	/* */
	if (i_val2 == 0) {
		pc = 36;
		goto throwNullPointer;
	}
	classIndex = getClassIndex((Object *) (pointer) i_val2);
	methodIndex = (unsigned short) -1;
	while (methodIndex == (unsigned short) -1) {
		switch (classIndex) {
		case 4:
			rval_m_36 = devices_X86Writer_write(sp, i_val2, i_val1, s_val0);
			methodIndex = 6;
			continue;
		}
		classIndex = pgm_read_word(&classes[classIndex].superClass);
	}
	if (rval_m_36 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_36;
	}
	/* */
	return -1;
	throwNullPointer: initializeException(sp, JAVA_LANG_NULLPOINTEREXCEPTION,
			JAVA_LANG_NULLPOINTEREXCEPTION_INIT_);
	excep = JAVA_LANG_NULLPOINTEREXCEPTION;
	goto throwIt;
	throwIt: handler_pc = handleAthrow(&methods[3], excep, pc);
	sp++;
	switch (handler_pc) {
	case (unsigned short) -1: /* Not handled */
	default:
		fp[0] = *(sp - 1);
		return excep;
	}
}

/* Class: devices.X86Writer */
/* Method: <init> */
/* <init>
 * param : 
 * return: void
 */
int16 devices_X86Writer_init_(int32 *fp, int32 this)
{
	int32* sp;
	int32 i_val0;
	int16 rval_m_1;
	sp = &fp[3]; /* make room for local VM state on the stack */
	/* */
	i_val0 = this;
	/* */
	*sp = (int32)i_val0;
	sp++;
	sp -= 1;
	rval_m_1 = java_lang_Object_init_(sp);
	if (rval_m_1 == -1) {
		;
	}
	else
	{
		fp[0] = *sp;
		return rval_m_1;
	}
	/* */
	return -1;
}

/* Class: devices.X86Writer */
/* Method: nwrite */
/* Class: devices.X86Writer */
/* Method: write */
/* write
 * param : byte[], short
 * return: void
 */
int16 devices_X86Writer_write(int32 *fp, int32 this, int32 bytes, int16 length)
{
	int32* sp;
	int32 i_val1;
	int32 i_val0;
	int16 rval_m_2;
	sp = &fp[5]; /* make room for local VM state on the stack */
	/* */
	i_val1 = bytes;
	/* */
	i_val0 = (int16)length;
	/* */
	*sp = (int32)i_val1;
	sp++;
	*sp = (int32)i_val0;
	sp++;
	sp -= 2;
	rval_m_2 = n_devices_X86Writer_nwrite(sp);
	if (rval_m_2 == -1) {
		;
	}
	else
	{
		fp[0] = *sp;
		return rval_m_2;
	}
	/* */
	return -1;
}

/* Class: java.lang.AbstractStringBuilder */
/* Method: <init> */
/* <init>
 * param : int
 * return: void
 */
int16 java_lang_AbstractStringBuilder_init_(int32 *fp, int32 lv_0, int32 lv_1) {
	int32* sp;
	int32 i_val1;
	int16 rval_m_1;
	int16 s_val0;
	Object* narray;
	uint16 count;
	unsigned short pc;
	int16 excep;
	unsigned short handler_pc;
	int32 i_val0;
	unsigned char* cobj;
	int32 lsb_int32;
	sp = &fp[4]; /* make room for local VM state on the stack */
	/* */
	i_val1 = lv_0;
	/* */
	*sp = (int32) i_val1;
	sp++;
	sp -= 1;
	rval_m_1 = java_lang_Object_init_(sp);
	if (rval_m_1 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_1;
	}
	/* */
	i_val1 = lv_0;
	/* */
	s_val0 = (int32) lv_1;
	/* */
	count = s_val0;
	narray = (Object*) createArray(1, (uint16) count FLASHARG((0)));
	if (narray == 0) {
		pc = 7;
		goto throwOutOfMemory;
	}
	i_val0 = (int32) (pointer) narray;
	/* */
	lsb_int32 = i_val0;
	cobj = (unsigned char *) (pointer) i_val1;
	((struct _java_lang_StringBuilder_c *)HEAP_REF(cobj, unsigned char*)) -> value_f = lsb_int32;
	/* */
	return -1;
	throwOutOfMemory: initializeException(sp, JAVA_LANG_OUTOFMEMORYERROR,
			JAVA_LANG_OUTOFMEMORYERROR_INIT_);
	excep = JAVA_LANG_OUTOFMEMORYERROR;
	goto throwIt;
	throwIt: handler_pc = handleAthrow(&methods[7], excep, pc);
	sp++;
	switch (handler_pc) {
	case (unsigned short) -1: /* Not handled */
	default:
		fp[0] = *(sp - 1);
		return excep;
	}
}

/* Class: java.lang.AbstractStringBuilder */
/* Method: append */
/* append
 * param : int
 * return: java.lang.AbstractStringBuilder
 */
int16 java_lang_AbstractStringBuilder_append(int32 *fp, int32 lv_0,
		int32 lv_1) {
	int32* sp;
	int32 i_val2;
	int32 i_val1;
	const ConstantInfo* constant_;
	int16 rval_m_11;
	int32 res_int32;
	int16 rval_m_26;
	int32 rval_26;
	int8 b_val1;
	int8 msb_int8;
	int32 lsb_int32;
	int16 rval_m_36;
	int32 rval_36;
	unsigned char* cobj;
	int32 msb_int32;
	int16 rval_m_53;
	int32 i_val0;
	int16 rval_m_66;
	int32 lv_2 = 0;
	int32 lv_3 = 0;
	sp = &fp[6]; /* make room for local VM state on the stack */
	/* */
	i_val2 = (int32) lv_1;
	/* */
	i_val1 = -2147483648;
	/* */
	if (i_val2 != i_val1) {
		goto L20;
	}
	/* */
	i_val2 = lv_0;
	/* */
	constant_ = &constants[1];
#ifndef PRE_INITIALIZE_CONSTANTS
	initializeStringConstant(constant_, sp);
#endif
	i_val1 = (int32) (pointer) stringConstants[constant_->value >> 16];
	/* */
	*sp = (int32) i_val2;
	sp++;
	*sp = (int32) i_val1;
	sp++;
	sp -= 2;
	rval_m_11 = java_lang_StringBuilder_append__(sp);
	if (rval_m_11 == -1) {
		sp += 1;
	} else {
		fp[0] = *sp;
		return rval_m_11;
	}
	/* */
	sp--;
	dummy = (int32)(*sp);
	/* */
	i_val2 = lv_0;
	/* */
	*((int32*) fp) = i_val2;
	return -1;
	/* */
	L20: i_val2 = (int32) lv_1;
	/* */
	if (i_val2 >= 0) {
		goto L35;
	}
	/* */
	i_val2 = (int32) lv_1;
	/* */
	res_int32 = i_val2;
	res_int32 = -res_int32;
	i_val2 = res_int32;
	/* */
	rval_m_26 = java_lang_Integer_stringSize(sp, i_val2);
	if (rval_m_26 == -1) {
		rval_26 = *(int32*) sp;
		i_val2 = rval_26;
	} else {
		fp[0] = *sp;
		return rval_m_26;
	}
	/* */
	b_val1 = 1;
	/* */
	msb_int8 = b_val1;
	lsb_int32 = i_val2;
	lsb_int32 += msb_int8;
	i_val2 = lsb_int32;
	/* */
	*sp = (int32) i_val2;
	sp++;
	goto L40;
	/* */
	L35: i_val2 = (int32) lv_1;
	/* */
	rval_m_36 = java_lang_Integer_stringSize(sp, i_val2);
	if (rval_m_36 == -1) {
		rval_36 = *(int32*) sp;
		i_val2 = rval_36;
	} else {
		fp[0] = *sp;
		return rval_m_36;
	}
	/* */
	*sp = (int32) i_val2;
	sp++;
	L40: sp--;
	lv_2 = (int32)(*sp);
	/* */
	i_val2 = lv_0;
	/* */
	cobj = (unsigned char *) (pointer) i_val2;
	i_val2 = ((struct _java_lang_StringBuilder_c *)HEAP_REF(cobj, unsigned char*)) -> count_f;
	/* */
	i_val1 = (int32) lv_2;
	/* */
	msb_int32 = i_val1;
	lsb_int32 = i_val2;
	lsb_int32 += msb_int32;
	i_val2 = lsb_int32;
	/* */
	lv_3 = i_val2;
	/* */
	i_val2 = lv_0;
	/* */
	i_val1 = (int32) lv_3;
	/* */
	rval_m_53 = java_lang_AbstractStringBuilder_ensureCapacityInternal(sp,
			i_val2, i_val1);
	if (rval_m_53 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_53;
	}
	/* */
	i_val2 = (int32) lv_1;
	/* */
	i_val1 = (int32) lv_3;
	/* */
	i_val0 = lv_0;
	/* */
	cobj = (unsigned char *) (pointer) i_val0;
	i_val0 = ((struct _java_lang_StringBuilder_c *)HEAP_REF(cobj, unsigned char*)) -> value_f;
	/* */
	rval_m_66 = java_lang_Integer_getChars(sp, i_val2, i_val1, i_val0);
	if (rval_m_66 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_66;
	}
	/* */
	i_val2 = lv_0;
	/* */
	i_val1 = (int32) lv_3;
	/* */
	lsb_int32 = i_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	((struct _java_lang_StringBuilder_c *)HEAP_REF(cobj, unsigned char*)) -> count_f = lsb_int32;
	/* */
	i_val2 = lv_0;
	/* */
	*((int32*) fp) = i_val2;
	return -1;
}

/* Class: java.lang.AbstractStringBuilder */
/* Method: append */
/* append
 * param : java.lang.String
 * return: java.lang.AbstractStringBuilder
 */
int16 java_lang_AbstractStringBuilder_append_(int32 *fp, int32 lv_0,
		int32 lv_1) {
	int32* sp;
	int32 i_val4;
	int16 rval_m_5;
	int32 rval_5;
	int16 excep;
	unsigned short handler_pc;
	unsigned short pc;
	int16 rval_m_13;
	int32 rval_13;
	int32 i_val3;
	unsigned char* cobj;
	int32 i_val2;
	int32 msb_int32;
	int32 lsb_int32;
	int16 rval_m_28;
	int32 i_val1;
	int32 i_val0;
	int16 rval_m_49;
	int32 lv_2 = 0;
	sp = &fp[5]; /* make room for local VM state on the stack */
	/* */
	i_val4 = lv_1;
	/* */
	if (i_val4 != 0) {
		goto L12;
	}
	/* */
	i_val4 = lv_0;
	/* */
	rval_m_5 = java_lang_AbstractStringBuilder_appendNull(sp, i_val4);
	if (rval_m_5 == -1) {
		rval_5 = *(int32*) sp;
		i_val4 = rval_5;
	} else {
		fp[0] = *sp;
		return rval_m_5;
	}
	/* */
	*((int32*) fp) = i_val4;
	return -1;
	/* */
	L12: i_val4 = lv_1;
	/* */
	if (i_val4 == 0) {
		pc = 13;
		goto throwNullPointer;
	}
	rval_m_13 = java_lang_String_length(sp, i_val4);
	if (rval_m_13 == -1) {
		rval_13 = *(int32*) sp;
		i_val4 = rval_13;
	} else {
		fp[0] = *sp;
		return rval_m_13;
	}
	/* */
	lv_2 = i_val4;
	/* */
	i_val4 = lv_0;
	/* */
	i_val3 = lv_0;
	/* */
	cobj = (unsigned char *) (pointer) i_val3;
	i_val3 = ((struct _java_lang_StringBuilder_c *)HEAP_REF(cobj, unsigned char*)) -> count_f;
	/* */
	i_val2 = (int32) lv_2;
	/* */
	msb_int32 = i_val2;
	lsb_int32 = i_val3;
	lsb_int32 += msb_int32;
	i_val3 = lsb_int32;
	/* */
	rval_m_28 = java_lang_AbstractStringBuilder_ensureCapacityInternal(sp,
			i_val4, i_val3);
	if (rval_m_28 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_28;
	}
	/* */
	i_val4 = lv_1;
	/* */
	i_val3 = 0;
	/* */
	i_val2 = (int32) lv_2;
	/* */
	i_val1 = lv_0;
	/* */
	cobj = (unsigned char *) (pointer) i_val1;
	i_val1 = ((struct _java_lang_StringBuilder_c *)HEAP_REF(cobj, unsigned char*)) -> value_f;
	/* */
	i_val0 = lv_0;
	/* */
	cobj = (unsigned char *) (pointer) i_val0;
	i_val0 = ((struct _java_lang_StringBuilder_c *)HEAP_REF(cobj, unsigned char*)) -> count_f;
	/* */
	rval_m_49 = java_lang_String_getChars(sp, i_val4, i_val3, i_val2, i_val1,
			i_val0);
	if (rval_m_49 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_49;
	}
	/* */
	i_val4 = lv_0;
	/* */
	i_val3 = i_val4;
	/* */
	cobj = (unsigned char *) (pointer) i_val3;
	i_val3 = ((struct _java_lang_StringBuilder_c *)HEAP_REF(cobj, unsigned char*)) -> count_f;
	/* */
	i_val2 = (int32) lv_2;
	/* */
	msb_int32 = i_val2;
	lsb_int32 = i_val3;
	lsb_int32 += msb_int32;
	i_val3 = lsb_int32;
	/* */
	lsb_int32 = i_val3;
	cobj = (unsigned char *) (pointer) i_val4;
	((struct _java_lang_StringBuilder_c *)HEAP_REF(cobj, unsigned char*)) -> count_f = lsb_int32;
	/* */
	i_val4 = lv_0;
	/* */
	*((int32*) fp) = i_val4;
	return -1;
	throwNullPointer: initializeException(sp, JAVA_LANG_NULLPOINTEREXCEPTION,
			JAVA_LANG_NULLPOINTEREXCEPTION_INIT_);
	excep = JAVA_LANG_NULLPOINTEREXCEPTION;
	goto throwIt;
	throwIt: handler_pc = handleAthrow(&methods[9], excep, pc);
	sp++;
	switch (handler_pc) {
	case (unsigned short) -1: /* Not handled */
	default:
		fp[0] = *(sp - 1);
		return excep;
	}
}

/* Class: java.lang.AbstractStringBuilder */
/* Method: appendNull */
/* appendNull
 * param : 
 * return: java.lang.AbstractStringBuilder
 */
int16 java_lang_AbstractStringBuilder_appendNull(int32 *fp, int32 lv_0) {
	int32* sp;
	int32 i_val2;
	unsigned char* cobj;
	int32 i_val1;
	int8 b_val0;
	int8 msb_int8;
	int32 lsb_int32;
	int16 rval_m_12;
	int32 i_val0;
	int8 lsb_int8;
	int32 index_int32;
	int16 excep;
	unsigned short handler_pc;
	unsigned short pc;
	int32 lv_1 = 0;
	int32 lv_2 = 0;
	sp = &fp[5]; /* make room for local VM state on the stack */
	/* */
	i_val2 = lv_0;
	/* */
	cobj = (unsigned char *) (pointer) i_val2;
	i_val2 = ((struct _java_lang_StringBuilder_c *)HEAP_REF(cobj, unsigned char*)) -> count_f;
	/* */
	lv_1 = i_val2;
	/* */
	i_val2 = lv_0;
	/* */
	i_val1 = (int32) lv_1;
	/* */
	b_val0 = 4;
	/* */
	msb_int8 = b_val0;
	lsb_int32 = i_val1;
	lsb_int32 += msb_int8;
	i_val1 = lsb_int32;
	/* */
	rval_m_12 = java_lang_AbstractStringBuilder_ensureCapacityInternal(sp,
			i_val2, i_val1);
	if (rval_m_12 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_12;
	}
	/* */
	i_val2 = lv_0;
	/* */
	cobj = (unsigned char *) (pointer) i_val2;
	i_val2 = ((struct _java_lang_StringBuilder_c *)HEAP_REF(cobj, unsigned char*)) -> value_f;
	/* */
	lv_2 = i_val2;
	/* */
	i_val2 = lv_2;
	/* */
	i_val1 = (int32) lv_1;
	/* */
	lv_1 = (int32) lv_1 + 1;
	/* */
	i_val0 = (signed char) 110;
	/* */
	lsb_int8 = i_val0;
	index_int32 = i_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	if (cobj == 0) {
		pc = 31;
		goto throwNullPointer;
	}
	cobj = cobj + sizeof(Object) + 2 + (index_int32 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = lv_2;
	/* */
	i_val1 = (int32) lv_1;
	/* */
	lv_1 = (int32) lv_1 + 1;
	/* */
	i_val0 = (signed char) 117;
	/* */
	lsb_int8 = i_val0;
	index_int32 = i_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	if (cobj == 0) {
		pc = 39;
		goto throwNullPointer;
	}
	cobj = cobj + sizeof(Object) + 2 + (index_int32 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = lv_2;
	/* */
	i_val1 = (int32) lv_1;
	/* */
	lv_1 = (int32) lv_1 + 1;
	/* */
	i_val0 = (signed char) 108;
	/* */
	lsb_int8 = i_val0;
	index_int32 = i_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	if (cobj == 0) {
		pc = 47;
		goto throwNullPointer;
	}
	cobj = cobj + sizeof(Object) + 2 + (index_int32 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = lv_2;
	/* */
	i_val1 = (int32) lv_1;
	/* */
	lv_1 = (int32) lv_1 + 1;
	/* */
	i_val0 = (signed char) 108;
	/* */
	lsb_int8 = i_val0;
	index_int32 = i_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	if (cobj == 0) {
		pc = 55;
		goto throwNullPointer;
	}
	cobj = cobj + sizeof(Object) + 2 + (index_int32 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = lv_0;
	/* */
	i_val1 = (int32) lv_1;
	/* */
	lsb_int32 = i_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	((struct _java_lang_StringBuilder_c *)HEAP_REF(cobj, unsigned char*)) -> count_f = lsb_int32;
	/* */
	i_val2 = lv_0;
	/* */
	*((int32*) fp) = i_val2;
	return -1;
	throwNullPointer: initializeException(sp, JAVA_LANG_NULLPOINTEREXCEPTION,
			JAVA_LANG_NULLPOINTEREXCEPTION_INIT_);
	excep = JAVA_LANG_NULLPOINTEREXCEPTION;
	goto throwIt;
	throwIt: handler_pc = handleAthrow(&methods[10], excep, pc);
	sp++;
	switch (handler_pc) {
	case (unsigned short) -1: /* Not handled */
	default:
		fp[0] = *(sp - 1);
		return excep;
	}
}

/* Class: java.lang.AbstractStringBuilder */
/* Method: ensureCapacityInternal */
/* ensureCapacityInternal
 * param : int
 * return: void
 */
int16 java_lang_AbstractStringBuilder_ensureCapacityInternal(int32 *fp,
		int32 lv_0, int32 lv_1) {
	int32* sp;
	int32 i_val1;
	int32 i_val0;
	unsigned char* cobj;
	int16 excep;
	unsigned short handler_pc;
	unsigned short pc;
	int16 s_val0;
	int16 msb_int16;
	int32 lsb_int32;
	int16 rval_m_15;
	sp = &fp[4]; /* make room for local VM state on the stack */
	/* */
	i_val1 = (int32) lv_1;
	/* */
	i_val0 = lv_0;
	/* */
	cobj = (unsigned char *) (pointer) i_val0;
	i_val0 = ((struct _java_lang_StringBuilder_c *)HEAP_REF(cobj, unsigned char*)) -> value_f;
	/* */
	cobj = (unsigned char *) (pointer) i_val0;
	if (cobj == 0) {
		pc = 8;
		goto throwNullPointer;
	}
	s_val0 = *(uint16*) ((HEAP_REF(cobj, unsigned char*)) +sizeof(Object));
	/* */
	msb_int16 = s_val0;
	lsb_int32 = i_val1;
	lsb_int32 -= msb_int16;
	i_val1 = lsb_int32;
	/* */
	if (i_val1 <= 0) {
		goto L19;
	}
	/* */
	i_val1 = lv_0;
	/* */
	i_val0 = (int32) lv_1;
	/* */
	rval_m_15 = java_lang_AbstractStringBuilder_expandCapacity(sp, i_val1,
			i_val0);
	if (rval_m_15 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_15;
	}
	/* */
	L19: return -1;
	throwNullPointer: initializeException(sp, JAVA_LANG_NULLPOINTEREXCEPTION,
			JAVA_LANG_NULLPOINTEREXCEPTION_INIT_);
	excep = JAVA_LANG_NULLPOINTEREXCEPTION;
	goto throwIt;
	throwIt: handler_pc = handleAthrow(&methods[11], excep, pc);
	sp++;
	switch (handler_pc) {
	case (unsigned short) -1: /* Not handled */
	default:
		fp[0] = *(sp - 1);
		return excep;
	}
}

/* Class: java.lang.AbstractStringBuilder */
/* Method: expandCapacity */
/* expandCapacity
 * param : int
 * return: void
 */
int16 java_lang_AbstractStringBuilder_expandCapacity(int32 *fp, int32 lv_0,
		int32 lv_1) {
	int32* sp;
	int32 i_val2;
	unsigned char* cobj;
	int16 excep;
	unsigned short handler_pc;
	unsigned short pc;
	int16 s_val2;
	int8 b_val1;
	int32 res_int32;
	int16 lsb_int16;
	int8 msb_int8;
	int32 lsb_int32;
	int32 i_val1;
	int32 msb_int32;
	int16 rval_m_33;
	Object* ex_ception;
	int32 i_val0;
	int16 rval_m_51;
	int32 lv_2 = 0;
	sp = &fp[5]; /* make room for local VM state on the stack */
	/* */
	i_val2 = lv_0;
	/* */
	cobj = (unsigned char *) (pointer) i_val2;
	i_val2 = ((struct _java_lang_StringBuilder_c *)HEAP_REF(cobj, unsigned char*)) -> value_f;
	/* */
	cobj = (unsigned char *) (pointer) i_val2;
	if (cobj == 0) {
		pc = 7;
		goto throwNullPointer;
	}
	s_val2 = *(uint16*) ((HEAP_REF(cobj, unsigned char*)) +sizeof(Object));
	/* */
	b_val1 = 2;
	/* */
	res_int32 = b_val1;
	lsb_int16 = s_val2;
#if defined(GLIBC_DOES_NOT_SUPPORT_MUL)
	res_int32 = imul(res_int32, lsb_int16);
#else
	res_int32 = res_int32 * lsb_int16;
#endif
	i_val2 = res_int32;
	/* */
	b_val1 = 2;
	/* */
	msb_int8 = b_val1;
	lsb_int32 = i_val2;
	lsb_int32 += msb_int8;
	i_val2 = lsb_int32;
	/* */
	lv_2 = i_val2;
	/* */
	i_val2 = (int32) lv_2;
	/* */
	i_val1 = (int32) lv_1;
	/* */
	msb_int32 = i_val1;
	lsb_int32 = i_val2;
	lsb_int32 -= msb_int32;
	i_val2 = lsb_int32;
	/* */
	if (i_val2 >= 0) {
		goto L21;
	}
	/* */
	i_val2 = (int32) lv_1;
	/* */
	lv_2 = i_val2;
	/* */
	L21: i_val2 = (int32) lv_2;
	/* */
	if (i_val2 >= 0) {
		goto L42;
	}
	/* */
	i_val2 = (int32) lv_1;
	/* */
	if (i_val2 >= 0) {
		goto L38;
	}
	/* */
	if (handleNewClassIndex(sp, 23) == 0) {
		fp[0] = *sp;
		return getClassIndex((Object*) (pointer) * sp);
	}
	sp++;
	/* */
	i_val2 = *(sp - 1);
	/* */
	*sp = (int32) i_val2;
	sp++;
	sp -= 1;
	rval_m_33 = enterMethodInterpreter(JAVA_LANG_OUTOFMEMORYERROR_INIT_, sp);
	if (rval_m_33 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_33;
	}
	/* */
	ex_ception = (Object*) (pointer) * (sp - 1);
	excep = getClassIndex(ex_ception);
	pc = 37;
	sp--;
	goto throwIt;
	/* */
	L38: i_val2 = 2147483647;
	/* */
	lv_2 = i_val2;
	/* */
	L42: i_val2 = lv_0;
	/* */
	i_val1 = lv_0;
	/* */
	cobj = (unsigned char *) (pointer) i_val1;
	i_val1 = ((struct _java_lang_StringBuilder_c *)HEAP_REF(cobj, unsigned char*)) -> value_f;
	/* */
	i_val0 = (int32) lv_2;
	/* */
	*sp = (int32) i_val2;
	sp++;
	*sp = (int32) i_val1;
	sp++;
	*sp = (int32) i_val0;
	sp++;
	sp -= 2;
	rval_m_51 = java_util_Arrays_copyOf(sp);
	if (rval_m_51 == -1) {
		sp += 1;
	} else {
		fp[0] = *sp;
		return rval_m_51;
	}
	/* */
	sp--;
	lsb_int32 = (int32)(*sp);
	sp--;
	cobj = (unsigned char *) (pointer) * sp;
	((struct _java_lang_StringBuilder_c *)HEAP_REF(cobj, unsigned char*)) -> value_f = lsb_int32;
	/* */
	return -1;
	throwNullPointer: initializeException(sp, JAVA_LANG_NULLPOINTEREXCEPTION,
			JAVA_LANG_NULLPOINTEREXCEPTION_INIT_);
	excep = JAVA_LANG_NULLPOINTEREXCEPTION;
	goto throwIt;
	throwIt: handler_pc = handleAthrow(&methods[12], excep, pc);
	sp++;
	switch (handler_pc) {
	case (unsigned short) -1: /* Not handled */
	default:
		fp[0] = *(sp - 1);
		return excep;
	}
}

/* Class: java.lang.ArithmeticException */
/* Method: <init> */
RANGE const unsigned char java_lang_ArithmeticException_init_[8] PROGMEM = {
	0x2A,0xB7,0x00,0x2A,0x01,0xB1,0x01,0x01
};

/* Class: java.lang.ArrayIndexOutOfBoundsException */
/* Method: <init> */
/* <init>
 * param : 
 * return: void
 */
int16 java_lang_ArrayIndexOutOfBoundsException_init_(int32 *fp) {
	int32* sp;
	int32 i_val0;
	int16 rval_m_1;
	int32 lv_0 = 0;
	lv_0 = (int32)(*(fp + 0));
	sp = &fp[3]; /* make room for local VM state on the stack */
	/* */
	i_val0 = lv_0;
	/* */
	*sp = (int32) i_val0;
	sp++;
	sp -= 1;
	rval_m_1 = java_lang_IndexOutOfBoundsException_init_(sp);
	if (rval_m_1 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_1;
	}
	/* */
	return -1;
}

/* Class: java.lang.AssertionError */
/* Method: <init> */
/* <init>
 * param : 
 * return: void
 */
int16 java_lang_AssertionError_init_(int32 *fp) {
	int32* sp;
	int32 i_val0;
	int16 rval_m_1;
	int32 lv_0 = 0;
	lv_0 = (int32)(*(fp + 0));
	sp = &fp[3]; /* make room for local VM state on the stack */
	/* */
	i_val0 = lv_0;
	/* */
	*sp = (int32) i_val0;
	sp++;
	sp -= 1;
	rval_m_1 = java_lang_Error_init_(sp);
	if (rval_m_1 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_1;
	}
	/* */
	return -1;
}

/* Class: java.lang.Class */
/* Method: <clinit> */
/* Class: java.lang.Class */
/* Method: desiredAssertionStatus */
/* Class: java.lang.Class */
/* Method: getPrimitiveClass */
/* Class: java.lang.Double */
/* Method: <clinit> */
/* <clinit>
 * param : 
 * return: void
 */
int16 java_lang_Double_clinit_(int32 *fp) {
	int32* sp;
	const ConstantInfo* constant_;
	int32 i_val0;
	int16 rval_m_3;
	int32 lsb_int32;
	sp = &fp[3]; /* make room for local VM state on the stack */
	/* */
	constant_ = &constants[3];
#ifndef PRE_INITIALIZE_CONSTANTS
	initializeStringConstant(constant_, sp);
#endif
	i_val0 = (int32) (pointer) stringConstants[constant_->value >> 16];
	/* */
	*sp = (int32) i_val0;
	sp++;
	sp -= 1;
	rval_m_3 = n_java_lang_Class_getPrimitiveClass(sp);
	if (rval_m_3 == -1) {
		sp += 1;
	} else {
		fp[0] = *sp;
		return rval_m_3;
	}
	/* */
	sp--;
	lsb_int32 = (int32)(*sp);
	((struct _staticClassFields_c *) classData)->TYPE_f__f = lsb_int32;
	/* */
	return -1;
}

/* Class: java.lang.Double */
/* Method: doubleToRawLongBits */
/* Class: java.lang.Double */
/* Method: longBitsToDouble */
/* Class: java.lang.Error */
/* Method: <init> */
/* <init>
 * param : 
 * return: void
 */
int16 java_lang_Error_init_(int32 *fp) {
	int32* sp;
	int32 i_val0;
	int16 rval_m_1;
	int32 lv_0 = 0;
	lv_0 = (int32)(*(fp + 0));
	sp = &fp[3]; /* make room for local VM state on the stack */
	/* */
	i_val0 = lv_0;
	/* */
	rval_m_1 = java_lang_Throwable_init_(sp, i_val0);
	if (rval_m_1 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_1;
	}
	/* */
	return -1;
}

/* Class: java.lang.Exception */
/* Method: <init> */
/* <init>
 * param : 
 * return: void
 */
int16 java_lang_Exception_init_(int32 *fp, int32 lv_0) {
	int32* sp;
	int32 i_val0;
	int16 rval_m_1;
	sp = &fp[3]; /* make room for local VM state on the stack */
	/* */
	i_val0 = lv_0;
	/* */
	rval_m_1 = java_lang_Throwable_init_(sp, i_val0);
	if (rval_m_1 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_1;
	}
	/* */
	return -1;
}

/* Class: java.lang.Exception */
/* Method: <init> */
/* <init>
 * param : java.lang.String
 * return: void
 */
int16 java_lang_Exception_init__(int32 *fp, int32 lv_0, int32 lv_1) {
	int32* sp;
	int32 i_val1;
	int32 i_val0;
	int16 rval_m_2;
	sp = &fp[4]; /* make room for local VM state on the stack */
	/* */
	i_val1 = lv_0;
	/* */
	i_val0 = lv_1;
	/* */
	rval_m_2 = java_lang_Throwable_init__(sp, i_val1, i_val0);
	if (rval_m_2 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_2;
	}
	/* */
	return -1;
}

/* Class: java.lang.Float */
/* Method: <clinit> */
/* <clinit>
 * param : 
 * return: void
 */
int16 java_lang_Float_clinit_(int32 *fp) {
	int32* sp;
	const ConstantInfo* constant_;
	int32 i_val0;
	int16 rval_m_3;
	int32 lsb_int32;
	sp = &fp[3]; /* make room for local VM state on the stack */
	/* */
	constant_ = &constants[4];
#ifndef PRE_INITIALIZE_CONSTANTS
	initializeStringConstant(constant_, sp);
#endif
	i_val0 = (int32) (pointer) stringConstants[constant_->value >> 16];
	/* */
	*sp = (int32) i_val0;
	sp++;
	sp -= 1;
	rval_m_3 = n_java_lang_Class_getPrimitiveClass(sp);
	if (rval_m_3 == -1) {
		sp += 1;
	} else {
		fp[0] = *sp;
		return rval_m_3;
	}
	/* */
	sp--;
	lsb_int32 = (int32)(*sp);
	((struct _staticClassFields_c *) classData)->TYPE_f = lsb_int32;
	/* */
	return -1;
}

/* Class: java.lang.Float */
/* Method: floatToRawIntBits */
/* Class: java.lang.IllegalArgumentException */
/* Method: <init> */
/* <init>
 * param : java.lang.String
 * return: void
 */
int16 java_lang_IllegalArgumentException_init_(int32 *fp, int32 lv_0,
		int32 lv_1) {
	int32* sp;
	int32 i_val1;
	int32 i_val0;
	int16 rval_m_2;
	sp = &fp[4]; /* make room for local VM state on the stack */
	/* */
	i_val1 = lv_0;
	/* */
	i_val0 = lv_1;
	/* */
	rval_m_2 = java_lang_RuntimeException_init__(sp, i_val1, i_val0);
	if (rval_m_2 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_2;
	}
	/* */
	return -1;
}

/* Class: java.lang.IllegalMonitorStateException */
/* Method: <init> */
/* <init>
 * param : 
 * return: void
 */
int16 java_lang_IllegalMonitorStateException_init_(int32 *fp) {
	int32* sp;
	int32 i_val0;
	int16 rval_m_1;
	int32 lv_0 = 0;
	lv_0 = (int32)(*(fp + 0));
	sp = &fp[3]; /* make room for local VM state on the stack */
	/* */
	i_val0 = lv_0;
	/* */
	*sp = (int32) i_val0;
	sp++;
	sp -= 1;
	rval_m_1 = java_lang_RuntimeException_init_(sp);
	if (rval_m_1 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_1;
	}
	/* */
	return -1;
}

/* Class: java.lang.IndexOutOfBoundsException */
/* Method: <init> */
/* <init>
 * param : 
 * return: void
 */
int16 java_lang_IndexOutOfBoundsException_init_(int32 *fp) {
	int32* sp;
	int32 i_val0;
	int16 rval_m_1;
	int32 lv_0 = 0;
	lv_0 = (int32)(*(fp + 0));
	sp = &fp[3]; /* make room for local VM state on the stack */
	/* */
	i_val0 = lv_0;
	/* */
	*sp = (int32) i_val0;
	sp++;
	sp -= 1;
	rval_m_1 = java_lang_RuntimeException_init_(sp);
	if (rval_m_1 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_1;
	}
	/* */
	return -1;
}

/* Class: java.lang.IndexOutOfBoundsException */
/* Method: <init> */
/* <init>
 * param : java.lang.String
 * return: void
 */
int16 java_lang_IndexOutOfBoundsException_init__(int32 *fp, int32 lv_0,
		int32 lv_1) {
	int32* sp;
	int32 i_val1;
	int32 i_val0;
	int16 rval_m_2;
	sp = &fp[4]; /* make room for local VM state on the stack */
	/* */
	i_val1 = lv_0;
	/* */
	i_val0 = lv_1;
	/* */
	rval_m_2 = java_lang_RuntimeException_init__(sp, i_val1, i_val0);
	if (rval_m_2 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_2;
	}
	/* */
	return -1;
}

/* Class: java.lang.Integer */
/* Method: <clinit> */
/* <clinit>
 * param : 
 * return: void
 */
int16 java_lang_Integer_clinit_(int32 *fp) {
	int32* sp;
	const ConstantInfo* constant_;
	int32 i_val3;
	int16 rval_m_3;
	int32 lsb_int32;
	int16 s_val3;
	Object* narray;
	uint16 count;
	unsigned short pc;
	int16 excep;
	unsigned short handler_pc;
	int32 i_val2;
	int8 b_val1;
	int32 i_val0;
	int8 lsb_int8;
	int8 index_int8;
	unsigned char* cobj;
	sp = &fp[3]; /* make room for local VM state on the stack */
	/* */
	constant_ = &constants[5];
#ifndef PRE_INITIALIZE_CONSTANTS
	initializeStringConstant(constant_, sp);
#endif
	i_val3 = (int32) (pointer) stringConstants[constant_->value >> 16];
	/* */
	*sp = (int32) i_val3;
	sp++;
	sp -= 1;
	rval_m_3 = n_java_lang_Class_getPrimitiveClass(sp);
	if (rval_m_3 == -1) {
		sp += 1;
	} else {
		fp[0] = *sp;
		return rval_m_3;
	}
	/* */
	sp--;
	lsb_int32 = (int32)(*sp);
	((struct _staticClassFields_c *) classData)->TYPE_f__f__f = lsb_int32;
	/* */
	s_val3 = (signed char) 36;
	/* */
	count = s_val3;
	narray = (Object*) createArray(1, (uint16) count FLASHARG((0)));
	if (narray == 0) {
		pc = 15;
		goto throwOutOfMemory;
	}
	i_val3 = (int32) (pointer) narray;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = 0;
	/* */
	i_val0 = (signed char) 48;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = 1;
	/* */
	i_val0 = (signed char) 49;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = 2;
	/* */
	i_val0 = (signed char) 50;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = 3;
	/* */
	i_val0 = (signed char) 51;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = 4;
	/* */
	i_val0 = (signed char) 52;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = 5;
	/* */
	i_val0 = (signed char) 53;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 6;
	/* */
	i_val0 = (signed char) 54;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 7;
	/* */
	i_val0 = (signed char) 55;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 8;
	/* */
	i_val0 = (signed char) 56;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 9;
	/* */
	i_val0 = (signed char) 57;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 10;
	/* */
	i_val0 = (signed char) 97;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 11;
	/* */
	i_val0 = (signed char) 98;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 12;
	/* */
	i_val0 = (signed char) 99;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 13;
	/* */
	i_val0 = (signed char) 100;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 14;
	/* */
	i_val0 = (signed char) 101;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 15;
	/* */
	i_val0 = (signed char) 102;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 16;
	/* */
	i_val0 = (signed char) 103;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 17;
	/* */
	i_val0 = (signed char) 104;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 18;
	/* */
	i_val0 = (signed char) 105;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 19;
	/* */
	i_val0 = (signed char) 106;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 20;
	/* */
	i_val0 = (signed char) 107;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 21;
	/* */
	i_val0 = (signed char) 108;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 22;
	/* */
	i_val0 = (signed char) 109;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 23;
	/* */
	i_val0 = (signed char) 110;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 24;
	/* */
	i_val0 = (signed char) 111;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 25;
	/* */
	i_val0 = (signed char) 112;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 26;
	/* */
	i_val0 = (signed char) 113;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 27;
	/* */
	i_val0 = (signed char) 114;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 28;
	/* */
	i_val0 = (signed char) 115;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 29;
	/* */
	i_val0 = (signed char) 116;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 30;
	/* */
	i_val0 = (signed char) 117;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 31;
	/* */
	i_val0 = (signed char) 118;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 32;
	/* */
	i_val0 = (signed char) 119;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 33;
	/* */
	i_val0 = (signed char) 120;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 34;
	/* */
	i_val0 = (signed char) 121;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 35;
	/* */
	i_val0 = (signed char) 122;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	lsb_int32 = i_val3;
	((struct _staticClassFields_c *) classData)->digits_f = lsb_int32;
	/* */
	s_val3 = (signed char) 100;
	/* */
	count = s_val3;
	narray = (Object*) createArray(1, (uint16) count FLASHARG((0)));
	if (narray == 0) {
		pc = 236;
		goto throwOutOfMemory;
	}
	i_val3 = (int32) (pointer) narray;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = 0;
	/* */
	i_val0 = (signed char) 48;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = 1;
	/* */
	i_val0 = (signed char) 48;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = 2;
	/* */
	i_val0 = (signed char) 48;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = 3;
	/* */
	i_val0 = (signed char) 48;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = 4;
	/* */
	i_val0 = (signed char) 48;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = 5;
	/* */
	i_val0 = (signed char) 48;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 6;
	/* */
	i_val0 = (signed char) 48;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 7;
	/* */
	i_val0 = (signed char) 48;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 8;
	/* */
	i_val0 = (signed char) 48;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 9;
	/* */
	i_val0 = (signed char) 48;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 10;
	/* */
	i_val0 = (signed char) 49;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 11;
	/* */
	i_val0 = (signed char) 49;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 12;
	/* */
	i_val0 = (signed char) 49;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 13;
	/* */
	i_val0 = (signed char) 49;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 14;
	/* */
	i_val0 = (signed char) 49;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 15;
	/* */
	i_val0 = (signed char) 49;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 16;
	/* */
	i_val0 = (signed char) 49;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 17;
	/* */
	i_val0 = (signed char) 49;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 18;
	/* */
	i_val0 = (signed char) 49;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 19;
	/* */
	i_val0 = (signed char) 49;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 20;
	/* */
	i_val0 = (signed char) 50;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 21;
	/* */
	i_val0 = (signed char) 50;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 22;
	/* */
	i_val0 = (signed char) 50;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 23;
	/* */
	i_val0 = (signed char) 50;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 24;
	/* */
	i_val0 = (signed char) 50;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 25;
	/* */
	i_val0 = (signed char) 50;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 26;
	/* */
	i_val0 = (signed char) 50;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 27;
	/* */
	i_val0 = (signed char) 50;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 28;
	/* */
	i_val0 = (signed char) 50;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 29;
	/* */
	i_val0 = (signed char) 50;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 30;
	/* */
	i_val0 = (signed char) 51;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 31;
	/* */
	i_val0 = (signed char) 51;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 32;
	/* */
	i_val0 = (signed char) 51;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 33;
	/* */
	i_val0 = (signed char) 51;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 34;
	/* */
	i_val0 = (signed char) 51;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 35;
	/* */
	i_val0 = (signed char) 51;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 36;
	/* */
	i_val0 = (signed char) 51;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 37;
	/* */
	i_val0 = (signed char) 51;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 38;
	/* */
	i_val0 = (signed char) 51;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 39;
	/* */
	i_val0 = (signed char) 51;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 40;
	/* */
	i_val0 = (signed char) 52;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 41;
	/* */
	i_val0 = (signed char) 52;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 42;
	/* */
	i_val0 = (signed char) 52;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 43;
	/* */
	i_val0 = (signed char) 52;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 44;
	/* */
	i_val0 = (signed char) 52;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 45;
	/* */
	i_val0 = (signed char) 52;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 46;
	/* */
	i_val0 = (signed char) 52;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 47;
	/* */
	i_val0 = (signed char) 52;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 48;
	/* */
	i_val0 = (signed char) 52;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 49;
	/* */
	i_val0 = (signed char) 52;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 50;
	/* */
	i_val0 = (signed char) 53;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 51;
	/* */
	i_val0 = (signed char) 53;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 52;
	/* */
	i_val0 = (signed char) 53;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 53;
	/* */
	i_val0 = (signed char) 53;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 54;
	/* */
	i_val0 = (signed char) 53;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 55;
	/* */
	i_val0 = (signed char) 53;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 56;
	/* */
	i_val0 = (signed char) 53;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 57;
	/* */
	i_val0 = (signed char) 53;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 58;
	/* */
	i_val0 = (signed char) 53;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 59;
	/* */
	i_val0 = (signed char) 53;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 60;
	/* */
	i_val0 = (signed char) 54;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 61;
	/* */
	i_val0 = (signed char) 54;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 62;
	/* */
	i_val0 = (signed char) 54;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 63;
	/* */
	i_val0 = (signed char) 54;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 64;
	/* */
	i_val0 = (signed char) 54;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 65;
	/* */
	i_val0 = (signed char) 54;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 66;
	/* */
	i_val0 = (signed char) 54;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 67;
	/* */
	i_val0 = (signed char) 54;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 68;
	/* */
	i_val0 = (signed char) 54;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 69;
	/* */
	i_val0 = (signed char) 54;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 70;
	/* */
	i_val0 = (signed char) 55;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 71;
	/* */
	i_val0 = (signed char) 55;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 72;
	/* */
	i_val0 = (signed char) 55;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 73;
	/* */
	i_val0 = (signed char) 55;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 74;
	/* */
	i_val0 = (signed char) 55;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 75;
	/* */
	i_val0 = (signed char) 55;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 76;
	/* */
	i_val0 = (signed char) 55;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 77;
	/* */
	i_val0 = (signed char) 55;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 78;
	/* */
	i_val0 = (signed char) 55;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 79;
	/* */
	i_val0 = (signed char) 55;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 80;
	/* */
	i_val0 = (signed char) 56;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 81;
	/* */
	i_val0 = (signed char) 56;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 82;
	/* */
	i_val0 = (signed char) 56;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 83;
	/* */
	i_val0 = (signed char) 56;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 84;
	/* */
	i_val0 = (signed char) 56;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 85;
	/* */
	i_val0 = (signed char) 56;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 86;
	/* */
	i_val0 = (signed char) 56;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 87;
	/* */
	i_val0 = (signed char) 56;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 88;
	/* */
	i_val0 = (signed char) 56;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 89;
	/* */
	i_val0 = (signed char) 56;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 90;
	/* */
	i_val0 = (signed char) 57;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 91;
	/* */
	i_val0 = (signed char) 57;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 92;
	/* */
	i_val0 = (signed char) 57;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 93;
	/* */
	i_val0 = (signed char) 57;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 94;
	/* */
	i_val0 = (signed char) 57;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 95;
	/* */
	i_val0 = (signed char) 57;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 96;
	/* */
	i_val0 = (signed char) 57;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 97;
	/* */
	i_val0 = (signed char) 57;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 98;
	/* */
	i_val0 = (signed char) 57;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 99;
	/* */
	i_val0 = (signed char) 57;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	lsb_int32 = i_val3;
	((struct _staticClassFields_c *) classData)->DigitTens_f = lsb_int32;
	/* */
	s_val3 = (signed char) 100;
	/* */
	count = s_val3;
	narray = (Object*) createArray(1, (uint16) count FLASHARG((0)));
	if (narray == 0) {
		pc = 841;
		goto throwOutOfMemory;
	}
	i_val3 = (int32) (pointer) narray;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = 0;
	/* */
	i_val0 = (signed char) 48;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = 1;
	/* */
	i_val0 = (signed char) 49;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = 2;
	/* */
	i_val0 = (signed char) 50;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = 3;
	/* */
	i_val0 = (signed char) 51;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = 4;
	/* */
	i_val0 = (signed char) 52;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = 5;
	/* */
	i_val0 = (signed char) 53;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 6;
	/* */
	i_val0 = (signed char) 54;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 7;
	/* */
	i_val0 = (signed char) 55;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 8;
	/* */
	i_val0 = (signed char) 56;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 9;
	/* */
	i_val0 = (signed char) 57;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 10;
	/* */
	i_val0 = (signed char) 48;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 11;
	/* */
	i_val0 = (signed char) 49;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 12;
	/* */
	i_val0 = (signed char) 50;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 13;
	/* */
	i_val0 = (signed char) 51;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 14;
	/* */
	i_val0 = (signed char) 52;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 15;
	/* */
	i_val0 = (signed char) 53;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 16;
	/* */
	i_val0 = (signed char) 54;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 17;
	/* */
	i_val0 = (signed char) 55;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 18;
	/* */
	i_val0 = (signed char) 56;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 19;
	/* */
	i_val0 = (signed char) 57;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 20;
	/* */
	i_val0 = (signed char) 48;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 21;
	/* */
	i_val0 = (signed char) 49;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 22;
	/* */
	i_val0 = (signed char) 50;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 23;
	/* */
	i_val0 = (signed char) 51;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 24;
	/* */
	i_val0 = (signed char) 52;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 25;
	/* */
	i_val0 = (signed char) 53;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 26;
	/* */
	i_val0 = (signed char) 54;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 27;
	/* */
	i_val0 = (signed char) 55;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 28;
	/* */
	i_val0 = (signed char) 56;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 29;
	/* */
	i_val0 = (signed char) 57;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 30;
	/* */
	i_val0 = (signed char) 48;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 31;
	/* */
	i_val0 = (signed char) 49;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 32;
	/* */
	i_val0 = (signed char) 50;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 33;
	/* */
	i_val0 = (signed char) 51;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 34;
	/* */
	i_val0 = (signed char) 52;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 35;
	/* */
	i_val0 = (signed char) 53;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 36;
	/* */
	i_val0 = (signed char) 54;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 37;
	/* */
	i_val0 = (signed char) 55;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 38;
	/* */
	i_val0 = (signed char) 56;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 39;
	/* */
	i_val0 = (signed char) 57;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 40;
	/* */
	i_val0 = (signed char) 48;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 41;
	/* */
	i_val0 = (signed char) 49;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 42;
	/* */
	i_val0 = (signed char) 50;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 43;
	/* */
	i_val0 = (signed char) 51;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 44;
	/* */
	i_val0 = (signed char) 52;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 45;
	/* */
	i_val0 = (signed char) 53;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 46;
	/* */
	i_val0 = (signed char) 54;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 47;
	/* */
	i_val0 = (signed char) 55;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 48;
	/* */
	i_val0 = (signed char) 56;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 49;
	/* */
	i_val0 = (signed char) 57;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 50;
	/* */
	i_val0 = (signed char) 48;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 51;
	/* */
	i_val0 = (signed char) 49;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 52;
	/* */
	i_val0 = (signed char) 50;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 53;
	/* */
	i_val0 = (signed char) 51;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 54;
	/* */
	i_val0 = (signed char) 52;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 55;
	/* */
	i_val0 = (signed char) 53;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 56;
	/* */
	i_val0 = (signed char) 54;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 57;
	/* */
	i_val0 = (signed char) 55;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 58;
	/* */
	i_val0 = (signed char) 56;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 59;
	/* */
	i_val0 = (signed char) 57;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 60;
	/* */
	i_val0 = (signed char) 48;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 61;
	/* */
	i_val0 = (signed char) 49;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 62;
	/* */
	i_val0 = (signed char) 50;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 63;
	/* */
	i_val0 = (signed char) 51;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 64;
	/* */
	i_val0 = (signed char) 52;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 65;
	/* */
	i_val0 = (signed char) 53;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 66;
	/* */
	i_val0 = (signed char) 54;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 67;
	/* */
	i_val0 = (signed char) 55;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 68;
	/* */
	i_val0 = (signed char) 56;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 69;
	/* */
	i_val0 = (signed char) 57;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 70;
	/* */
	i_val0 = (signed char) 48;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 71;
	/* */
	i_val0 = (signed char) 49;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 72;
	/* */
	i_val0 = (signed char) 50;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 73;
	/* */
	i_val0 = (signed char) 51;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 74;
	/* */
	i_val0 = (signed char) 52;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 75;
	/* */
	i_val0 = (signed char) 53;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 76;
	/* */
	i_val0 = (signed char) 54;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 77;
	/* */
	i_val0 = (signed char) 55;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 78;
	/* */
	i_val0 = (signed char) 56;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 79;
	/* */
	i_val0 = (signed char) 57;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 80;
	/* */
	i_val0 = (signed char) 48;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 81;
	/* */
	i_val0 = (signed char) 49;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 82;
	/* */
	i_val0 = (signed char) 50;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 83;
	/* */
	i_val0 = (signed char) 51;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 84;
	/* */
	i_val0 = (signed char) 52;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 85;
	/* */
	i_val0 = (signed char) 53;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 86;
	/* */
	i_val0 = (signed char) 54;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 87;
	/* */
	i_val0 = (signed char) 55;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 88;
	/* */
	i_val0 = (signed char) 56;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 89;
	/* */
	i_val0 = (signed char) 57;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 90;
	/* */
	i_val0 = (signed char) 48;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 91;
	/* */
	i_val0 = (signed char) 49;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 92;
	/* */
	i_val0 = (signed char) 50;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 93;
	/* */
	i_val0 = (signed char) 51;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 94;
	/* */
	i_val0 = (signed char) 52;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 95;
	/* */
	i_val0 = (signed char) 53;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 96;
	/* */
	i_val0 = (signed char) 54;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 97;
	/* */
	i_val0 = (signed char) 55;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 98;
	/* */
	i_val0 = (signed char) 56;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 99;
	/* */
	i_val0 = (signed char) 57;
	/* */
	lsb_int8 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	lsb_int32 = i_val3;
	((struct _staticClassFields_c *) classData)->DigitOnes_f = lsb_int32;
	/* */
	s_val3 = (signed char) 10;
	/* */
	count = s_val3;
	narray = (Object*) createArray(2, (uint16) count FLASHARG((0)));
	if (narray == 0) {
		pc = 1446;
		goto throwOutOfMemory;
	}
	i_val3 = (int32) (pointer) narray;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = 0;
	/* */
	i_val0 = (signed char) 9;
	/* */
	lsb_int32 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int32;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = 1;
	/* */
	i_val0 = (signed char) 99;
	/* */
	lsb_int32 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int32;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = 2;
	/* */
	i_val0 = 999;
	/* */
	lsb_int32 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int32;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = 3;
	/* */
	i_val0 = 9999;
	/* */
	lsb_int32 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int32;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = 4;
	/* */
	i_val0 = 99999;
	/* */
	lsb_int32 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int32;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = 5;
	/* */
	i_val0 = 999999;
	/* */
	lsb_int32 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int32;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 6;
	/* */
	i_val0 = 9999999;
	/* */
	lsb_int32 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int32;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 7;
	/* */
	i_val0 = 99999999;
	/* */
	lsb_int32 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int32;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 8;
	/* */
	i_val0 = 999999999;
	/* */
	lsb_int32 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int32;
	/* */
	i_val2 = i_val3;
	/* */
	b_val1 = (signed char) 9;
	/* */
	i_val0 = 2147483647;
	/* */
	lsb_int32 = i_val0;
	index_int8 = b_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	cobj = cobj + sizeof(Object) + 2 + (index_int8 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int32;
	/* */
	lsb_int32 = i_val3;
	((struct _staticClassFields_c *) classData)->sizeTable_f = lsb_int32;
	/* */
	return -1;
	throwOutOfMemory: initializeException(sp, JAVA_LANG_OUTOFMEMORYERROR,
			JAVA_LANG_OUTOFMEMORYERROR_INIT_);
	excep = JAVA_LANG_OUTOFMEMORYERROR;
	goto throwIt;
	throwIt: handler_pc = handleAthrow(&methods[31], excep, pc);
	sp++;
	switch (handler_pc) {
	case (unsigned short) -1: /* Not handled */
	default:
		fp[0] = *(sp - 1);
		return excep;
	}
}

/* Class: java.lang.Integer */
/* Method: getChars */
/* getChars
 * param : int, int, char[]
 * return: void
 */
int16 java_lang_Integer_getChars(int32 *fp, int32 lv_0, int32 lv_1,
		int32 lv_2) {
	int32* sp;
	int32 i_val3;
	int32 res_int32;
	int32 i_val2;
	int8 b_val2;
	int32 lsb_int32;
	int16 excep;
	unsigned short handler_pc;
	unsigned short pc;
	int8 b_val1;
	unsigned char shiftv;
	uint32 v_alue;
	int32 i_val1;
	int8 b_val0;
	int32 msb_int32;
	int32 i_val0;
	int32 index_int32;
	unsigned char* cobj;
	int8 lsb_int8;
	unsigned char value2_uc;
	uint32 value1_uint32;
	uint32 result_uint32;
	int32 lv_3 = 0;
	int32 lv_4 = 0;
	int32 lv_5 = 0;
	int32 lv_6 = 0;
	sp = &fp[9]; /* make room for local VM state on the stack */
	/* */
	i_val3 = (int32) lv_1;
	/* */
	lv_5 = i_val3;
	/* */
	i_val3 = 0;
	/* */
	lv_6 = i_val3;
	/* */
	i_val3 = (int32) lv_0;
	/* */
	if (i_val3 >= 0) {
		goto L17;
	}
	/* */
	i_val3 = (signed char) 45;
	/* */
	lv_6 = i_val3;
	/* */
	i_val3 = (int32) lv_0;
	/* */
	res_int32 = i_val3;
	res_int32 = -res_int32;
	i_val3 = res_int32;
	/* */
	lv_0 = i_val3;
	/* */
	L17: i_val3 = (int32) lv_0;
	/* */
	i_val2 = 65536;
	/* */
	if (i_val3 < i_val2) {
		goto L82;
	}
	/* */
	i_val3 = (int32) lv_0;
	/* */
	b_val2 = (signed char) 100;
	/* */
	res_int32 = b_val2;
	lsb_int32 = i_val3;
	if (res_int32 == 0) {
		pc = 27;
		goto throwArithmeticException;
	}
	res_int32 = idiv(lsb_int32, res_int32);
	i_val3 = res_int32;
	/* */
	lv_3 = i_val3;
	/* */
	i_val3 = (int32) lv_0;
	/* */
	i_val2 = (int32) lv_3;
	/* */
	b_val1 = (signed char) 6;
	/* */
	shiftv = b_val1;
	v_alue = i_val2;
	v_alue = v_alue << shiftv;
	i_val2 = v_alue;
	/* */
	i_val1 = (int32) lv_3;
	/* */
	b_val0 = 5;
	/* */
	shiftv = b_val0;
	v_alue = i_val1;
	v_alue = v_alue << shiftv;
	i_val1 = v_alue;
	/* */
	msb_int32 = i_val1;
	lsb_int32 = i_val2;
	lsb_int32 += msb_int32;
	i_val2 = lsb_int32;
	/* */
	i_val1 = (int32) lv_3;
	/* */
	b_val0 = 2;
	/* */
	shiftv = b_val0;
	v_alue = i_val1;
	v_alue = v_alue << shiftv;
	i_val1 = v_alue;
	/* */
	msb_int32 = i_val1;
	lsb_int32 = i_val2;
	lsb_int32 += msb_int32;
	i_val2 = lsb_int32;
	/* */
	msb_int32 = i_val2;
	lsb_int32 = i_val3;
	lsb_int32 -= msb_int32;
	i_val3 = lsb_int32;
	/* */
	lv_4 = i_val3;
	/* */
	i_val3 = (int32) lv_3;
	/* */
	lv_0 = i_val3;
	/* */
	i_val3 = lv_2;
	/* */
	lv_5 = (int32) lv_5 + -1;
	/* */
	i_val2 = (int32) lv_5;
	/* */
	i_val1 = ((struct _staticClassFields_c *) classData)->DigitOnes_f;
	/* */
	i_val0 = (int32) lv_4;
	/* */
	index_int32 = i_val0;
	cobj = (unsigned char *) (pointer) i_val1;
	if (cobj == 0) {
		pc = 61;
		goto throwNullPointer;
	}
	cobj = cobj + sizeof(Object) + 2 + (index_int32 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	i_val1 = *((uint32 *) cobj);
	/* */
	lsb_int8 = i_val1;
	index_int32 = i_val2;
	cobj = (unsigned char *) (pointer) i_val3;
	if (cobj == 0) {
		pc = 62;
		goto throwNullPointer;
	}
	cobj = cobj + sizeof(Object) + 2 + (index_int32 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val3 = lv_2;
	/* */
	lv_5 = (int32) lv_5 + -1;
	/* */
	i_val2 = (int32) lv_5;
	/* */
	i_val1 = ((struct _staticClassFields_c *) classData)->DigitTens_f;
	/* */
	i_val0 = (int32) lv_4;
	/* */
	index_int32 = i_val0;
	cobj = (unsigned char *) (pointer) i_val1;
	if (cobj == 0) {
		pc = 77;
		goto throwNullPointer;
	}
	cobj = cobj + sizeof(Object) + 2 + (index_int32 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	i_val1 = *((uint32 *) cobj);
	/* */
	lsb_int8 = i_val1;
	index_int32 = i_val2;
	cobj = (unsigned char *) (pointer) i_val3;
	if (cobj == 0) {
		pc = 78;
		goto throwNullPointer;
	}
	cobj = cobj + sizeof(Object) + 2 + (index_int32 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	goto L17;
	/* */
	L82: i_val3 = (int32) lv_0;
	/* */
	i_val2 = 52429;
	/* */
	res_int32 = i_val2;
	lsb_int32 = i_val3;
#if defined(GLIBC_DOES_NOT_SUPPORT_MUL)
	res_int32 = imul(res_int32, lsb_int32);
#else
	res_int32 = res_int32 * lsb_int32;
#endif
	i_val3 = res_int32;
	/* */
	i_val2 = (signed char) 19;
	/* */
	value2_uc = i_val2;
	value1_uint32 = i_val3;
	result_uint32 = value1_uint32 >> value2_uc;
	i_val3 = result_uint32;
	/* */
	lv_3 = i_val3;
	/* */
	i_val3 = (int32) lv_0;
	/* */
	i_val2 = (int32) lv_3;
	/* */
	b_val1 = 3;
	/* */
	shiftv = b_val1;
	v_alue = i_val2;
	v_alue = v_alue << shiftv;
	i_val2 = v_alue;
	/* */
	i_val1 = (int32) lv_3;
	/* */
	b_val0 = 1;
	/* */
	shiftv = b_val0;
	v_alue = i_val1;
	v_alue = v_alue << shiftv;
	i_val1 = v_alue;
	/* */
	msb_int32 = i_val1;
	lsb_int32 = i_val2;
	lsb_int32 += msb_int32;
	i_val2 = lsb_int32;
	/* */
	msb_int32 = i_val2;
	lsb_int32 = i_val3;
	lsb_int32 -= msb_int32;
	i_val3 = lsb_int32;
	/* */
	lv_4 = i_val3;
	/* */
	i_val3 = lv_2;
	/* */
	lv_5 = (int32) lv_5 + -1;
	/* */
	i_val2 = (int32) lv_5;
	/* */
	i_val1 = ((struct _staticClassFields_c *) classData)->digits_f;
	/* */
	i_val0 = (int32) lv_4;
	/* */
	index_int32 = i_val0;
	cobj = (unsigned char *) (pointer) i_val1;
	if (cobj == 0) {
		pc = 116;
		goto throwNullPointer;
	}
	cobj = cobj + sizeof(Object) + 2 + (index_int32 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	i_val1 = *((uint32 *) cobj);
	/* */
	lsb_int8 = i_val1;
	index_int32 = i_val2;
	cobj = (unsigned char *) (pointer) i_val3;
	if (cobj == 0) {
		pc = 117;
		goto throwNullPointer;
	}
	cobj = cobj + sizeof(Object) + 2 + (index_int32 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	i_val3 = (int32) lv_3;
	/* */
	lv_0 = i_val3;
	/* */
	i_val3 = (int32) lv_0;
	/* */
	if (i_val3 != 0) {
		goto L82;
	}
	/* */
	goto L127;
	/* */
	L127: i_val3 = (int32) lv_6;
	/* */
	if (i_val3 == 0) {
		goto L141;
	}
	/* */
	i_val3 = lv_2;
	/* */
	lv_5 = (int32) lv_5 + -1;
	/* */
	i_val2 = (int32) lv_5;
	/* */
	i_val1 = (int32) lv_6;
	/* */
	lsb_int8 = i_val1;
	index_int32 = i_val2;
	cobj = (unsigned char *) (pointer) i_val3;
	if (cobj == 0) {
		pc = 140;
		goto throwNullPointer;
	}
	cobj = cobj + sizeof(Object) + 2 + (index_int32 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	*((uint32 *) cobj) = lsb_int8;
	/* */
	L141: return -1;
	throwArithmeticException: initializeException(sp,
			JAVA_LANG_ARITHMETICEXCEPTION, JAVA_LANG_ARITHMETICEXCEPTION_INIT_);
	excep = JAVA_LANG_ARITHMETICEXCEPTION;
	goto throwIt;
	throwNullPointer: initializeException(sp, JAVA_LANG_NULLPOINTEREXCEPTION,
			JAVA_LANG_NULLPOINTEREXCEPTION_INIT_);
	excep = JAVA_LANG_NULLPOINTEREXCEPTION;
	goto throwIt;
	throwIt: handler_pc = handleAthrow(&methods[32], excep, pc);
	sp++;
	switch (handler_pc) {
	case (unsigned short) -1: /* Not handled */
	default:
		fp[0] = *(sp - 1);
		return excep;
	}
}

/* Class: java.lang.Integer */
/* Method: stringSize */
/* stringSize
 * param : int
 * return: int
 */
int16 java_lang_Integer_stringSize(int32 *fp, int32 lv_0) {
	int32* sp;
	int32 i_val2;
	int32 i_val1;
	int32 i_val0;
	int32 index_int32;
	unsigned char* cobj;
	int16 excep;
	unsigned short handler_pc;
	unsigned short pc;
	int8 b_val1;
	int8 msb_int8;
	int32 lsb_int32;
	int32 lv_1 = 0;
	sp = &fp[4]; /* make room for local VM state on the stack */
	/* */
	i_val2 = 0;
	/* */
	lv_1 = i_val2;
	/* */
	L2: i_val2 = (int32) lv_0;
	/* */
	i_val1 = ((struct _staticClassFields_c *) classData)->sizeTable_f;
	/* */
	i_val0 = (int32) lv_1;
	/* */
	index_int32 = i_val0;
	cobj = (unsigned char *) (pointer) i_val1;
	if (cobj == 0) {
		pc = 10;
		goto throwNullPointer;
	}
	cobj = cobj + sizeof(Object) + 2 + (index_int32 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	i_val1 = *((uint32 *) cobj);
	/* */
	if (i_val2 > i_val1) {
		goto L20;
	}
	/* */
	i_val2 = (int32) lv_1;
	/* */
	b_val1 = 1;
	/* */
	msb_int8 = b_val1;
	lsb_int32 = i_val2;
	lsb_int32 += msb_int8;
	i_val2 = lsb_int32;
	/* */
	*((int32*) fp) = i_val2;
	return -1;
	/* */
	L20: lv_1 = (int32) lv_1 + 1;
	/* */
	goto L2;
	throwNullPointer: initializeException(sp, JAVA_LANG_NULLPOINTEREXCEPTION,
			JAVA_LANG_NULLPOINTEREXCEPTION_INIT_);
	excep = JAVA_LANG_NULLPOINTEREXCEPTION;
	goto throwIt;
	throwIt: handler_pc = handleAthrow(&methods[33], excep, pc);
	sp++;
	switch (handler_pc) {
	case (unsigned short) -1: /* Not handled */
	default:
		fp[0] = *(sp - 1);
		return excep;
	}
}

/* Class: java.lang.Math */
/* Method: <clinit> */
/* <clinit>
 * param : 
 * return: void
 */
int16 java_lang_Math_clinit_(int32 *fp) {
	int32* sp;
	const ConstantInfo* constant_;
	int32 i_val1;
	int16 excep;
	unsigned short handler_pc;
	unsigned short pc;
	Object* i_obj;
	int16 rval_m_3;
	int8 msb_int8;
	int8 b_val1;
	int8 lsb_int8;
	unsigned char topInc;
	int16 rval_m_24;
	int32 lsb_int32;
	int32 msb_int32;
	int32 i_val0;
	int16 rval_m_38;
	int16 rval_m_51;
	int32 rval_51;
	int16 rval_m_64;
	int32 rval_64;
	sp = &fp[3]; /* make room for local VM state on the stack */
	/* */
	constant_ = &constants[13];
	i_val1 = (uint32) (pointer) getClass(constant_->value);
	/* */
	*sp = (int32) i_val1;
	sp++;
	sp -= 1;
	i_obj = (Object*) (pointer) * sp;
	if (i_obj == 0) {
		pc = 3;
		goto throwNullPointer;
	}
	rval_m_3 = n_java_lang_Class_desiredAssertionStatus(sp);
	if (rval_m_3 == -1) {
		sp += 1;
	} else {
		fp[0] = *sp;
		return rval_m_3;
	}
	/* */
	sp--;
	msb_int8 = (int8)(*sp);
	if (msb_int8 != 0) {
		goto L14;
	}
	/* */
	b_val1 = 1;
	/* */
	*sp = (int32) (int8) b_val1;
	sp++;
	goto L15;
	/* */
	L14: b_val1 = 0;
	/* */
	*sp = (int32) (int8) b_val1;
	sp++;
	L15: sp--;
	lsb_int8 = (int8)(*sp);
	((struct _staticClassFields_c *) classData)->_assertionsDisabled_f__f =
			lsb_int8;
	/* */
	topInc = handleLDCWithIndex(sp, 14);
	sp += topInc;
	/* */
	sp -= 1;
	rval_m_24 = n_java_lang_Float_floatToRawIntBits(sp);
	if (rval_m_24 == -1) {
		sp += 1;
	} else {
		fp[0] = *sp;
		return rval_m_24;
	}
	/* */
	sp--;
	lsb_int32 = (int32)(*sp);
	if (lsb_int32 < 0) {
		msb_int32 = -1;
	} else {
		msb_int32 = 0;
	}
	i_val1 = msb_int32;
	i_val0 = lsb_int32;
	/* */
	lsb_int32 = i_val0;
	msb_int32 = i_val1;
	((struct _staticClassFields_c *) classData)->negativeZeroFloatBits_f =
			lsb_int32;
	((struct _staticClassFields_c *) classData)->lsbnegativeZeroFloatBits_f =
			msb_int32;
	/* */
	topInc = handleLDCWithIndex(sp, 15);
	sp += topInc;
	/* */
	sp -= 2;
	rval_m_38 = n_java_lang_Double_doubleToRawLongBits(sp);
	if (rval_m_38 == -1) {
		sp += 2;
	} else {
		fp[0] = *sp;
		return rval_m_38;
	}
	/* */
	sp--;
	lsb_int32 = (int32)(*sp);
	sp--;
	msb_int32 = (int32)(*sp);
	((struct _staticClassFields_c *) classData)->negativeZeroDoubleBits_f =
			lsb_int32;
	((struct _staticClassFields_c *) classData)->lsbnegativeZeroDoubleBits_f =
			msb_int32;
	/* */
	i_val1 = 512;
	/* */
	rval_m_51 = java_lang_Math_powerOfTwoD(sp, i_val1);
	if (rval_m_51 == -1) {
		rval_51 = *(int32*) sp;
		i_val1 = rval_51;
		rval_51 = *(int32*) (sp + 1);
		i_val0 = rval_51;
	} else {
		fp[0] = *sp;
		return rval_m_51;
	}
	/* */
	lsb_int32 = i_val0;
	msb_int32 = i_val1;
	((struct _staticClassFields_c *) classData)->twoToTheDoubleScaleUp_f =
			lsb_int32;
	((struct _staticClassFields_c *) classData)->lsbtwoToTheDoubleScaleUp_f =
			msb_int32;
	/* */
	i_val1 = -512;
	/* */
	rval_m_64 = java_lang_Math_powerOfTwoD(sp, i_val1);
	if (rval_m_64 == -1) {
		rval_64 = *(int32*) sp;
		i_val1 = rval_64;
		rval_64 = *(int32*) (sp + 1);
		i_val0 = rval_64;
	} else {
		fp[0] = *sp;
		return rval_m_64;
	}
	/* */
	lsb_int32 = i_val0;
	msb_int32 = i_val1;
	((struct _staticClassFields_c *) classData)->twoToTheDoubleScaleDown_f =
			lsb_int32;
	((struct _staticClassFields_c *) classData)->lsbtwoToTheDoubleScaleDown_f =
			msb_int32;
	/* */
	return -1;
	throwNullPointer: initializeException(sp, JAVA_LANG_NULLPOINTEREXCEPTION,
			JAVA_LANG_NULLPOINTEREXCEPTION_INIT_);
	excep = JAVA_LANG_NULLPOINTEREXCEPTION;
	goto throwIt;
	throwIt: handler_pc = handleAthrow(&methods[34], excep, pc);
	sp++;
	switch (handler_pc) {
	case (unsigned short) -1: /* Not handled */
	default:
		fp[0] = *(sp - 1);
		return excep;
	}
}

/* Class: java.lang.Math */
/* Method: <init> */
/* <init>
 * param : 
 * return: void
 */
int16 java_lang_Math_init_(int32 *fp, int32 lv_0) {
	int32* sp;
	int32 i_val0;
	int16 rval_m_1;
	sp = &fp[3]; /* make room for local VM state on the stack */
	/* */
	i_val0 = lv_0;
	/* */
	*sp = (int32) i_val0;
	sp++;
	sp -= 1;
	rval_m_1 = java_lang_Object_init_(sp);
	if (rval_m_1 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_1;
	}
	/* */
	return -1;
}

/* Class: java.lang.Math */
/* Method: min */
/* min
 * param : int, int
 * return: int
 */
int16 java_lang_Math_min(int32 *fp, int32 lv_0, int32 lv_1) {
	int32* sp;
	int32 i_val1;
	int32 i_val0;
	sp = &fp[4]; /* make room for local VM state on the stack */
	/* */
	i_val1 = (int32) lv_0;
	/* */
	i_val0 = (int32) lv_1;
	/* */
	if (i_val1 > i_val0) {
		goto L9;
	}
	/* */
	i_val1 = (int32) lv_0;
	/* */
	*sp = (int32) i_val1;
	sp++;
	goto L10;
	/* */
	L9: i_val1 = (int32) lv_1;
	/* */
	*sp = (int32) i_val1;
	sp++;
	L10: sp--;
	*((int32*) fp) = (int32)(*sp);
	return -1;
}

/* Class: java.lang.Math */
/* Method: powerOfTwoD */
/* powerOfTwoD
 * param : int
 * return: double
 */
int16 java_lang_Math_powerOfTwoD(int32 *fp, int32 lv_0) {
	int32* sp;
	int32 i_val3;
	int16 s_val2;
	int16 rval_m_27;
	Object* ex_ception;
	unsigned short handler_pc;
	int16 excep;
	unsigned short pc;
	int32 lsb_int32;
	int32 msb_int32;
	int32 i_val2;
	int32 msi;
	int32 lsi;
	const unsigned char *data_;
	const ConstantInfo* constant_;
	int32 i_val1;
	int32 i_val0;
	int16 rval_m_45;
	int32 spm1;
	int32 spm2;
	sp = &fp[3]; /* make room for local VM state on the stack */
	/* */
	i_val3 =
			((struct _staticClassFields_c *) classData)->_assertionsDisabled_f__f;
	/* */
	if (i_val3 != 0) {
		goto L32;
	}
	/* */
	i_val3 = (int32) lv_0;
	/* */
	s_val2 = -1022;
	/* */
	if (i_val3 < s_val2) {
		goto L23;
	}
	/* */
	i_val3 = (int32) lv_0;
	/* */
	s_val2 = 1023;
	/* */
	if (i_val3 <= s_val2) {
		goto L32;
	}
	/* */
	L23: if (handleNewClassIndex(sp, 8) == 0) {
		fp[0] = *sp;
		return getClassIndex((Object*) (pointer) * sp);
	}
	sp++;
	/* */
	i_val3 = *(sp - 1);
	/* */
	*sp = (int32) i_val3;
	sp++;
	sp -= 1;
	rval_m_27 = java_lang_AssertionError_init_(sp);
	if (rval_m_27 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_27;
	}
	/* */
	ex_ception = (Object*) (pointer) * (sp - 1);
	excep = getClassIndex(ex_ception);
	pc = 31;
	sp--;
	goto throwIt;
	/* */
	L32: i_val3 = (int32) lv_0;
	/* */
	lsb_int32 = i_val3;
	if (lsb_int32 < 0) {
		msb_int32 = -1;
	} else {
		msb_int32 = 0;
	}
	i_val3 = msb_int32;
	i_val2 = lsb_int32;
	/* */
	constant_ = &constants[16];
	data_ = constant_->data;
	msi = ((int32) data_[0]) << 24;
	msi |= ((int32) data_[1]) << 16;
	msi |= data_[2] << 8;
	msi |= data_[3];
	lsi = ((int32) data_[4]) << 24;
	lsi |= ((int32) data_[5]) << 16;
	lsi |= data_[6] << 8;
	lsi |= data_[7];
	i_val1 = msi;
	i_val0 = lsi;
	/* */
	*sp = (int32) i_val3;
	sp++;
	*sp = (int32) i_val2;
	sp++;
	*sp = (int32) i_val1;
	sp++;
	*sp = (int32) i_val0;
	sp++;
	handleLongOperator(97, sp);
	sp = sp - 2;
	/* */
	i_val3 = (signed char) 52;
	/* */
	*sp = (int32) i_val3;
	sp++;
	handleLSHL(sp);
	sp--;
	/* */
	constant_ = &constants[17];
	data_ = constant_->data;
	msi = ((int32) data_[0]) << 24;
	msi |= ((int32) data_[1]) << 16;
	msi |= data_[2] << 8;
	msi |= data_[3];
	lsi = ((int32) data_[4]) << 24;
	lsi |= ((int32) data_[5]) << 16;
	lsi |= data_[6] << 8;
	lsi |= data_[7];
	i_val3 = msi;
	i_val2 = lsi;
	/* */
	*sp = (int32) i_val3;
	sp++;
	*sp = (int32) i_val2;
	sp++;
	handleLongOperator(127, sp);
	sp = sp - 2;
	/* */
	sp -= 2;
	rval_m_45 = n_java_lang_Double_longBitsToDouble(sp);
	if (rval_m_45 == -1) {
		sp += 2;
	} else {
		fp[0] = *sp;
		return rval_m_45;
	}
	/* */
	spm1 = *(sp - 1);
	spm2 = *(sp - 2);
	fp[0] = spm2;
	fp[1] = spm1;
	return -1;
	throwIt: handler_pc = handleAthrow(&methods[37], excep, pc);
	sp++;
	switch (handler_pc) {
	case (unsigned short) -1: /* Not handled */
	default:
		fp[0] = *(sp - 1);
		return excep;
	}
}

/* Class: java.lang.NegativeArraySizeException */
/* Method: <init> */
/* <init>
 * param : 
 * return: void
 */
int16 java_lang_NegativeArraySizeException_init_(int32 *fp) {
	int32* sp;
	int32 i_val0;
	int16 rval_m_1;
	int32 lv_0 = 0;
	lv_0 = (int32)(*(fp + 0));
	sp = &fp[3]; /* make room for local VM state on the stack */
	/* */
	i_val0 = lv_0;
	/* */
	*sp = (int32) i_val0;
	sp++;
	sp -= 1;
	rval_m_1 = java_lang_RuntimeException_init_(sp);
	if (rval_m_1 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_1;
	}
	/* */
	return -1;
}

/* Class: java.lang.NullPointerException */
/* Method: <init> */
RANGE const unsigned char java_lang_NullPointerException_init_[8] PROGMEM = {
	0x2A,0xB7,0x00,0x2A,0x01,0xB1,0x01,0x01
};

/* Class: java.lang.Object */
/* Method: <init> */
/* <init>
 * param : 
 * return: void
 */
int16 java_lang_Object_init_(int32 *fp) {
	/* */
	return -1;
}

/* Class: java.lang.OutOfMemoryError */
/* Method: <init> */
RANGE const unsigned char java_lang_OutOfMemoryError_init_[8] PROGMEM = {
	0x2A,0xB7,0x00,0x3F,0x01,0xB1,0x01,0x01
};

/* Class: java.lang.RuntimeException */
/* Method: <init> */
/* <init>
 * param : 
 * return: void
 */
int16 java_lang_RuntimeException_init_(int32 *fp) {
	int32* sp;
	int32 i_val0;
	int16 rval_m_1;
	int32 lv_0 = 0;
	lv_0 = (int32)(*(fp + 0));
	sp = &fp[3]; /* make room for local VM state on the stack */
	/* */
	i_val0 = lv_0;
	/* */
	rval_m_1 = java_lang_Exception_init_(sp, i_val0);
	if (rval_m_1 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_1;
	}
	/* */
	return -1;
}

/* Class: java.lang.RuntimeException */
/* Method: <init> */
/* <init>
 * param : java.lang.String
 * return: void
 */
int16 java_lang_RuntimeException_init__(int32 *fp, int32 lv_0, int32 lv_1) {
	int32* sp;
	int32 i_val1;
	int32 i_val0;
	int16 rval_m_2;
	sp = &fp[4]; /* make room for local VM state on the stack */
	/* */
	i_val1 = lv_0;
	/* */
	i_val0 = lv_1;
	/* */
	rval_m_2 = java_lang_Exception_init__(sp, i_val1, i_val0);
	if (rval_m_2 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_2;
	}
	/* */
	return -1;
}

/* Class: java.lang.String */
/* Method: <init> */
RANGE const unsigned char java_lang_String_initFromCharArray[22] PROGMEM = {
	0x2A,0xB7,0x00,0x28,0x01,0x2A,0x2B,0x2B,0xBE,0xB8,0x00,0x42,0x05,0xB5,0x00,0x19,
	0x22,
	/* offset: 0, 0*/
	(uint8)(((uint16)((offsetof(struct _java_lang_String_c, value_f) - sizeof(Object)) << 3)) >> 8), (uint8)(((uint16)((offsetof(struct _java_lang_String_c, value_f) - sizeof(Object)) << 3)) & 0xff),
	0xB1,0x01,0x03
};

/* Class: java.lang.String */
/* Method: <init> */
/* <init>
 * param : char[], int, int
 * return: void
 */
int16 java_lang_String_init__(int32 *fp, int32 lv_0, int32 lv_1, int32 lv_2,
		int32 lv_3) {
	int32* sp;
	int32 i_val4;
	int16 rval_m_1;
	int32 i_val3;
	int16 rval_m_14;
	Object* ex_ception;
	unsigned short handler_pc;
	int16 excep;
	unsigned short pc;
	int16 rval_m_32;
	unsigned char* cobj;
	int16 s_val3;
	const ConstantInfo* constant_;
	int32 lsb_int32;
	int32 i_val2;
	int32 msb_int32;
	int16 lsb_int16;
	int16 rval_m_77;
	int32 i_val1;
	int32 i_val0;
	int16 rval_m_88;
	int32 rval_88;
	sp = &fp[6]; /* make room for local VM state on the stack */
	/* */
	i_val4 = lv_0;
	/* */
	*sp = (int32) i_val4;
	sp++;
	sp -= 1;
	rval_m_1 = java_lang_Object_init_(sp);
	if (rval_m_1 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_1;
	}
	/* */
	i_val4 = (int32) lv_2;
	/* */
	if (i_val4 >= 0) {
		goto L19;
	}
	/* */
	if (handleNewClassIndex(sp, 27) == 0) {
		fp[0] = *sp;
		return getClassIndex((Object*) (pointer) * sp);
	}
	sp++;
	/* */
	i_val4 = *(sp - 1);
	/* */
	i_val3 = (int32) lv_2;
	/* */
	rval_m_14 = java_lang_StringIndexOutOfBoundsException_init_(sp, i_val4,
			i_val3);
	if (rval_m_14 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_14;
	}
	/* */
	ex_ception = (Object*) (pointer) * (sp - 1);
	excep = getClassIndex(ex_ception);
	pc = 18;
	sp--;
	goto throwIt;
	/* */
	L19: i_val4 = (int32) lv_3;
	/* */
	if (i_val4 > 0) {
		goto L62;
	}
	/* */
	i_val4 = (int32) lv_3;
	/* */
	if (i_val4 >= 0) {
		goto L37;
	}
	/* */
	if (handleNewClassIndex(sp, 27) == 0) {
		fp[0] = *sp;
		return getClassIndex((Object*) (pointer) * sp);
	}
	sp++;
	/* */
	i_val4 = *(sp - 1);
	/* */
	i_val3 = (int32) lv_3;
	/* */
	rval_m_32 = java_lang_StringIndexOutOfBoundsException_init_(sp, i_val4,
			i_val3);
	if (rval_m_32 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_32;
	}
	/* */
	ex_ception = (Object*) (pointer) * (sp - 1);
	excep = getClassIndex(ex_ception);
	pc = 36;
	sp--;
	goto throwIt;
	/* */
	L37: i_val4 = (int32) lv_2;
	/* */
	i_val3 = lv_1;
	/* */
	cobj = (unsigned char *) (pointer) i_val3;
	if (cobj == 0) {
		pc = 39;
		goto throwNullPointer;
	}
	s_val3 = *(uint16*) ((HEAP_REF(cobj, unsigned char*)) +sizeof(Object));
	/* */
	if (i_val4 > s_val3) {
		goto L62;
	}
	/* */
	i_val4 = lv_0;
	/* */
	constant_ = &constants[18];
#ifndef PRE_INITIALIZE_CONSTANTS
	initializeStringConstant(constant_, sp);
#endif
	i_val3 = (int32) (pointer) stringConstants[constant_->value >> 16];
	/* */
	cobj = (unsigned char *) (pointer) i_val3;
	if (cobj == 0) {
		pc = 47;
		goto throwNullPointer;
	}
	i_val3 = ((struct _java_lang_String_c *)HEAP_REF(cobj, unsigned char*)) -> value_f;
	/* */
	lsb_int32 = i_val3;
	cobj = (unsigned char *) (pointer) i_val4;
	((struct _java_lang_String_c *)HEAP_REF(cobj, unsigned char*)) -> value_f = lsb_int32;
	/* */
	return -1;
	/* */
	L62: i_val4 = (int32) lv_2;
	/* */
	i_val3 = lv_1;
	/* */
	cobj = (unsigned char *) (pointer) i_val3;
	if (cobj == 0) {
		pc = 64;
		goto throwNullPointer;
	}
	s_val3 = *(uint16*) ((HEAP_REF(cobj, unsigned char*)) +sizeof(Object));
	/* */
	i_val2 = (int32) lv_3;
	/* */
	msb_int32 = i_val2;
	lsb_int16 = s_val3;
	lsb_int16 -= msb_int32;
	i_val3 = lsb_int16;
	/* */
	if (i_val4 <= i_val3) {
		goto L82;
	}
	/* */
	if (handleNewClassIndex(sp, 27) == 0) {
		fp[0] = *sp;
		return getClassIndex((Object*) (pointer) * sp);
	}
	sp++;
	/* */
	i_val4 = *(sp - 1);
	/* */
	i_val3 = (int32) lv_2;
	/* */
	i_val2 = (int32) lv_3;
	/* */
	msb_int32 = i_val2;
	lsb_int32 = i_val3;
	lsb_int32 += msb_int32;
	i_val3 = lsb_int32;
	/* */
	rval_m_77 = java_lang_StringIndexOutOfBoundsException_init_(sp, i_val4,
			i_val3);
	if (rval_m_77 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_77;
	}
	/* */
	ex_ception = (Object*) (pointer) * (sp - 1);
	excep = getClassIndex(ex_ception);
	pc = 81;
	sp--;
	goto throwIt;
	/* */
	L82: i_val4 = lv_0;
	/* */
	i_val3 = lv_1;
	/* */
	i_val2 = (int32) lv_2;
	/* */
	i_val1 = (int32) lv_2;
	/* */
	i_val0 = (int32) lv_3;
	/* */
	msb_int32 = i_val0;
	lsb_int32 = i_val1;
	lsb_int32 += msb_int32;
	i_val1 = lsb_int32;
	/* */
	sp += 1;
	rval_m_88 = java_util_Arrays_copyOfRange(sp, i_val3, i_val2, i_val1);
	if (rval_m_88 == -1) {
		rval_88 = *(int32*) sp;
		i_val3 = rval_88;
	} else {
		fp[0] = *sp;
		return rval_m_88;
	}
	sp -= 1;
	/* */
	lsb_int32 = i_val3;
	cobj = (unsigned char *) (pointer) i_val4;
	((struct _java_lang_String_c *)HEAP_REF(cobj, unsigned char*)) -> value_f = lsb_int32;
	/* */
	return -1;
	throwNullPointer: initializeException(sp, JAVA_LANG_NULLPOINTEREXCEPTION,
			JAVA_LANG_NULLPOINTEREXCEPTION_INIT_);
	excep = JAVA_LANG_NULLPOINTEREXCEPTION;
	goto throwIt;
	throwIt: handler_pc = handleAthrow(&methods[45], excep, pc);
	sp++;
	switch (handler_pc) {
	case (unsigned short) -1: /* Not handled */
	default:
		fp[0] = *(sp - 1);
		return excep;
	}
}

/* Class: java.lang.String */
/* Method: charAt */
/* charAt
 * param : int
 * return: char
 */
int16 java_lang_String_charAt(int32 *fp, int32 lv_0, int32 lv_1) {
	int32* sp;
	int32 i_val2;
	int32 i_val1;
	unsigned char* cobj;
	int16 excep;
	unsigned short handler_pc;
	unsigned short pc;
	int16 s_val1;
	int16 rval_m_21;
	Object* ex_ception;
	int32 index_int32;
	sp = &fp[4]; /* make room for local VM state on the stack */
	/* */
	i_val2 = (int32) lv_1;
	/* */
	if (i_val2 < 0) {
		goto L16;
	}
	/* */
	i_val2 = (int32) lv_1;
	/* */
	i_val1 = lv_0;
	/* */
	cobj = (unsigned char *) (pointer) i_val1;
	i_val1 = ((struct _java_lang_String_c *)HEAP_REF(cobj, unsigned char*)) -> value_f;
	/* */
	cobj = (unsigned char *) (pointer) i_val1;
	if (cobj == 0) {
		pc = 12;
		goto throwNullPointer;
	}
	s_val1 = *(uint16*) ((HEAP_REF(cobj, unsigned char*)) +sizeof(Object));
	/* */
	if (i_val2 < s_val1) {
		goto L26;
	}
	/* */
	L16: if (handleNewClassIndex(sp, 27) == 0) {
		fp[0] = *sp;
		return getClassIndex((Object*) (pointer) * sp);
	}
	sp++;
	/* */
	i_val2 = *(sp - 1);
	/* */
	i_val1 = (int32) lv_1;
	/* */
	rval_m_21 = java_lang_StringIndexOutOfBoundsException_init_(sp, i_val2,
			i_val1);
	if (rval_m_21 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_21;
	}
	/* */
	ex_ception = (Object*) (pointer) * (sp - 1);
	excep = getClassIndex(ex_ception);
	pc = 25;
	sp--;
	goto throwIt;
	/* */
	L26: i_val2 = lv_0;
	/* */
	cobj = (unsigned char *) (pointer) i_val2;
	i_val2 = ((struct _java_lang_String_c *)HEAP_REF(cobj, unsigned char*)) -> value_f;
	/* */
	i_val1 = (int32) lv_1;
	/* */
	index_int32 = i_val1;
	cobj = (unsigned char *) (pointer) i_val2;
	if (cobj == 0) {
		pc = 34;
		goto throwNullPointer;
	}
	cobj = cobj + sizeof(Object) + 2 + (index_int32 << 2);
	cobj = HEAP_REF(cobj, unsigned char*);
	i_val2 = *((uint32 *) cobj);
	/* */
	*((int32*) fp) = i_val2;
	return -1;
	throwNullPointer: initializeException(sp, JAVA_LANG_NULLPOINTEREXCEPTION,
			JAVA_LANG_NULLPOINTEREXCEPTION_INIT_);
	excep = JAVA_LANG_NULLPOINTEREXCEPTION;
	goto throwIt;
	throwIt: handler_pc = handleAthrow(&methods[46], excep, pc);
	sp++;
	switch (handler_pc) {
	case (unsigned short) -1: /* Not handled */
	default:
		fp[0] = *(sp - 1);
		return excep;
	}
}

/* Class: java.lang.String */
/* Method: getChars */
/* getChars
 * param : int, int, char[], int
 * return: void
 */
int16 java_lang_String_getChars(int32 *fp, int32 lv_0, int32 lv_1, int32 lv_2,
		int32 lv_3, int32 lv_4) {
	int32* sp;
	int32 i_val5;
	int32 i_val4;
	int16 rval_m_9;
	Object* ex_ception;
	unsigned short handler_pc;
	int16 excep;
	unsigned short pc;
	unsigned char* cobj;
	int16 s_val4;
	int16 rval_m_31;
	int32 i_val3;
	int32 msb_int32;
	int32 lsb_int32;
	int16 rval_m_48;
	int32 i_val2;
	int32 i_val1;
	int32 i_val0;
	int16 rval_m_67;
	sp = &fp[7]; /* make room for local VM state on the stack */
	/* */
	i_val5 = (int32) lv_1;
	/* */
	if (i_val5 >= 0) {
		goto L14;
	}
	/* */
	if (handleNewClassIndex(sp, 27) == 0) {
		fp[0] = *sp;
		return getClassIndex((Object*) (pointer) * sp);
	}
	sp++;
	/* */
	i_val5 = *(sp - 1);
	/* */
	i_val4 = (int32) lv_1;
	/* */
	rval_m_9 = java_lang_StringIndexOutOfBoundsException_init_(sp, i_val5,
			i_val4);
	if (rval_m_9 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_9;
	}
	/* */
	ex_ception = (Object*) (pointer) * (sp - 1);
	excep = getClassIndex(ex_ception);
	pc = 13;
	sp--;
	goto throwIt;
	/* */
	L14: i_val5 = (int32) lv_2;
	/* */
	i_val4 = lv_0;
	/* */
	cobj = (unsigned char *) (pointer) i_val4;
	i_val4 = ((struct _java_lang_String_c *)HEAP_REF(cobj, unsigned char*)) -> value_f;
	/* */
	cobj = (unsigned char *) (pointer) i_val4;
	if (cobj == 0) {
		pc = 22;
		goto throwNullPointer;
	}
	s_val4 = *(uint16*) ((HEAP_REF(cobj, unsigned char*)) +sizeof(Object));
	/* */
	if (i_val5 <= s_val4) {
		goto L36;
	}
	/* */
	if (handleNewClassIndex(sp, 27) == 0) {
		fp[0] = *sp;
		return getClassIndex((Object*) (pointer) * sp);
	}
	sp++;
	/* */
	i_val5 = *(sp - 1);
	/* */
	i_val4 = (int32) lv_2;
	/* */
	rval_m_31 = java_lang_StringIndexOutOfBoundsException_init_(sp, i_val5,
			i_val4);
	if (rval_m_31 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_31;
	}
	/* */
	ex_ception = (Object*) (pointer) * (sp - 1);
	excep = getClassIndex(ex_ception);
	pc = 35;
	sp--;
	goto throwIt;
	/* */
	L36: i_val5 = (int32) lv_1;
	/* */
	i_val4 = (int32) lv_2;
	/* */
	if (i_val5 <= i_val4) {
		goto L53;
	}
	/* */
	if (handleNewClassIndex(sp, 27) == 0) {
		fp[0] = *sp;
		return getClassIndex((Object*) (pointer) * sp);
	}
	sp++;
	/* */
	i_val5 = *(sp - 1);
	/* */
	i_val4 = (int32) lv_2;
	/* */
	i_val3 = (int32) lv_1;
	/* */
	msb_int32 = i_val3;
	lsb_int32 = i_val4;
	lsb_int32 -= msb_int32;
	i_val4 = lsb_int32;
	/* */
	rval_m_48 = java_lang_StringIndexOutOfBoundsException_init_(sp, i_val5,
			i_val4);
	if (rval_m_48 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_48;
	}
	/* */
	ex_ception = (Object*) (pointer) * (sp - 1);
	excep = getClassIndex(ex_ception);
	pc = 52;
	sp--;
	goto throwIt;
	/* */
	L53: i_val5 = lv_0;
	/* */
	cobj = (unsigned char *) (pointer) i_val5;
	i_val5 = ((struct _java_lang_String_c *)HEAP_REF(cobj, unsigned char*)) -> value_f;
	/* */
	i_val4 = (int32) lv_1;
	/* */
	i_val3 = lv_3;
	/* */
	i_val2 = (int32) lv_4;
	/* */
	i_val1 = (int32) lv_2;
	/* */
	i_val0 = (int32) lv_1;
	/* */
	msb_int32 = i_val0;
	lsb_int32 = i_val1;
	lsb_int32 -= msb_int32;
	i_val1 = lsb_int32;
	/* */
	*sp = (int32) i_val5;
	sp++;
	*sp = (int32) i_val4;
	sp++;
	*sp = (int32) i_val3;
	sp++;
	*sp = (int32) i_val2;
	sp++;
	*sp = (int32) i_val1;
	sp++;
	sp -= 5;
	rval_m_67 = n_java_lang_System_arraycopy(sp);
	if (rval_m_67 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_67;
	}
	/* */
	return -1;
	throwNullPointer: initializeException(sp, JAVA_LANG_NULLPOINTEREXCEPTION,
			JAVA_LANG_NULLPOINTEREXCEPTION_INIT_);
	excep = JAVA_LANG_NULLPOINTEREXCEPTION;
	goto throwIt;
	throwIt: handler_pc = handleAthrow(&methods[47], excep, pc);
	sp++;
	switch (handler_pc) {
	case (unsigned short) -1: /* Not handled */
	default:
		fp[0] = *(sp - 1);
		return excep;
	}
}

/* Class: java.lang.String */
/* Method: length */
/* length
 * param : 
 * return: int
 */
int16 java_lang_String_length(int32 *fp, int32 lv_0) {
	int32* sp;
	int32 i_val0;
	unsigned char* cobj;
	int16 excep;
	unsigned short handler_pc;
	unsigned short pc;
	sp = &fp[3]; /* make room for local VM state on the stack */
	/* */
	i_val0 = lv_0;
	/* */
	cobj = (unsigned char *) (pointer) i_val0;
	i_val0 = ((struct _java_lang_String_c *)HEAP_REF(cobj, unsigned char*)) -> value_f;
	/* */
	cobj = (unsigned char *) (pointer) i_val0;
	if (cobj == 0) {
		pc = 7;
		goto throwNullPointer;
	}
	i_val0 = *(uint16*) ((HEAP_REF(cobj, unsigned char*)) +sizeof(Object));
	/* */
	*((int32*) fp) = i_val0;
	return -1;
	throwNullPointer: initializeException(sp, JAVA_LANG_NULLPOINTEREXCEPTION,
			JAVA_LANG_NULLPOINTEREXCEPTION_INIT_);
	excep = JAVA_LANG_NULLPOINTEREXCEPTION;
	goto throwIt;
	throwIt: handler_pc = handleAthrow(&methods[48], excep, pc);
	sp++;
	switch (handler_pc) {
	case (unsigned short) -1: /* Not handled */
	default:
		fp[0] = *(sp - 1);
		return excep;
	}
}

/* Class: java.lang.StringBuilder */
/* Method: <init> */
/* <init>
 * param : 
 * return: void
 */
int16 java_lang_StringBuilder_init_(int32 *fp, int32 lv_0) {
	int32* sp;
	int32 i_val1;
	int32 i_val0;
	int16 rval_m_3;
	sp = &fp[3]; /* make room for local VM state on the stack */
	/* */
	i_val1 = lv_0;
	/* */
	i_val0 = (signed char) 16;
	/* */
	rval_m_3 = java_lang_AbstractStringBuilder_init_(sp, i_val1, i_val0);
	if (rval_m_3 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_3;
	}
	/* */
	return -1;
}

/* Class: java.lang.StringBuilder */
/* Method: append */
/* append
 * param : int
 * return: java.lang.StringBuilder
 */
int16 java_lang_StringBuilder_append_(int32 *fp, int32 lv_0, int32 lv_1) {
	int32* sp;
	int32 i_val1;
	int32 i_val0;
	int16 rval_m_2;
	int32 rval_2;
	sp = &fp[4]; /* make room for local VM state on the stack */
	/* */
	i_val1 = lv_0;
	/* */
	i_val0 = (int32) lv_1;
	/* */
	rval_m_2 = java_lang_AbstractStringBuilder_append(sp, i_val1, i_val0);
	if (rval_m_2 == -1) {
		rval_2 = *(int32*) sp;
		i_val1 = rval_2;
	} else {
		fp[0] = *sp;
		return rval_m_2;
	}
	/* */
	dummy = i_val1;
	/* */
	i_val1 = lv_0;
	/* */
	*((int32*) fp) = i_val1;
	return -1;
}

/* Class: java.lang.StringBuilder */
/* Method: append */
/* append
 * param : java.lang.String
 * return: java.lang.AbstractStringBuilder
 */
int16 java_lang_StringBuilder_append__(int32 *fp) {
	int32* sp;
	int32 i_val1;
	int32 i_val0;
	int16 rval_m_2;
	int32 rval_2;
	int32 lv_0 = 0;
	int32 lv_1 = 0;
	lv_0 = (int32)(*(fp + 0));
	lv_1 = (int32)(*(fp + 1));
	sp = &fp[4]; /* make room for local VM state on the stack */
	/* */
	i_val1 = lv_0;
	/* */
	i_val0 = lv_1;
	/* */
	rval_m_2 = java_lang_StringBuilder_append___(sp, i_val1, i_val0);
	if (rval_m_2 == -1) {
		rval_2 = *(int32*) sp;
		i_val1 = rval_2;
	} else {
		fp[0] = *sp;
		return rval_m_2;
	}
	/* */
	*((int32*) fp) = i_val1;
	return -1;
}

/* Class: java.lang.StringBuilder */
/* Method: append */
/* append
 * param : java.lang.String
 * return: java.lang.StringBuilder
 */
int16 java_lang_StringBuilder_append___(int32 *fp, int32 lv_0, int32 lv_1) {
	int32* sp;
	int32 i_val1;
	int32 i_val0;
	int16 rval_m_2;
	int32 rval_2;
	sp = &fp[4]; /* make room for local VM state on the stack */
	/* */
	i_val1 = lv_0;
	/* */
	i_val0 = lv_1;
	/* */
	rval_m_2 = java_lang_AbstractStringBuilder_append_(sp, i_val1, i_val0);
	if (rval_m_2 == -1) {
		rval_2 = *(int32*) sp;
		i_val1 = rval_2;
	} else {
		fp[0] = *sp;
		return rval_m_2;
	}
	/* */
	dummy = i_val1;
	/* */
	i_val1 = lv_0;
	/* */
	*((int32*) fp) = i_val1;
	return -1;
}

/* Class: java.lang.StringBuilder */
/* Method: toString */
/* toString
 * param : 
 * return: java.lang.String
 */
int16 java_lang_StringBuilder_toString(int32 *fp, int32 lv_0) {
	int32* sp;
	int32 i_val4;
	int32 i_val3;
	unsigned char* cobj;
	int32 i_val2;
	int32 i_val1;
	int16 rval_m_19;
	sp = &fp[3]; /* make room for local VM state on the stack */
	/* */
	if (handleNewClassIndex(sp, 25) == 0) {
		fp[0] = *sp;
		return getClassIndex((Object*) (pointer) * sp);
	}
	sp++;
	/* */
	i_val4 = *(sp - 1);
	/* */
	i_val3 = lv_0;
	/* */
	cobj = (unsigned char *) (pointer) i_val3;
	i_val3 = ((struct _java_lang_StringBuilder_c *)HEAP_REF(cobj, unsigned char*)) -> value_f;
	/* */
	i_val2 = 0;
	/* */
	i_val1 = lv_0;
	/* */
	cobj = (unsigned char *) (pointer) i_val1;
	i_val1 = ((struct _java_lang_StringBuilder_c *)HEAP_REF(cobj, unsigned char*)) -> count_f;
	/* */
	rval_m_19 = java_lang_String_init__(sp, i_val4, i_val3, i_val2, i_val1);
	if (rval_m_19 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_19;
	}
	/* */
	sp--;
	*((int32*) fp) = (int32)(*sp);
	return -1;
}

/* Class: java.lang.StringIndexOutOfBoundsException */
/* Method: <init> */
/* <init>
 * param : int
 * return: void
 */
int16 java_lang_StringIndexOutOfBoundsException_init_(int32 *fp, int32 lv_0,
		int32 lv_1) {
	int32* sp;
	int32 i_val2;
	int16 rval_m_5;
	const ConstantInfo* constant_;
	int32 hvm_arg_no_1_12;
	int16 rval_m_12;
	int32 rval_12;
	int32 i_val1;
	int16 excep;
	unsigned short handler_pc;
	unsigned short pc;
	int16 rval_m_17;
	int32 rval_17;
	int16 rval_m_21;
	int32 rval_21;
	int32 hvm_arg_no_1_25;
	int16 rval_m_25;
	sp = &fp[4]; /* make room for local VM state on the stack */
	/* */
	i_val2 = lv_0;
	/* */
	*sp = (int32) i_val2;
	sp++;
	if (handleNewClassIndex(sp, 26) == 0) {
		fp[0] = *sp;
		return getClassIndex((Object*) (pointer) * sp);
	}
	sp++;
	/* */
	i_val2 = *(sp - 1);
	/* */
	rval_m_5 = java_lang_StringBuilder_init_(sp, i_val2);
	if (rval_m_5 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_5;
	}
	/* */
	constant_ = &constants[19];
#ifndef PRE_INITIALIZE_CONSTANTS
	initializeStringConstant(constant_, sp);
#endif
	i_val2 = (int32) (pointer) stringConstants[constant_->value >> 16];
	/* */
	sp--;
	hvm_arg_no_1_12 = (int32)(*sp);
	rval_m_12 = java_lang_StringBuilder_append___(sp, hvm_arg_no_1_12, i_val2);
	if (rval_m_12 == -1) {
		rval_12 = *(int32*) sp;
		i_val2 = rval_12;
	} else {
		fp[0] = *sp;
		return rval_m_12;
	}
	/* */
	i_val1 = (int32) lv_1;
	/* */
	if (i_val2 == 0) {
		pc = 17;
		goto throwNullPointer;
	}
	rval_m_17 = java_lang_StringBuilder_append_(sp, i_val2, i_val1);
	if (rval_m_17 == -1) {
		rval_17 = *(int32*) sp;
		i_val2 = rval_17;
	} else {
		fp[0] = *sp;
		return rval_m_17;
	}
	/* */
	if (i_val2 == 0) {
		pc = 21;
		goto throwNullPointer;
	}
	rval_m_21 = java_lang_StringBuilder_toString(sp, i_val2);
	if (rval_m_21 == -1) {
		rval_21 = *(int32*) sp;
		i_val2 = rval_21;
	} else {
		fp[0] = *sp;
		return rval_m_21;
	}
	/* */
	sp--;
	hvm_arg_no_1_25 = (int32)(*sp);
	rval_m_25 = java_lang_IndexOutOfBoundsException_init__(sp, hvm_arg_no_1_25,
			i_val2);
	if (rval_m_25 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_25;
	}
	/* */
	return -1;
	throwNullPointer: initializeException(sp, JAVA_LANG_NULLPOINTEREXCEPTION,
			JAVA_LANG_NULLPOINTEREXCEPTION_INIT_);
	excep = JAVA_LANG_NULLPOINTEREXCEPTION;
	goto throwIt;
	throwIt: handler_pc = handleAthrow(&methods[54], excep, pc);
	sp++;
	switch (handler_pc) {
	case (unsigned short) -1: /* Not handled */
	default:
		fp[0] = *(sp - 1);
		return excep;
	}
}

/* Class: java.lang.System */
/* Method: <clinit> */
/* <clinit>
 * param : 
 * return: void
 */
int16 java_lang_System_clinit_(int32 *fp) {
	int32* sp;
	int16 rval_m_0;
	int32 i_val0;
	int32 lsb_int32;
	sp = &fp[3]; /* make room for local VM state on the stack */
	/* */
	sp -= 0;
	rval_m_0 = n_java_lang_System_registerNatives(sp);
	if (rval_m_0 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_0;
	}
	/* */
	i_val0 = 0;
	/* */
	lsb_int32 = i_val0;
	((struct _staticClassFields_c *) classData)->in_f = lsb_int32;
	/* */
	i_val0 = 0;
	/* */
	lsb_int32 = i_val0;
	((struct _staticClassFields_c *) classData)->out_f = lsb_int32;
	/* */
	i_val0 = 0;
	/* */
	lsb_int32 = i_val0;
	((struct _staticClassFields_c *) classData)->err_f = lsb_int32;
	/* */
	i_val0 = 0;
	/* */
	lsb_int32 = i_val0;
	((struct _staticClassFields_c *) classData)->security_f = lsb_int32;
	/* */
	i_val0 = 0;
	/* */
	lsb_int32 = i_val0;
	((struct _staticClassFields_c *) classData)->cons_f = lsb_int32;
	/* */
	return -1;
}

/* Class: java.lang.System */
/* Method: arraycopy */
/* Class: java.lang.System */
/* Method: registerNatives */
/* Class: java.lang.Throwable */
/* Method: <clinit> */
/* Class: java.lang.Throwable */
/* Method: <init> */
/* <init>
 * param : 
 * return: void
 */
int16 java_lang_Throwable_init_(int32 *fp, int32 lv_0) {
	int32* sp;
	int32 i_val1;
	int16 rval_m_1;
	int32 i_val0;
	unsigned char* cobj;
	int32 lsb_int32;
	int16 rval_m_40;
	int32 rval_40;
	sp = &fp[3]; /* make room for local VM state on the stack */
	/* */
	i_val1 = lv_0;
	/* */
	*sp = (int32) i_val1;
	sp++;
	sp -= 1;
	rval_m_1 = java_lang_Object_init_(sp);
	if (rval_m_1 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_1;
	}
	/* */
	i_val1 = lv_0;
	/* */
	i_val0 = lv_0;
	/* */
	lsb_int32 = i_val0;
	cobj = (unsigned char *) (pointer) i_val1;
	((struct _java_lang_VirtualMachineError_c *)HEAP_REF(cobj, unsigned char*)) -> cause_f = lsb_int32;
	/* */
	i_val1 = lv_0;
	/* */
	i_val0 = ((struct _staticClassFields_c *) classData)->UNASSIGNED_STACK_f;
	/* */
	lsb_int32 = i_val0;
	cobj = (unsigned char *) (pointer) i_val1;
	((struct _java_lang_VirtualMachineError_c *)HEAP_REF(cobj, unsigned char*)) -> stackTrace_f = lsb_int32;
	/* */
	i_val1 = lv_0;
	/* */
	i_val0 = ((struct _staticClassFields_c *) classData)->SUPPRESSED_SENTINEL_f;
	/* */
	lsb_int32 = i_val0;
	cobj = (unsigned char *) (pointer) i_val1;
	((struct _java_lang_VirtualMachineError_c *)HEAP_REF(cobj, unsigned char*)) -> suppressedExceptions_f = lsb_int32;
	/* */
	i_val1 = lv_0;
	/* */
	handleMonitorEnterExit((Object*) (pointer) i_val1, 1, sp, "");
	rval_m_40 = java_lang_Throwable_fillInStackTrace(sp, i_val1);
	if (rval_m_40 == -1) {
		rval_40 = *(int32*) sp;
		i_val1 = rval_40;
	} else {
		fp[0] = *sp;
		return rval_m_40;
	}
	/* */
	dummy = i_val1;
	/* */
	return -1;
}

/* Class: java.lang.Throwable */
/* Method: <init> */
/* <init>
 * param : java.lang.String
 * return: void
 */
int16 java_lang_Throwable_init__(int32 *fp, int32 lv_0, int32 lv_1) {
	int32* sp;
	int32 i_val1;
	int16 rval_m_1;
	int32 i_val0;
	unsigned char* cobj;
	int32 lsb_int32;
	int16 rval_m_40;
	int32 rval_40;
	sp = &fp[4]; /* make room for local VM state on the stack */
	/* */
	i_val1 = lv_0;
	/* */
	*sp = (int32) i_val1;
	sp++;
	sp -= 1;
	rval_m_1 = java_lang_Object_init_(sp);
	if (rval_m_1 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_1;
	}
	/* */
	i_val1 = lv_0;
	/* */
	i_val0 = lv_0;
	/* */
	lsb_int32 = i_val0;
	cobj = (unsigned char *) (pointer) i_val1;
	((struct _java_lang_VirtualMachineError_c *)HEAP_REF(cobj, unsigned char*)) -> cause_f = lsb_int32;
	/* */
	i_val1 = lv_0;
	/* */
	i_val0 = ((struct _staticClassFields_c *) classData)->UNASSIGNED_STACK_f;
	/* */
	lsb_int32 = i_val0;
	cobj = (unsigned char *) (pointer) i_val1;
	((struct _java_lang_VirtualMachineError_c *)HEAP_REF(cobj, unsigned char*)) -> stackTrace_f = lsb_int32;
	/* */
	i_val1 = lv_0;
	/* */
	i_val0 = ((struct _staticClassFields_c *) classData)->SUPPRESSED_SENTINEL_f;
	/* */
	lsb_int32 = i_val0;
	cobj = (unsigned char *) (pointer) i_val1;
	((struct _java_lang_VirtualMachineError_c *)HEAP_REF(cobj, unsigned char*)) -> suppressedExceptions_f = lsb_int32;
	/* */
	i_val1 = lv_0;
	/* */
	handleMonitorEnterExit((Object*) (pointer) i_val1, 1, sp, "");
	rval_m_40 = java_lang_Throwable_fillInStackTrace(sp, i_val1);
	if (rval_m_40 == -1) {
		rval_40 = *(int32*) sp;
		i_val1 = rval_40;
	} else {
		fp[0] = *sp;
		return rval_m_40;
	}
	/* */
	dummy = i_val1;
	/* */
	i_val1 = lv_0;
	/* */
	i_val0 = lv_1;
	/* */
	lsb_int32 = i_val0;
	cobj = (unsigned char *) (pointer) i_val1;
	((struct _java_lang_VirtualMachineError_c *)HEAP_REF(cobj, unsigned char*)) -> detailMessage_f = lsb_int32;
	/* */
	return -1;
}

/* Class: java.lang.Throwable */
/* Method: fillInStackTrace */
/* fillInStackTrace
 * param : 
 * return: java.lang.Throwable
 */
int16 java_lang_Throwable_fillInStackTrace(int32 *fp, int32 lv_0) {
	int32* sp;
	int32 i_val1;
	unsigned char* cobj;
	int32 i_val0;
	int16 rval_m_22;
	int32 lsb_int32;
	sp = &fp[3]; /* make room for local VM state on the stack */
	/* */
	i_val1 = lv_0;
	/* */
	cobj = (unsigned char *) (pointer) i_val1;
	i_val1 = ((struct _java_lang_VirtualMachineError_c *)HEAP_REF(cobj, unsigned char*)) -> stackTrace_f;
	/* */
	if (i_val1 != 0) {
		goto L20;
	}
	/* */
	i_val1 = lv_0;
	/* */
	cobj = (unsigned char *) (pointer) i_val1;
	i_val1 = ((struct _java_lang_VirtualMachineError_c *)HEAP_REF(cobj, unsigned char*)) -> backtrace_f;
	/* */
	if (i_val1 == 0) {
		goto L40;
	}
	/* */
	L20: i_val1 = lv_0;
	/* */
	i_val0 = 0;
	/* */
	*sp = (int32) i_val1;
	sp++;
	*sp = (int32) i_val0;
	sp++;
	sp -= 2;
	rval_m_22 = n_java_lang_Throwable_fillInStackTrace_(sp);
	if (rval_m_22 == -1) {
		sp += 1;
	} else {
		fp[0] = *sp;
		return rval_m_22;
	}
	/* */
	sp--;
	dummy = (int32)(*sp);
	/* */
	i_val1 = lv_0;
	/* */
	i_val0 = ((struct _staticClassFields_c *) classData)->UNASSIGNED_STACK_f;
	/* */
	lsb_int32 = i_val0;
	cobj = (unsigned char *) (pointer) i_val1;
	((struct _java_lang_VirtualMachineError_c *)HEAP_REF(cobj, unsigned char*)) -> stackTrace_f = lsb_int32;
	/* */
	L40: i_val1 = lv_0;
	/* */
	handleMonitorEnterExit((Object*) (pointer) lv_0, 0, fp + 1, "");
	*((int32*) fp) = i_val1;
	return -1;
}

/* Class: java.lang.Throwable */
/* Method: fillInStackTrace */
/* Class: java.lang.VirtualMachineError */
/* Method: <init> */
/* <init>
 * param : 
 * return: void
 */
int16 java_lang_VirtualMachineError_init_(int32 *fp) {
	int32* sp;
	int32 i_val0;
	int16 rval_m_1;
	int32 lv_0 = 0;
	lv_0 = (int32)(*(fp + 0));
	sp = &fp[3]; /* make room for local VM state on the stack */
	/* */
	i_val0 = lv_0;
	/* */
	*sp = (int32) i_val0;
	sp++;
	sp -= 1;
	rval_m_1 = java_lang_Error_init_(sp);
	if (rval_m_1 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_1;
	}
	/* */
	return -1;
}

/* Class: java.util.Arrays */
/* Method: <clinit> */
/* <clinit>
 * param : 
 * return: void
 */
int16 java_util_Arrays_clinit_(int32 *fp) {
	int32* sp;
	const ConstantInfo* constant_;
	int32 i_val0;
	int16 excep;
	unsigned short handler_pc;
	unsigned short pc;
	Object* i_obj;
	int16 rval_m_3;
	int8 msb_int8;
	int8 b_val0;
	int8 lsb_int8;
	sp = &fp[3]; /* make room for local VM state on the stack */
	/* */
	constant_ = &constants[20];
	i_val0 = (uint32) (pointer) getClass(constant_->value);
	/* */
	*sp = (int32) i_val0;
	sp++;
	sp -= 1;
	i_obj = (Object*) (pointer) * sp;
	if (i_obj == 0) {
		pc = 3;
		goto throwNullPointer;
	}
	rval_m_3 = n_java_lang_Class_desiredAssertionStatus(sp);
	if (rval_m_3 == -1) {
		sp += 1;
	} else {
		fp[0] = *sp;
		return rval_m_3;
	}
	/* */
	sp--;
	msb_int8 = (int8)(*sp);
	if (msb_int8 != 0) {
		goto L14;
	}
	/* */
	b_val0 = 1;
	/* */
	*sp = (int32) (int8) b_val0;
	sp++;
	goto L15;
	/* */
	L14: b_val0 = 0;
	/* */
	*sp = (int32) (int8) b_val0;
	sp++;
	L15: sp--;
	lsb_int8 = (int8)(*sp);
	((struct _staticClassFields_c *) classData)->_assertionsDisabled_f =
			lsb_int8;
	/* */
	return -1;
	throwNullPointer: initializeException(sp, JAVA_LANG_NULLPOINTEREXCEPTION,
			JAVA_LANG_NULLPOINTEREXCEPTION_INIT_);
	excep = JAVA_LANG_NULLPOINTEREXCEPTION;
	goto throwIt;
	throwIt: handler_pc = handleAthrow(&methods[64], excep, pc);
	sp++;
	switch (handler_pc) {
	case (unsigned short) -1: /* Not handled */
	default:
		fp[0] = *(sp - 1);
		return excep;
	}
}

/* Class: java.util.Arrays */
/* Method: <init> */
/* <init>
 * param : 
 * return: void
 */
int16 java_util_Arrays_init_(int32 *fp, int32 lv_0) {
	int32* sp;
	int32 i_val0;
	int16 rval_m_1;
	sp = &fp[3]; /* make room for local VM state on the stack */
	/* */
	i_val0 = lv_0;
	/* */
	*sp = (int32) i_val0;
	sp++;
	sp -= 1;
	rval_m_1 = java_lang_Object_init_(sp);
	if (rval_m_1 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_1;
	}
	/* */
	return -1;
}

/* Class: java.util.Arrays */
/* Method: copyOf */
/* copyOf
 * param : char[], int
 * return: char[]
 */
int16 java_util_Arrays_copyOf(int32 *fp) {
	int32* sp;
	int16 s_val5;
	Object* narray;
	uint16 count;
	unsigned short pc;
	int16 excep;
	unsigned short handler_pc;
	int32 i_val5;
	int32 i_val4;
	int32 i_val3;
	int32 i_val2;
	int32 i_val1;
	unsigned char* cobj;
	int32 i_val0;
	int16 rval_m_12;
	int32 rval_12;
	int16 rval_m_16;
	int32 lv_0 = 0;
	int32 lv_1 = 0;
	int32 lv_2 = 0;
	lv_0 = (int32)(*(fp + 0));
	lv_1 = (int32)(*(fp + 1));
	lv_2 = (int32)(*(fp + 2));
	sp = &fp[5]; /* make room for local VM state on the stack */
	/* */
	s_val5 = (int32) lv_1;
	/* */
	count = s_val5;
	narray = (Object*) createArray(1, (uint16) count FLASHARG((0)));
	if (narray == 0) {
		pc = 1;
		goto throwOutOfMemory;
	}
	i_val5 = (int32) (pointer) narray;
	/* */
	lv_2 = i_val5;
	/* */
	i_val5 = lv_0;
	/* */
	i_val4 = 0;
	/* */
	i_val3 = lv_2;
	/* */
	i_val2 = 0;
	/* */
	i_val1 = lv_0;
	/* */
	cobj = (unsigned char *) (pointer) i_val1;
	if (cobj == 0) {
		pc = 10;
		goto throwNullPointer;
	}
	i_val1 = *(uint16*) ((HEAP_REF(cobj, unsigned char*)) +sizeof(Object));
	/* */
	i_val0 = (int32) lv_1;
	/* */
	sp += 4;
	rval_m_12 = java_lang_Math_min(sp, i_val1, i_val0);
	if (rval_m_12 == -1) {
		rval_12 = *(int32*) sp;
		i_val1 = rval_12;
	} else {
		fp[0] = *sp;
		return rval_m_12;
	}
	sp -= 4;
	/* */
	*sp = (int32) i_val5;
	sp++;
	*sp = (int32) i_val4;
	sp++;
	*sp = (int32) i_val3;
	sp++;
	*sp = (int32) i_val2;
	sp++;
	*sp = (int32) i_val1;
	sp++;
	sp -= 5;
	rval_m_16 = n_java_lang_System_arraycopy(sp);
	if (rval_m_16 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_16;
	}
	/* */
	i_val5 = lv_2;
	/* */
	*((int32*) fp) = i_val5;
	return -1;
	throwNullPointer: initializeException(sp, JAVA_LANG_NULLPOINTEREXCEPTION,
			JAVA_LANG_NULLPOINTEREXCEPTION_INIT_);
	excep = JAVA_LANG_NULLPOINTEREXCEPTION;
	goto throwIt;
	throwOutOfMemory: initializeException(sp, JAVA_LANG_OUTOFMEMORYERROR,
			JAVA_LANG_OUTOFMEMORYERROR_INIT_);
	excep = JAVA_LANG_OUTOFMEMORYERROR;
	goto throwIt;
	throwIt: handler_pc = handleAthrow(&methods[66], excep, pc);
	sp++;
	switch (handler_pc) {
	case (unsigned short) -1: /* Not handled */
	default:
		fp[0] = *(sp - 1);
		return excep;
	}
}

/* Class: java.util.Arrays */
/* Method: copyOfRange */
/* copyOfRange
 * param : char[], int, int
 * return: char[]
 */
int16 java_util_Arrays_copyOfRange(int32 *fp, int32 lv_0, int32 lv_1,
		int32 lv_2) {
	int32* sp;
	int32 i_val5;
	int32 i_val4;
	int32 msb_int32;
	int32 lsb_int32;
	int16 rval_m_16;
	int32 hvm_arg_no_1_21;
	int16 rval_m_21;
	int32 rval_21;
	const ConstantInfo* constant_;
	int16 excep;
	unsigned short handler_pc;
	unsigned short pc;
	int16 rval_m_28;
	int32 rval_28;
	int16 rval_m_33;
	int32 rval_33;
	int16 rval_m_37;
	int32 rval_37;
	int32 hvm_arg_no_1_41;
	int16 rval_m_41;
	Object* ex_ception;
	int16 s_val5;
	Object* narray;
	uint16 count;
	int32 i_val3;
	int32 i_val2;
	int32 i_val1;
	unsigned char* cobj;
	int16 s_val1;
	int32 i_val0;
	int16 lsb_int16;
	int16 rval_m_62;
	int32 rval_62;
	int16 rval_m_66;
	int32 lv_3 = 0;
	int32 lv_4 = 0;
	sp = &fp[7]; /* make room for local VM state on the stack */
	/* */
	i_val5 = (int32) lv_2;
	/* */
	i_val4 = (int32) lv_1;
	/* */
	msb_int32 = i_val4;
	lsb_int32 = i_val5;
	lsb_int32 -= msb_int32;
	i_val5 = lsb_int32;
	/* */
	lv_3 = i_val5;
	/* */
	i_val5 = (int32) lv_3;
	/* */
	if (i_val5 >= 0) {
		goto L46;
	}
	/* */
	if (handleNewClassIndex(sp, 14) == 0) {
		fp[0] = *sp;
		return getClassIndex((Object*) (pointer) * sp);
	}
	sp++;
	/* */
	i_val5 = *(sp - 1);
	/* */
	*sp = (int32) i_val5;
	sp++;
	if (handleNewClassIndex(sp, 26) == 0) {
		fp[0] = *sp;
		return getClassIndex((Object*) (pointer) * sp);
	}
	sp++;
	/* */
	i_val5 = *(sp - 1);
	/* */
	rval_m_16 = java_lang_StringBuilder_init_(sp, i_val5);
	if (rval_m_16 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_16;
	}
	/* */
	i_val5 = (int32) lv_1;
	/* */
	sp--;
	hvm_arg_no_1_21 = (int32)(*sp);
	rval_m_21 = java_lang_StringBuilder_append_(sp, hvm_arg_no_1_21, i_val5);
	if (rval_m_21 == -1) {
		rval_21 = *(int32*) sp;
		i_val5 = rval_21;
	} else {
		fp[0] = *sp;
		return rval_m_21;
	}
	/* */
	constant_ = &constants[21];
#ifndef PRE_INITIALIZE_CONSTANTS
	initializeStringConstant(constant_, sp);
#endif
	i_val4 = (int32) (pointer) stringConstants[constant_->value >> 16];
	/* */
	if (i_val5 == 0) {
		pc = 28;
		goto throwNullPointer;
	}
	rval_m_28 = java_lang_StringBuilder_append___(sp, i_val5, i_val4);
	if (rval_m_28 == -1) {
		rval_28 = *(int32*) sp;
		i_val5 = rval_28;
	} else {
		fp[0] = *sp;
		return rval_m_28;
	}
	/* */
	i_val4 = (int32) lv_2;
	/* */
	if (i_val5 == 0) {
		pc = 33;
		goto throwNullPointer;
	}
	rval_m_33 = java_lang_StringBuilder_append_(sp, i_val5, i_val4);
	if (rval_m_33 == -1) {
		rval_33 = *(int32*) sp;
		i_val5 = rval_33;
	} else {
		fp[0] = *sp;
		return rval_m_33;
	}
	/* */
	if (i_val5 == 0) {
		pc = 37;
		goto throwNullPointer;
	}
	rval_m_37 = java_lang_StringBuilder_toString(sp, i_val5);
	if (rval_m_37 == -1) {
		rval_37 = *(int32*) sp;
		i_val5 = rval_37;
	} else {
		fp[0] = *sp;
		return rval_m_37;
	}
	/* */
	sp--;
	hvm_arg_no_1_41 = (int32)(*sp);
	rval_m_41 = java_lang_IllegalArgumentException_init_(sp, hvm_arg_no_1_41,
			i_val5);
	if (rval_m_41 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_41;
	}
	/* */
	ex_ception = (Object*) (pointer) * (sp - 1);
	excep = getClassIndex(ex_ception);
	pc = 45;
	sp--;
	goto throwIt;
	/* */
	L46: s_val5 = (int32) lv_3;
	/* */
	count = s_val5;
	narray = (Object*) createArray(1, (uint16) count FLASHARG((0)));
	if (narray == 0) {
		pc = 47;
		goto throwOutOfMemory;
	}
	i_val5 = (int32) (pointer) narray;
	/* */
	lv_4 = i_val5;
	/* */
	i_val5 = lv_0;
	/* */
	i_val4 = (int32) lv_1;
	/* */
	i_val3 = lv_4;
	/* */
	i_val2 = 0;
	/* */
	i_val1 = lv_0;
	/* */
	cobj = (unsigned char *) (pointer) i_val1;
	if (cobj == 0) {
		pc = 58;
		goto throwNullPointer;
	}
	s_val1 = *(uint16*) ((HEAP_REF(cobj, unsigned char*)) +sizeof(Object));
	/* */
	i_val0 = (int32) lv_1;
	/* */
	msb_int32 = i_val0;
	lsb_int16 = s_val1;
	lsb_int16 -= msb_int32;
	i_val1 = lsb_int16;
	/* */
	i_val0 = (int32) lv_3;
	/* */
	sp += 4;
	rval_m_62 = java_lang_Math_min(sp, i_val1, i_val0);
	if (rval_m_62 == -1) {
		rval_62 = *(int32*) sp;
		i_val1 = rval_62;
	} else {
		fp[0] = *sp;
		return rval_m_62;
	}
	sp -= 4;
	/* */
	*sp = (int32) i_val5;
	sp++;
	*sp = (int32) i_val4;
	sp++;
	*sp = (int32) i_val3;
	sp++;
	*sp = (int32) i_val2;
	sp++;
	*sp = (int32) i_val1;
	sp++;
	sp -= 5;
	rval_m_66 = n_java_lang_System_arraycopy(sp);
	if (rval_m_66 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_66;
	}
	/* */
	i_val5 = lv_4;
	/* */
	*((int32*) fp) = i_val5;
	return -1;
	throwNullPointer: initializeException(sp, JAVA_LANG_NULLPOINTEREXCEPTION,
			JAVA_LANG_NULLPOINTEREXCEPTION_INIT_);
	excep = JAVA_LANG_NULLPOINTEREXCEPTION;
	goto throwIt;
	throwOutOfMemory: initializeException(sp, JAVA_LANG_OUTOFMEMORYERROR,
			JAVA_LANG_OUTOFMEMORYERROR_INIT_);
	excep = JAVA_LANG_OUTOFMEMORYERROR;
	goto throwIt;
	throwIt: handler_pc = handleAthrow(&methods[67], excep, pc);
	sp++;
	switch (handler_pc) {
	case (unsigned short) -1: /* Not handled */
	default:
		fp[0] = *(sp - 1);
		return excep;
	}
}

/* Class: scjhelloworld.Delay */
/* Method: <init> */
/* <init>
 * param : int
 * return: void
 */
int16 scjhelloworld_Delay_init_(int32 *fp, int32 this, int32 i)
{
	int32* sp;
	int32 i_val1;
	int16 rval_m_1;
	int32 i_val0;
	unsigned char* cobj;
	int32 lsb_int32;
	sp = &fp[4]; /* make room for local VM state on the stack */
	/*	public Delay(int i){ */
	i_val1 = this;
	/*	public Delay(int i){ */
	*sp = (int32)i_val1;
	sp++;
	sp -= 1;
	rval_m_1 = java_lang_Object_init_(sp);
	if (rval_m_1 == -1) {
		;
	}
	else
	{
		fp[0] = *sp;
		return rval_m_1;
	}
	/*		this.delayTime = i; */
	i_val1 = this;
	/*		this.delayTime = i; */
	i_val0 = (int32)i;
	/*		this.delayTime = i; */
	lsb_int32 = i_val0;
	cobj = (unsigned char *) (pointer)i_val1;
	((struct _scjhelloworld_Delay_c *)HEAP_REF(cobj, unsigned char*)) -> delayTime_f = lsb_int32;
	/*	} */
	return -1;
}

/* Class: scjhelloworld.Delay */
/* Method: delay */
/* delay
 * param : 
 * return: void
 */
int16 scjhelloworld_Delay_delay(int32 *fp, int32 this)
{
	int32* sp;
	int32 i_val1;
	int32 i_val0;
	unsigned char* cobj;
	int16 rval_m_8;
	sp = &fp[3]; /* make room for local VM state on the stack */
	/*		this.delayTicks(delayTime); */
	i_val1 = this;
	/*		this.delayTicks(delayTime); */
	i_val0 = this;
	/*		this.delayTicks(delayTime); */
	cobj = (unsigned char *) (pointer)i_val0;
	i_val0 = ((struct _scjhelloworld_Delay_c *)HEAP_REF(cobj, unsigned char*)) -> delayTime_f;
	/*		this.delayTicks(delayTime); */
	*sp = (int32)i_val1;
	sp++;
	*sp = (int32)i_val0;
	sp++;
	sp -= 2;
	rval_m_8 = n_scjhelloworld_Delay_delayTicks(sp);
	if (rval_m_8 == -1) {
		;
	}
	else
	{
		fp[0] = *sp;
		return rval_m_8;
	}
	/*	} */
	return -1;
}

/* Class: scjhelloworld.Delay */
/* Method: delayTicks */
/* Class: scjhelloworld.Led */
/* Method: <init> */
/* <init>
 * param : int
 * return: void
 */
int16 scjhelloworld_Led_init_(int32 *fp, int32 this, int32 i)
{
	int32* sp;
	int32 i_val1;
	int16 rval_m_1;
	int32 i_val0;
	unsigned char* cobj;
	int32 lsb_int32;
	sp = &fp[4]; /* make room for local VM state on the stack */
	/*   public Led(int i){ */
	i_val1 = this;
	/*   public Led(int i){ */
	*sp = (int32)i_val1;
	sp++;
	sp -= 1;
	rval_m_1 = java_lang_Object_init_(sp);
	if (rval_m_1 == -1) {
		;
	}
	else
	{
		fp[0] = *sp;
		return rval_m_1;
	}
	/*      this.ledNumber = i; */
	i_val1 = this;
	/*      this.ledNumber = i; */
	i_val0 = (int32)i;
	/*      this.ledNumber = i; */
	lsb_int32 = i_val0;
	cobj = (unsigned char *) (pointer)i_val1;
	((struct _scjhelloworld_Led_c *)HEAP_REF(cobj, unsigned char*)) -> ledNumber_f = lsb_int32;
	/*   } */
	return -1;
}

/* Class: scjhelloworld.Led */
/* Method: ledStatus */
/* Class: scjhelloworld.Led */
/* Method: off */
/* off
 * param : 
 * return: void
 */
int16 scjhelloworld_Led_off(int32 *fp, int32 this)
{
	int32* sp;
	int32 i_val2;
	int32 i_val1;
	unsigned char* cobj;
	int32 i_val0;
	int16 rval_m_9;
	sp = &fp[3]; /* make room for local VM state on the stack */
	/*	   this.ledStatus(ledNumber, 0);		 */
	i_val2 = this;
	/*	   this.ledStatus(ledNumber, 0);		 */
	i_val1 = this;
	/*	   this.ledStatus(ledNumber, 0);		 */
	cobj = (unsigned char *) (pointer)i_val1;
	i_val1 = ((struct _scjhelloworld_Led_c *)HEAP_REF(cobj, unsigned char*)) -> ledNumber_f;
	/*	   this.ledStatus(ledNumber, 0);		 */
	i_val0 = 0;
	/*	   this.ledStatus(ledNumber, 0);		 */
	*sp = (int32)i_val2;
	sp++;
	*sp = (int32)i_val1;
	sp++;
	*sp = (int32)i_val0;
	sp++;
	sp -= 3;
	rval_m_9 = n_scjhelloworld_Led_ledStatus(sp);
	if (rval_m_9 == -1) {
		;
	}
	else
	{
		fp[0] = *sp;
		return rval_m_9;
	}
	/*   } */
	return -1;
}

/* Class: scjhelloworld.Led */
/* Method: on */
/* on
 * param : 
 * return: void
 */
int16 scjhelloworld_Led_on(int32 *fp, int32 this)
{
	int32* sp;
	int32 i_val2;
	int32 i_val1;
	unsigned char* cobj;
	int32 i_val0;
	int16 rval_m_9;
	sp = &fp[3]; /* make room for local VM state on the stack */
	/*      this.ledStatus(ledNumber, 1); */
	i_val2 = this;
	/*      this.ledStatus(ledNumber, 1); */
	i_val1 = this;
	/*      this.ledStatus(ledNumber, 1); */
	cobj = (unsigned char *) (pointer)i_val1;
	i_val1 = ((struct _scjhelloworld_Led_c *)HEAP_REF(cobj, unsigned char*)) -> ledNumber_f;
	/*      this.ledStatus(ledNumber, 1); */
	i_val0 = 1;
	/*      this.ledStatus(ledNumber, 1); */
	*sp = (int32)i_val2;
	sp++;
	*sp = (int32)i_val1;
	sp++;
	*sp = (int32)i_val0;
	sp++;
	sp -= 3;
	rval_m_9 = n_scjhelloworld_Led_ledStatus(sp);
	if (rval_m_9 == -1) {
		;
	}
	else
	{
		fp[0] = *sp;
		return rval_m_9;
	}
	/*   } */
	return -1;
}

/* Class: scjhelloworld.TestProcess$P1 */
/* Method: <init> */
/* <init>
 * param : 
 * return: void
 */
int16 scjhelloworld_TestProcess_P1_init_(int32 *fp, int32 this)
{
	int32* sp;
	int32 i_val0;
	int16 rval_m_1;
	sp = &fp[3]; /* make room for local VM state on the stack */
	/*   private static class P1 implements ProcessLogic { */
	i_val0 = this;
	/*   private static class P1 implements ProcessLogic { */
	*sp = (int32)i_val0;
	sp++;
	sp -= 1;
	rval_m_1 = java_lang_Object_init_(sp);
	if (rval_m_1 == -1) {
		;
	}
	else
	{
		fp[0] = *sp;
		return rval_m_1;
	}
	/*   private static class P1 implements ProcessLogic { */
	return -1;
}

/* Class: scjhelloworld.TestProcess$P1 */
/* Method: <init> */
/* <init>
 * param : scjhelloworld.TestProcess$P1
 * return: void
 */
int16 scjhelloworld_TestProcess_P1_init__(int32 *fp) {
	int32* sp;
	int32 i_val0;
	int16 rval_m_1;
	int32 lv_0 = 0;
	lv_0 = (int32)(*(fp + 0));
	sp = &fp[4]; /* make room for local VM state on the stack */
	/*   private static class P1 implements ProcessLogic { */
	i_val0 = lv_0;
	/*   private static class P1 implements ProcessLogic { */
	rval_m_1 = scjhelloworld_TestProcess_P1_init_(sp, i_val0);
	if (rval_m_1 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_1;
	}
	/*   private static class P1 implements ProcessLogic { */
	return -1;
}

/* Class: scjhelloworld.TestProcess$P1 */
/* Method: catchError */
/* catchError
 * param : java.lang.Throwable
 * return: void
 */
int16 scjhelloworld_TestProcess_P1_catchError(int32 *fp, int32 this, int32 t)
{
	int32* sp;
	int32 i_val2;
	int32 i_val1;
	int16 rval_m_5;
	int16 rval_m_15;
	int16 rval_m_25;
	int16 rval_m_36;
	int16 rval_m_43;
	int16 rval_m_48;
	int16 rval_m_54;
	int16 rval_m_60;
	const ConstantInfo* constant_;
	int16 rval_m_67;
	int32 ledB;
	int32 led1;
	int32 led2;
	int32 led3;
	sp = &fp[8]; /* make room for local VM state on the stack */
	/*         Led ledB = new Led(2); */
	if (handleNewClassIndex(sp, 33) == 0) {
		fp[0] = *sp;
		return getClassIndex((Object*) (pointer) *sp);
	}
	sp++;
	/*         Led ledB = new Led(2); */
	i_val2 = *(sp - 1);
	/*         Led ledB = new Led(2); */
	i_val1 = 2;
	/*         Led ledB = new Led(2); */
	rval_m_5 = scjhelloworld_Led_init_(sp, i_val2, i_val1);
	if (rval_m_5 == -1) {
		;
	}
	else
	{
		fp[0] = *sp;
		return rval_m_5;
	}
	/*         Led ledB = new Led(2); */
	sp--;
	ledB = (int32)(*sp);
	/*         Led led1 = new Led(3); */
	if (handleNewClassIndex(sp, 33) == 0) {
		fp[0] = *sp;
		return getClassIndex((Object*) (pointer) *sp);
	}
	sp++;
	/*         Led led1 = new Led(3); */
	i_val2 = *(sp - 1);
	/*         Led led1 = new Led(3); */
	i_val1 = 3;
	/*         Led led1 = new Led(3); */
	rval_m_15 = scjhelloworld_Led_init_(sp, i_val2, i_val1);
	if (rval_m_15 == -1) {
		;
	}
	else
	{
		fp[0] = *sp;
		return rval_m_15;
	}
	/*         Led led1 = new Led(3); */
	sp--;
	led1 = (int32)(*sp);
	/*         Led led2 = new Led(4); */
	if (handleNewClassIndex(sp, 33) == 0) {
		fp[0] = *sp;
		return getClassIndex((Object*) (pointer) *sp);
	}
	sp++;
	/*         Led led2 = new Led(4); */
	i_val2 = *(sp - 1);
	/*         Led led2 = new Led(4); */
	i_val1 = 4;
	/*         Led led2 = new Led(4); */
	rval_m_25 = scjhelloworld_Led_init_(sp, i_val2, i_val1);
	if (rval_m_25 == -1) {
		;
	}
	else
	{
		fp[0] = *sp;
		return rval_m_25;
	}
	/*         Led led2 = new Led(4); */
	sp--;
	led2 = (int32)(*sp);
	/*         Led led3 = new Led(5); */
	if (handleNewClassIndex(sp, 33) == 0) {
		fp[0] = *sp;
		return getClassIndex((Object*) (pointer) *sp);
	}
	sp++;
	/*         Led led3 = new Led(5); */
	i_val2 = *(sp - 1);
	/*         Led led3 = new Led(5); */
	i_val1 = 5;
	/*         Led led3 = new Led(5); */
	rval_m_36 = scjhelloworld_Led_init_(sp, i_val2, i_val1);
	if (rval_m_36 == -1) {
		;
	}
	else
	{
		fp[0] = *sp;
		return rval_m_36;
	}
	/*         Led led3 = new Led(5); */
	sp--;
	led3 = (int32)(*sp);
	/*         ledB.off(); */
	i_val2 = ledB;
	/*         ledB.off(); */
	rval_m_43 = scjhelloworld_Led_off(sp, i_val2);
	if (rval_m_43 == -1) {
		;
	}
	else
	{
		fp[0] = *sp;
		return rval_m_43;
	}
	/*         led1.on(); */
	i_val2 = led1;
	/*         led1.on(); */
	rval_m_48 = scjhelloworld_Led_on(sp, i_val2);
	if (rval_m_48 == -1) {
		;
	}
	else
	{
		fp[0] = *sp;
		return rval_m_48;
	}
	/*         led2.off(); */
	i_val2 = led2;
	/*         led2.off(); */
	rval_m_54 = scjhelloworld_Led_off(sp, i_val2);
	if (rval_m_54 == -1) {
		;
	}
	else
	{
		fp[0] = *sp;
		return rval_m_54;
	}
	/*         led3.off(); */
	i_val2 = led3;
	/*         led3.off(); */
	rval_m_60 = scjhelloworld_Led_off(sp, i_val2);
	if (rval_m_60 == -1) {
		;
	}
	else
	{
		fp[0] = *sp;
		return rval_m_60;
	}
	/*    	 devices.Console.println("Error en Proceso 1."); */
	constant_ = &constants[22];
#ifndef PRE_INITIALIZE_CONSTANTS
	initializeStringConstant(constant_, sp);
#endif
	i_val2 = (int32) (pointer) stringConstants[constant_->value >> 16];
	/*    	 devices.Console.println("Error en Proceso 1."); */
	rval_m_67 = devices_Console_println(sp, i_val2);
	if (rval_m_67 == -1) {
		;
	}
	else
	{
		fp[0] = *sp;
		return rval_m_67;
	}
	/*      } */
	return -1;
}

/* Class: scjhelloworld.TestProcess$P1 */
/* Method: run */
/* run
 * param : 
 * return: void
 */
int16 scjhelloworld_TestProcess_P1_run(int32 *fp) {
	int32* sp;
	int32 i_val2;
	int32 i_val1;
	int16 rval_m_5;
	int16 rval_m_15;
	int16 rval_m_25;
	int16 rval_m_35;
	int16 rval_m_42;
	int16 rval_m_47;
	int16 rval_m_52;
	int16 rval_m_58;
	int16 rval_m_69;
	int16 rval_m_77;
	const ConstantInfo* constant_;
	int16 rval_m_84;
	int16 rval_m_88;
	int16 rval_m_92;
	int32 hvm_arg_no_2_96;
	int32 hvm_arg_no_1_96;
	int16 excep;
	unsigned short handler_pc;
	unsigned short pc;
	int16 rval_m_96;
	int32 ledB;
	int32 led1;
	int32 led2;
	int32 led3;
	int32 delay1s;
	ledB = (int32)(*(fp + 1));
	led1 = (int32)(*(fp + 2));
	led2 = (int32)(*(fp + 3));
	led3 = (int32)(*(fp + 4));
	delay1s = (int32)(*(fp + 5));
	sp = &fp[8]; /* make room for local VM state on the stack */
	/*         Led ledB = new Led(2); */
	if (handleNewClassIndex(sp, 33) == 0) {
		fp[0] = *sp;
		return getClassIndex((Object*) (pointer) * sp);
	}
	sp++;
	/*         Led ledB = new Led(2); */
	i_val2 = *(sp - 1);
	/*         Led ledB = new Led(2); */
	i_val1 = 2;
	/*         Led ledB = new Led(2); */
	rval_m_5 = scjhelloworld_Led_init_(sp, i_val2, i_val1);
	if (rval_m_5 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_5;
	}
	/*         Led ledB = new Led(2); */
	sp--;
	ledB = (int32)(*sp);
	/*         Led led1 = new Led(3); */
	if (handleNewClassIndex(sp, 33) == 0) {
		fp[0] = *sp;
		return getClassIndex((Object*) (pointer) * sp);
	}
	sp++;
	/*         Led led1 = new Led(3); */
	i_val2 = *(sp - 1);
	/*         Led led1 = new Led(3); */
	i_val1 = 3;
	/*         Led led1 = new Led(3); */
	rval_m_15 = scjhelloworld_Led_init_(sp, i_val2, i_val1);
	if (rval_m_15 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_15;
	}
	/*         Led led1 = new Led(3); */
	sp--;
	led1 = (int32)(*sp);
	/*         Led led2 = new Led(4); */
	if (handleNewClassIndex(sp, 33) == 0) {
		fp[0] = *sp;
		return getClassIndex((Object*) (pointer) * sp);
	}
	sp++;
	/*         Led led2 = new Led(4); */
	i_val2 = *(sp - 1);
	/*         Led led2 = new Led(4); */
	i_val1 = 4;
	/*         Led led2 = new Led(4); */
	rval_m_25 = scjhelloworld_Led_init_(sp, i_val2, i_val1);
	if (rval_m_25 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_25;
	}
	/*         Led led2 = new Led(4); */
	sp--;
	led2 = (int32)(*sp);
	/*         Led led3 = new Led(5); */
	if (handleNewClassIndex(sp, 33) == 0) {
		fp[0] = *sp;
		return getClassIndex((Object*) (pointer) * sp);
	}
	sp++;
	/*         Led led3 = new Led(5); */
	i_val2 = *(sp - 1);
	/*         Led led3 = new Led(5); */
	i_val1 = 5;
	/*         Led led3 = new Led(5); */
	rval_m_35 = scjhelloworld_Led_init_(sp, i_val2, i_val1);
	if (rval_m_35 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_35;
	}
	/*         Led led3 = new Led(5); */
	sp--;
	led3 = (int32)(*sp);
	/*         ledB.on(); */
	i_val2 = ledB;
	/*         ledB.on(); */
	rval_m_42 = scjhelloworld_Led_on(sp, i_val2);
	if (rval_m_42 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_42;
	}
	/*         led1.off(); */
	i_val2 = led1;
	/*         led1.off(); */
	rval_m_47 = scjhelloworld_Led_off(sp, i_val2);
	if (rval_m_47 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_47;
	}
	/*         led2.off(); */
	i_val2 = led2;
	/*         led2.off(); */
	rval_m_52 = scjhelloworld_Led_off(sp, i_val2);
	if (rval_m_52 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_52;
	}
	/*         led3.off(); */
	i_val2 = led3;
	/*         led3.off(); */
	rval_m_58 = scjhelloworld_Led_off(sp, i_val2);
	if (rval_m_58 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_58;
	}
	/*         Delay delay1s = new Delay(1000); */
	if (handleNewClassIndex(sp, 32) == 0) {
		fp[0] = *sp;
		return getClassIndex((Object*) (pointer) * sp);
	}
	sp++;
	/*         Delay delay1s = new Delay(1000); */
	i_val2 = *(sp - 1);
	/*         Delay delay1s = new Delay(1000); */
	i_val1 = 1000;
	/*         Delay delay1s = new Delay(1000); */
	rval_m_69 = scjhelloworld_Delay_init_(sp, i_val2, i_val1);
	if (rval_m_69 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_69;
	}
	/*         Delay delay1s = new Delay(1000); */
	sp--;
	delay1s = (int32)(*sp);
	/*         delay1s.delay(); */
	i_val2 = delay1s;
	/*         delay1s.delay(); */
	rval_m_77 = scjhelloworld_Delay_delay(sp, i_val2);
	if (rval_m_77 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_77;
	}
	/*    	 devices.Console.println("Proceso 1. Transferenica a Proceso 2."); */
	constant_ = &constants[23];
#ifndef PRE_INITIALIZE_CONSTANTS
	initializeStringConstant(constant_, sp);
#endif
	i_val2 = (int32) (pointer) stringConstants[constant_->value >> 16];
	/*    	 devices.Console.println("Proceso 1. Transferenica a Proceso 2."); */
	rval_m_84 = devices_Console_println(sp, i_val2);
	if (rval_m_84 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_84;
	}
	/*    	 p1.transferTo(p2); */
	sp -= 0;
	rval_m_88 = scjhelloworld_TestProcess_access_0(sp);
	if (rval_m_88 == -1) {
		sp += 1;
	} else {
		fp[0] = *sp;
		return rval_m_88;
	}
	/*    	 p1.transferTo(p2); */
	sp -= 0;
	rval_m_92 = scjhelloworld_TestProcess_access_1(sp);
	if (rval_m_92 == -1) {
		sp += 1;
	} else {
		fp[0] = *sp;
		return rval_m_92;
	}
	/*    	 p1.transferTo(p2); */
	sp--;
	hvm_arg_no_2_96 = (int32)(*sp);
	sp--;
	hvm_arg_no_1_96 = (int32)(*sp);
	if (hvm_arg_no_1_96 == 0) {
		pc = 96;
		goto throwNullPointer;
	}
	rval_m_96 = vm_Process_transferTo(sp, hvm_arg_no_1_96, hvm_arg_no_2_96);
	if (rval_m_96 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_96;
	}
	/*      } */
	return -1;
	throwNullPointer: initializeException(sp, JAVA_LANG_NULLPOINTEREXCEPTION,
			JAVA_LANG_NULLPOINTEREXCEPTION_INIT_);
	excep = JAVA_LANG_NULLPOINTEREXCEPTION;
	goto throwIt;
	throwIt: handler_pc = handleAthrow(&methods[78], excep, pc);
	sp++;
	switch (handler_pc) {
	case (unsigned short) -1: /* Not handled */
	default:
		fp[0] = *(sp - 1);
		return excep;
	}
}

/* Class: scjhelloworld.TestProcess$P2 */
/* Method: <init> */
/* <init>
 * param : 
 * return: void
 */
int16 scjhelloworld_TestProcess_P2_init_(int32 *fp, int32 this)
{
	int32* sp;
	int32 i_val0;
	int16 rval_m_1;
	sp = &fp[3]; /* make room for local VM state on the stack */
	/*   private static class P2 implements ProcessLogic { */
	i_val0 = this;
	/*   private static class P2 implements ProcessLogic { */
	*sp = (int32)i_val0;
	sp++;
	sp -= 1;
	rval_m_1 = java_lang_Object_init_(sp);
	if (rval_m_1 == -1) {
		;
	}
	else
	{
		fp[0] = *sp;
		return rval_m_1;
	}
	/*   private static class P2 implements ProcessLogic { */
	return -1;
}

/* Class: scjhelloworld.TestProcess$P2 */
/* Method: <init> */
/* <init>
 * param : scjhelloworld.TestProcess$P2
 * return: void
 */
int16 scjhelloworld_TestProcess_P2_init__(int32 *fp) {
	int32* sp;
	int32 i_val0;
	int16 rval_m_1;
	int32 lv_0 = 0;
	lv_0 = (int32)(*(fp + 0));
	sp = &fp[4]; /* make room for local VM state on the stack */
	/*   private static class P2 implements ProcessLogic { */
	i_val0 = lv_0;
	/*   private static class P2 implements ProcessLogic { */
	rval_m_1 = scjhelloworld_TestProcess_P2_init_(sp, i_val0);
	if (rval_m_1 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_1;
	}
	/*   private static class P2 implements ProcessLogic { */
	return -1;
}

/* Class: scjhelloworld.TestProcess$P2 */
/* Method: catchError */
/* catchError
 * param : java.lang.Throwable
 * return: void
 */
int16 scjhelloworld_TestProcess_P2_catchError(int32 *fp, int32 this, int32 t)
{
	int32* sp;
	int32 i_val2;
	int32 i_val1;
	int16 rval_m_5;
	int16 rval_m_15;
	int16 rval_m_25;
	int16 rval_m_36;
	int16 rval_m_43;
	int16 rval_m_48;
	int16 rval_m_54;
	int16 rval_m_60;
	const ConstantInfo* constant_;
	int16 rval_m_67;
	int32 ledB;
	int32 led1;
	int32 led2;
	int32 led3;
	sp = &fp[8]; /* make room for local VM state on the stack */
	/*         Led ledB = new Led(2); */
	if (handleNewClassIndex(sp, 33) == 0) {
		fp[0] = *sp;
		return getClassIndex((Object*) (pointer) *sp);
	}
	sp++;
	/*         Led ledB = new Led(2); */
	i_val2 = *(sp - 1);
	/*         Led ledB = new Led(2); */
	i_val1 = 2;
	/*         Led ledB = new Led(2); */
	rval_m_5 = scjhelloworld_Led_init_(sp, i_val2, i_val1);
	if (rval_m_5 == -1) {
		;
	}
	else
	{
		fp[0] = *sp;
		return rval_m_5;
	}
	/*         Led ledB = new Led(2); */
	sp--;
	ledB = (int32)(*sp);
	/*         Led led1 = new Led(3); */
	if (handleNewClassIndex(sp, 33) == 0) {
		fp[0] = *sp;
		return getClassIndex((Object*) (pointer) *sp);
	}
	sp++;
	/*         Led led1 = new Led(3); */
	i_val2 = *(sp - 1);
	/*         Led led1 = new Led(3); */
	i_val1 = 3;
	/*         Led led1 = new Led(3); */
	rval_m_15 = scjhelloworld_Led_init_(sp, i_val2, i_val1);
	if (rval_m_15 == -1) {
		;
	}
	else
	{
		fp[0] = *sp;
		return rval_m_15;
	}
	/*         Led led1 = new Led(3); */
	sp--;
	led1 = (int32)(*sp);
	/*         Led led2 = new Led(4); */
	if (handleNewClassIndex(sp, 33) == 0) {
		fp[0] = *sp;
		return getClassIndex((Object*) (pointer) *sp);
	}
	sp++;
	/*         Led led2 = new Led(4); */
	i_val2 = *(sp - 1);
	/*         Led led2 = new Led(4); */
	i_val1 = 4;
	/*         Led led2 = new Led(4); */
	rval_m_25 = scjhelloworld_Led_init_(sp, i_val2, i_val1);
	if (rval_m_25 == -1) {
		;
	}
	else
	{
		fp[0] = *sp;
		return rval_m_25;
	}
	/*         Led led2 = new Led(4); */
	sp--;
	led2 = (int32)(*sp);
	/*         Led led3 = new Led(5); */
	if (handleNewClassIndex(sp, 33) == 0) {
		fp[0] = *sp;
		return getClassIndex((Object*) (pointer) *sp);
	}
	sp++;
	/*         Led led3 = new Led(5); */
	i_val2 = *(sp - 1);
	/*         Led led3 = new Led(5); */
	i_val1 = 5;
	/*         Led led3 = new Led(5); */
	rval_m_36 = scjhelloworld_Led_init_(sp, i_val2, i_val1);
	if (rval_m_36 == -1) {
		;
	}
	else
	{
		fp[0] = *sp;
		return rval_m_36;
	}
	/*         Led led3 = new Led(5); */
	sp--;
	led3 = (int32)(*sp);
	/*         ledB.off(); */
	i_val2 = ledB;
	/*         ledB.off(); */
	rval_m_43 = scjhelloworld_Led_off(sp, i_val2);
	if (rval_m_43 == -1) {
		;
	}
	else
	{
		fp[0] = *sp;
		return rval_m_43;
	}
	/*         led1.off(); */
	i_val2 = led1;
	/*         led1.off(); */
	rval_m_48 = scjhelloworld_Led_off(sp, i_val2);
	if (rval_m_48 == -1) {
		;
	}
	else
	{
		fp[0] = *sp;
		return rval_m_48;
	}
	/*         led2.off(); */
	i_val2 = led2;
	/*         led2.off(); */
	rval_m_54 = scjhelloworld_Led_off(sp, i_val2);
	if (rval_m_54 == -1) {
		;
	}
	else
	{
		fp[0] = *sp;
		return rval_m_54;
	}
	/*         led3.on(); */
	i_val2 = led3;
	/*         led3.on(); */
	rval_m_60 = scjhelloworld_Led_on(sp, i_val2);
	if (rval_m_60 == -1) {
		;
	}
	else
	{
		fp[0] = *sp;
		return rval_m_60;
	}
	/*    	 devices.Console.println("Error en Proceso 2."); */
	constant_ = &constants[24];
#ifndef PRE_INITIALIZE_CONSTANTS
	initializeStringConstant(constant_, sp);
#endif
	i_val2 = (int32) (pointer) stringConstants[constant_->value >> 16];
	/*    	 devices.Console.println("Error en Proceso 2."); */
	rval_m_67 = devices_Console_println(sp, i_val2);
	if (rval_m_67 == -1) {
		;
	}
	else
	{
		fp[0] = *sp;
		return rval_m_67;
	}
	/*      } */
	return -1;
}

/* Class: scjhelloworld.TestProcess$P2 */
/* Method: run */
/* run
 * param : 
 * return: void
 */
int16 scjhelloworld_TestProcess_P2_run(int32 *fp) {
	int32* sp;
	int32 i_val2;
	int32 i_val1;
	int16 rval_m_5;
	int16 rval_m_15;
	int16 rval_m_25;
	int16 rval_m_35;
	int16 rval_m_42;
	int16 rval_m_47;
	int16 rval_m_52;
	int16 rval_m_58;
	int16 rval_m_69;
	int16 rval_m_77;
	const ConstantInfo* constant_;
	int16 rval_m_84;
	int16 rval_m_88;
	int16 rval_m_92;
	int32 hvm_arg_no_2_96;
	int32 hvm_arg_no_1_96;
	int16 excep;
	unsigned short handler_pc;
	unsigned short pc;
	int16 rval_m_96;
	int32 ledB;
	int32 led1;
	int32 led2;
	int32 led3;
	int32 delay1s;
	ledB = (int32)(*(fp + 1));
	led1 = (int32)(*(fp + 2));
	led2 = (int32)(*(fp + 3));
	led3 = (int32)(*(fp + 4));
	delay1s = (int32)(*(fp + 5));
	sp = &fp[8]; /* make room for local VM state on the stack */
	/*         Led ledB = new Led(2); */
	if (handleNewClassIndex(sp, 33) == 0) {
		fp[0] = *sp;
		return getClassIndex((Object*) (pointer) * sp);
	}
	sp++;
	/*         Led ledB = new Led(2); */
	i_val2 = *(sp - 1);
	/*         Led ledB = new Led(2); */
	i_val1 = 2;
	/*         Led ledB = new Led(2); */
	rval_m_5 = scjhelloworld_Led_init_(sp, i_val2, i_val1);
	if (rval_m_5 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_5;
	}
	/*         Led ledB = new Led(2); */
	sp--;
	ledB = (int32)(*sp);
	/*         Led led1 = new Led(3); */
	if (handleNewClassIndex(sp, 33) == 0) {
		fp[0] = *sp;
		return getClassIndex((Object*) (pointer) * sp);
	}
	sp++;
	/*         Led led1 = new Led(3); */
	i_val2 = *(sp - 1);
	/*         Led led1 = new Led(3); */
	i_val1 = 3;
	/*         Led led1 = new Led(3); */
	rval_m_15 = scjhelloworld_Led_init_(sp, i_val2, i_val1);
	if (rval_m_15 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_15;
	}
	/*         Led led1 = new Led(3); */
	sp--;
	led1 = (int32)(*sp);
	/*         Led led2 = new Led(4); */
	if (handleNewClassIndex(sp, 33) == 0) {
		fp[0] = *sp;
		return getClassIndex((Object*) (pointer) * sp);
	}
	sp++;
	/*         Led led2 = new Led(4); */
	i_val2 = *(sp - 1);
	/*         Led led2 = new Led(4); */
	i_val1 = 4;
	/*         Led led2 = new Led(4); */
	rval_m_25 = scjhelloworld_Led_init_(sp, i_val2, i_val1);
	if (rval_m_25 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_25;
	}
	/*         Led led2 = new Led(4); */
	sp--;
	led2 = (int32)(*sp);
	/*         Led led3 = new Led(5); */
	if (handleNewClassIndex(sp, 33) == 0) {
		fp[0] = *sp;
		return getClassIndex((Object*) (pointer) * sp);
	}
	sp++;
	/*         Led led3 = new Led(5); */
	i_val2 = *(sp - 1);
	/*         Led led3 = new Led(5); */
	i_val1 = 5;
	/*         Led led3 = new Led(5); */
	rval_m_35 = scjhelloworld_Led_init_(sp, i_val2, i_val1);
	if (rval_m_35 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_35;
	}
	/*         Led led3 = new Led(5); */
	sp--;
	led3 = (int32)(*sp);
	/*         ledB.off(); */
	i_val2 = ledB;
	/*         ledB.off(); */
	rval_m_42 = scjhelloworld_Led_off(sp, i_val2);
	if (rval_m_42 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_42;
	}
	/*         led1.off(); */
	i_val2 = led1;
	/*         led1.off(); */
	rval_m_47 = scjhelloworld_Led_off(sp, i_val2);
	if (rval_m_47 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_47;
	}
	/*         led2.on(); */
	i_val2 = led2;
	/*         led2.on(); */
	rval_m_52 = scjhelloworld_Led_on(sp, i_val2);
	if (rval_m_52 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_52;
	}
	/*         led3.off(); */
	i_val2 = led3;
	/*         led3.off(); */
	rval_m_58 = scjhelloworld_Led_off(sp, i_val2);
	if (rval_m_58 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_58;
	}
	/*         Delay delay1s = new Delay(1000); */
	if (handleNewClassIndex(sp, 32) == 0) {
		fp[0] = *sp;
		return getClassIndex((Object*) (pointer) * sp);
	}
	sp++;
	/*         Delay delay1s = new Delay(1000); */
	i_val2 = *(sp - 1);
	/*         Delay delay1s = new Delay(1000); */
	i_val1 = 1000;
	/*         Delay delay1s = new Delay(1000); */
	rval_m_69 = scjhelloworld_Delay_init_(sp, i_val2, i_val1);
	if (rval_m_69 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_69;
	}
	/*         Delay delay1s = new Delay(1000); */
	sp--;
	delay1s = (int32)(*sp);
	/*         delay1s.delay(); */
	i_val2 = delay1s;
	/*         delay1s.delay(); */
	rval_m_77 = scjhelloworld_Delay_delay(sp, i_val2);
	if (rval_m_77 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_77;
	}
	/*    	 devices.Console.println("Proceso 2. Transferenica a Proceso Principal."); */
	constant_ = &constants[25];
#ifndef PRE_INITIALIZE_CONSTANTS
	initializeStringConstant(constant_, sp);
#endif
	i_val2 = (int32) (pointer) stringConstants[constant_->value >> 16];
	/*    	 devices.Console.println("Proceso 2. Transferenica a Proceso Principal."); */
	rval_m_84 = devices_Console_println(sp, i_val2);
	if (rval_m_84 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_84;
	}
	/*         p2.transferTo(mainProcess); */
	sp -= 0;
	rval_m_88 = scjhelloworld_TestProcess_access_1(sp);
	if (rval_m_88 == -1) {
		sp += 1;
	} else {
		fp[0] = *sp;
		return rval_m_88;
	}
	/*         p2.transferTo(mainProcess); */
	sp -= 0;
	rval_m_92 = scjhelloworld_TestProcess_access_2(sp);
	if (rval_m_92 == -1) {
		sp += 1;
	} else {
		fp[0] = *sp;
		return rval_m_92;
	}
	/*         p2.transferTo(mainProcess); */
	sp--;
	hvm_arg_no_2_96 = (int32)(*sp);
	sp--;
	hvm_arg_no_1_96 = (int32)(*sp);
	if (hvm_arg_no_1_96 == 0) {
		pc = 96;
		goto throwNullPointer;
	}
	rval_m_96 = vm_Process_transferTo(sp, hvm_arg_no_1_96, hvm_arg_no_2_96);
	if (rval_m_96 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_96;
	}
	/*      } */
	return -1;
	throwNullPointer: initializeException(sp, JAVA_LANG_NULLPOINTEREXCEPTION,
			JAVA_LANG_NULLPOINTEREXCEPTION_INIT_);
	excep = JAVA_LANG_NULLPOINTEREXCEPTION;
	goto throwIt;
	throwIt: handler_pc = handleAthrow(&methods[82], excep, pc);
	sp++;
	switch (handler_pc) {
	case (unsigned short) -1: /* Not handled */
	default:
		fp[0] = *(sp - 1);
		return excep;
	}
}

/* Class: scjhelloworld.TestProcess */
/* Method: access$0 */
/* access$0
 * param : 
 * return: vm.Process
 */
int16 scjhelloworld_TestProcess_access_0(int32 *fp) {
	int32 i_val0;
	/*   private static Process p1; */
	i_val0 = ((struct _staticClassFields_c *) classData)->p1_f;
	/*   private static Process p1; */
	*((int32*) fp) = i_val0;
	return -1;
}

/* Class: scjhelloworld.TestProcess */
/* Method: access$1 */
/* access$1
 * param : 
 * return: vm.Process
 */
int16 scjhelloworld_TestProcess_access_1(int32 *fp) {
	int32 i_val0;
	/*   private static Process p2; */
	i_val0 = ((struct _staticClassFields_c *) classData)->p2_f;
	/*   private static Process p2; */
	*((int32*) fp) = i_val0;
	return -1;
}

/* Class: scjhelloworld.TestProcess */
/* Method: access$2 */
/* access$2
 * param : 
 * return: vm.Process
 */
int16 scjhelloworld_TestProcess_access_2(int32 *fp) {
	int32 i_val0;
	/*   private static Process mainProcess; */
	i_val0 = ((struct _staticClassFields_c *) classData)->mainProcess_f;
	/*   private static Process mainProcess; */
	*((int32*) fp) = i_val0;
	return -1;
}

/* Class: scjhelloworld.TestProcess */
/* Method: main */
/* main
 * param : java.lang.String[]
 * return: void
 */
int16 scjhelloworld_TestProcess_main(int32 *fp, int32 args) {
	int32* sp;
	const ConstantInfo* constant_;
	int32 i_val4;
	int16 rval_m_3;
	int32 i_val3;
	int16 rval_m_16;
	int16 s_val4;
	Object* narray;
	uint16 count;
	unsigned short pc;
	int16 excep;
	unsigned short handler_pc;
	int32 hvm_arg_no_2_26;
	int32 hvm_arg_no_1_26;
	int16 rval_m_26;
	int32 lsb_int32;
	int16 rval_m_45;
	int32 hvm_arg_no_2_55;
	int32 hvm_arg_no_1_55;
	int16 rval_m_55;
	int16 rval_m_70;
	int16 rval_m_80;
	int16 rval_m_90;
	int16 rval_m_100;
	int16 rval_m_107;
	int16 rval_m_112;
	int16 rval_m_117;
	int16 rval_m_123;
	int16 rval_m_134;
	int16 rval_m_142;
	int32 i_val2;
	int16 rval_m_152;
	int16 rval_m_168;
	int16 rval_m_178;
	int16 rval_m_194;
	int16 rval_m_201;
	int16 rval_m_206;
	int16 rval_m_211;
	int16 rval_m_216;
	int16 rval_m_222;
	int32 ledB;
	int32 led1;
	int32 led2;
	int32 led3;
	int32 delay1s;
	sp = &fp[8]; /* make room for local VM state on the stack */
	/*	  devices.Console.println("Inicio de Proceso Principal."); */
	constant_ = &constants[26];
#ifndef PRE_INITIALIZE_CONSTANTS
	initializeStringConstant(constant_, sp);
#endif
	i_val4 = (int32) (pointer) stringConstants[constant_->value >> 16];
	/*	  devices.Console.println("Inicio de Proceso Principal."); */
	rval_m_3 = devices_Console_println(sp, i_val4);
	if (rval_m_3 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_3;
	}
	/*      p1 = new vm.Process(new P1(), new int[512]); */
	if (handleNewClassIndex(sp, 39) == 0) {
		fp[0] = *sp;
		return getClassIndex((Object*) (pointer) * sp);
	}
	sp++;
	/*      p1 = new vm.Process(new P1(), new int[512]); */
	i_val4 = *(sp - 1);
	/*      p1 = new vm.Process(new P1(), new int[512]); */
	*sp = (int32) i_val4;
	sp++;
	if (handleNewClassIndex(sp, 35) == 0) {
		fp[0] = *sp;
		return getClassIndex((Object*) (pointer) * sp);
	}
	sp++;
	/*      p1 = new vm.Process(new P1(), new int[512]); */
	i_val4 = *(sp - 1);
	/*      p1 = new vm.Process(new P1(), new int[512]); */
	i_val3 = 0;
	/*      p1 = new vm.Process(new P1(), new int[512]); */
	*sp = (int32) i_val4;
	sp++;
	*sp = (int32) i_val3;
	sp++;
	sp -= 2;
	rval_m_16 = scjhelloworld_TestProcess_P1_init__(sp);
	if (rval_m_16 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_16;
	}
	/*      p1 = new vm.Process(new P1(), new int[512]); */
	s_val4 = 512;
	/*      p1 = new vm.Process(new P1(), new int[512]); */
	count = s_val4;
	narray = (Object*) createArray(2, (uint16) count FLASHARG((0)));
	if (narray == 0) {
		pc = 23;
		goto throwOutOfMemory;
	}
	i_val4 = (int32) (pointer) narray;
	/*      p1 = new vm.Process(new P1(), new int[512]); */
	sp--;
	hvm_arg_no_2_26 = (int32)(*sp);
	sp--;
	hvm_arg_no_1_26 = (int32)(*sp);
	rval_m_26 = vm_Process_init_(sp, hvm_arg_no_1_26, hvm_arg_no_2_26, i_val4);
	if (rval_m_26 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_26;
	}
	/*      p1 = new vm.Process(new P1(), new int[512]); */
	sp--;
	lsb_int32 = (int32)(*sp);
	((struct _staticClassFields_c *) classData)->p1_f = lsb_int32;
	/*      p2 = new vm.Process(new P2(), new int[512]); */
	if (handleNewClassIndex(sp, 39) == 0) {
		fp[0] = *sp;
		return getClassIndex((Object*) (pointer) * sp);
	}
	sp++;
	/*      p2 = new vm.Process(new P2(), new int[512]); */
	i_val4 = *(sp - 1);
	/*      p2 = new vm.Process(new P2(), new int[512]); */
	*sp = (int32) i_val4;
	sp++;
	if (handleNewClassIndex(sp, 36) == 0) {
		fp[0] = *sp;
		return getClassIndex((Object*) (pointer) * sp);
	}
	sp++;
	/*      p2 = new vm.Process(new P2(), new int[512]); */
	i_val4 = *(sp - 1);
	/*      p2 = new vm.Process(new P2(), new int[512]); */
	i_val3 = 0;
	/*      p2 = new vm.Process(new P2(), new int[512]); */
	*sp = (int32) i_val4;
	sp++;
	*sp = (int32) i_val3;
	sp++;
	sp -= 2;
	rval_m_45 = scjhelloworld_TestProcess_P2_init__(sp);
	if (rval_m_45 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_45;
	}
	/*      p2 = new vm.Process(new P2(), new int[512]); */
	s_val4 = 512;
	/*      p2 = new vm.Process(new P2(), new int[512]); */
	count = s_val4;
	narray = (Object*) createArray(2, (uint16) count FLASHARG((0)));
	if (narray == 0) {
		pc = 52;
		goto throwOutOfMemory;
	}
	i_val4 = (int32) (pointer) narray;
	/*      p2 = new vm.Process(new P2(), new int[512]); */
	sp--;
	hvm_arg_no_2_55 = (int32)(*sp);
	sp--;
	hvm_arg_no_1_55 = (int32)(*sp);
	rval_m_55 = vm_Process_init_(sp, hvm_arg_no_1_55, hvm_arg_no_2_55, i_val4);
	if (rval_m_55 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_55;
	}
	/*      p2 = new vm.Process(new P2(), new int[512]); */
	sp--;
	lsb_int32 = (int32)(*sp);
	((struct _staticClassFields_c *) classData)->p2_f = lsb_int32;
	/*      Led ledB = new Led(2); */
	if (handleNewClassIndex(sp, 33) == 0) {
		fp[0] = *sp;
		return getClassIndex((Object*) (pointer) * sp);
	}
	sp++;
	/*      Led ledB = new Led(2); */
	i_val4 = *(sp - 1);
	/*      Led ledB = new Led(2); */
	i_val3 = 2;
	/*      Led ledB = new Led(2); */
	rval_m_70 = scjhelloworld_Led_init_(sp, i_val4, i_val3);
	if (rval_m_70 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_70;
	}
	/*      Led ledB = new Led(2); */
	sp--;
	ledB = (int32)(*sp);
	/*      Led led1 = new Led(3); */
	if (handleNewClassIndex(sp, 33) == 0) {
		fp[0] = *sp;
		return getClassIndex((Object*) (pointer) * sp);
	}
	sp++;
	/*      Led led1 = new Led(3); */
	i_val4 = *(sp - 1);
	/*      Led led1 = new Led(3); */
	i_val3 = 3;
	/*      Led led1 = new Led(3); */
	rval_m_80 = scjhelloworld_Led_init_(sp, i_val4, i_val3);
	if (rval_m_80 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_80;
	}
	/*      Led led1 = new Led(3); */
	sp--;
	led1 = (int32)(*sp);
	/*      Led led2 = new Led(4); */
	if (handleNewClassIndex(sp, 33) == 0) {
		fp[0] = *sp;
		return getClassIndex((Object*) (pointer) * sp);
	}
	sp++;
	/*      Led led2 = new Led(4); */
	i_val4 = *(sp - 1);
	/*      Led led2 = new Led(4); */
	i_val3 = 4;
	/*      Led led2 = new Led(4); */
	rval_m_90 = scjhelloworld_Led_init_(sp, i_val4, i_val3);
	if (rval_m_90 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_90;
	}
	/*      Led led2 = new Led(4); */
	sp--;
	led2 = (int32)(*sp);
	/*      Led led3 = new Led(5); */
	if (handleNewClassIndex(sp, 33) == 0) {
		fp[0] = *sp;
		return getClassIndex((Object*) (pointer) * sp);
	}
	sp++;
	/*      Led led3 = new Led(5); */
	i_val4 = *(sp - 1);
	/*      Led led3 = new Led(5); */
	i_val3 = 5;
	/*      Led led3 = new Led(5); */
	rval_m_100 = scjhelloworld_Led_init_(sp, i_val4, i_val3);
	if (rval_m_100 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_100;
	}
	/*      Led led3 = new Led(5); */
	sp--;
	led3 = (int32)(*sp);
	/*      ledB.on(); */
	i_val4 = ledB;
	/*      ledB.on(); */
	rval_m_107 = scjhelloworld_Led_on(sp, i_val4);
	if (rval_m_107 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_107;
	}
	/*      led1.on(); */
	i_val4 = led1;
	/*      led1.on(); */
	rval_m_112 = scjhelloworld_Led_on(sp, i_val4);
	if (rval_m_112 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_112;
	}
	/*      led2.on(); */
	i_val4 = led2;
	/*      led2.on(); */
	rval_m_117 = scjhelloworld_Led_on(sp, i_val4);
	if (rval_m_117 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_117;
	}
	/*      led3.on(); */
	i_val4 = led3;
	/*      led3.on(); */
	rval_m_123 = scjhelloworld_Led_on(sp, i_val4);
	if (rval_m_123 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_123;
	}
	/*      Delay delay1s = new Delay(1000); */
	if (handleNewClassIndex(sp, 32) == 0) {
		fp[0] = *sp;
		return getClassIndex((Object*) (pointer) * sp);
	}
	sp++;
	/*      Delay delay1s = new Delay(1000); */
	i_val4 = *(sp - 1);
	/*      Delay delay1s = new Delay(1000); */
	i_val3 = 1000;
	/*      Delay delay1s = new Delay(1000); */
	rval_m_134 = scjhelloworld_Delay_init_(sp, i_val4, i_val3);
	if (rval_m_134 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_134;
	}
	/*      Delay delay1s = new Delay(1000); */
	sp--;
	delay1s = (int32)(*sp);
	/*      delay1s.delay(); */
	i_val4 = delay1s;
	/*      delay1s.delay(); */
	rval_m_142 = scjhelloworld_Delay_delay(sp, i_val4);
	if (rval_m_142 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_142;
	}
	/*      mainProcess = new vm.Process(null, null); */
	if (handleNewClassIndex(sp, 39) == 0) {
		fp[0] = *sp;
		return getClassIndex((Object*) (pointer) * sp);
	}
	sp++;
	/*      mainProcess = new vm.Process(null, null); */
	i_val4 = *(sp - 1);
	/*      mainProcess = new vm.Process(null, null); */
	i_val3 = 0;
	/*      mainProcess = new vm.Process(null, null); */
	i_val2 = 0;
	/*      mainProcess = new vm.Process(null, null); */
	rval_m_152 = vm_Process_init_(sp, i_val4, i_val3, i_val2);
	if (rval_m_152 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_152;
	}
	/*      mainProcess = new vm.Process(null, null); */
	sp--;
	lsb_int32 = (int32)(*sp);
	((struct _staticClassFields_c *) classData)->mainProcess_f = lsb_int32;
	/*      p1.initialize(); */
	i_val4 = ((struct _staticClassFields_c *) classData)->p1_f;
	/*      p1.initialize(); */
	if (i_val4 == 0) {
		pc = 168;
		goto throwNullPointer;
	}
	rval_m_168 = vm_Process_initialize(sp, i_val4);
	if (rval_m_168 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_168;
	}
	/*      p2.initialize(); */
	i_val4 = ((struct _staticClassFields_c *) classData)->p2_f;
	/*      p2.initialize(); */
	if (i_val4 == 0) {
		pc = 178;
		goto throwNullPointer;
	}
	rval_m_178 = vm_Process_initialize(sp, i_val4);
	if (rval_m_178 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_178;
	}
	/*      mainProcess.transferTo(p1); */
	i_val4 = ((struct _staticClassFields_c *) classData)->mainProcess_f;
	/*      mainProcess.transferTo(p1); */
	i_val3 = ((struct _staticClassFields_c *) classData)->p1_f;
	/*      mainProcess.transferTo(p1); */
	if (i_val4 == 0) {
		pc = 194;
		goto throwNullPointer;
	}
	rval_m_194 = vm_Process_transferTo(sp, i_val4, i_val3);
	if (rval_m_194 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_194;
	}
	/*      devices.Console.println("Fin de Proceso Principal, se deja en un loop infinito."); */
	constant_ = &constants[27];
#ifndef PRE_INITIALIZE_CONSTANTS
	initializeStringConstant(constant_, sp);
#endif
	i_val4 = (int32) (pointer) stringConstants[constant_->value >> 16];
	/*      devices.Console.println("Fin de Proceso Principal, se deja en un loop infinito."); */
	rval_m_201 = devices_Console_println(sp, i_val4);
	if (rval_m_201 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_201;
	}
	/*      ledB.off(); */
	i_val4 = ledB;
	/*      ledB.off(); */
	rval_m_206 = scjhelloworld_Led_off(sp, i_val4);
	if (rval_m_206 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_206;
	}
	/*      led1.off(); */
	i_val4 = led1;
	/*      led1.off(); */
	rval_m_211 = scjhelloworld_Led_off(sp, i_val4);
	if (rval_m_211 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_211;
	}
	/*      led2.off(); */
	i_val4 = led2;
	/*      led2.off(); */
	rval_m_216 = scjhelloworld_Led_off(sp, i_val4);
	if (rval_m_216 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_216;
	}
	/*      led3.off(); */
	i_val4 = led3;
	/*      led3.off(); */
	rval_m_222 = scjhelloworld_Led_off(sp, i_val4);
	if (rval_m_222 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_222;
	}
	/*      while (true) {;} */
	L226: goto L226;
	throwNullPointer: initializeException(sp, JAVA_LANG_NULLPOINTEREXCEPTION,
			JAVA_LANG_NULLPOINTEREXCEPTION_INIT_);
	excep = JAVA_LANG_NULLPOINTEREXCEPTION;
	goto throwIt;
	throwOutOfMemory: initializeException(sp, JAVA_LANG_OUTOFMEMORYERROR,
			JAVA_LANG_OUTOFMEMORYERROR_INIT_);
	excep = JAVA_LANG_OUTOFMEMORYERROR;
	goto throwIt;
	throwIt: handler_pc = handleAthrow(&methods[86], excep, pc);
	sp++;
	switch (handler_pc) {
	case (unsigned short) -1: /* Not handled */
	default:
		fp[0] = *(sp - 1);
		return excep;
	}
}

/* Class: vm.ClockInterruptHandler */
/* Method: yield */
/* yield
 * param : 
 * return: void
 */
int16 vm_ClockInterruptHandler_yield(int32 *fp) {
	return -1;
}

/* Class: vm.Process$ProcessExecutor */
/* Method: <init> */
/* <init>
 * param : vm.Process
 * return: void
 */
int16 vm_Process_ProcessExecutor_init_(int32 *fp, int32 this, int32 thisProcess)
{
	int32* sp;
	int32 i_val1;
	int16 rval_m_1;
	int32 i_val0;
	unsigned char* cobj;
	int32 lsb_int32;
	sp = &fp[4]; /* make room for local VM state on the stack */
	/* */
	i_val1 = this;
	/* */
	*sp = (int32)i_val1;
	sp++;
	sp -= 1;
	rval_m_1 = java_lang_Object_init_(sp);
	if (rval_m_1 == -1) {
		;
	}
	else
	{
		fp[0] = *sp;
		return rval_m_1;
	}
	/* */
	i_val1 = this;
	/* */
	i_val0 = thisProcess;
	/* */
	lsb_int32 = i_val0;
	cobj = (unsigned char *) (pointer)i_val1;
	((struct _vm_Process_ProcessExecutor_c *)HEAP_REF(cobj, unsigned char*)) -> thisProcess_f = lsb_int32;
	/* */
	return -1;
}

/* Class: vm.Process$ProcessExecutor */
/* Method: run */
/* run
 * param : 
 * return: void
 */
int16 vm_Process_ProcessExecutor_run(int32 *fp) {
	int32* sp;
	int32 i_val1;
	int8 b_val0;
	unsigned char* cobj;
	int8 lsb_int8;
	int32 i_val0;
	int16 excep;
	unsigned short handler_pc;
	unsigned short pc;
	int16 rval_m_22;
	int8 b_val1;
	int16 rval_m_54;
	unsigned short classIndex;
	unsigned short methodIndex;
	unsigned char methodVtableIndex;
	int16 rval_m_58;
	Object* i_obj;
	int16 rval_m_83;
	int32 hvm_arg_no_1_88;
	int16 rval_m_88;
	int16 rval_m_108;
	int16 rval_m_121;
	int32
	this;
	int32 t;
	this = (int32)(*(fp + 0));
	t = (int32)(*(fp + 1));
	sp = &fp[4]; /* make room for local VM state on the stack */
	/* */
	i_val1 = this;
	/* */
	b_val0 = 0;
	/* */
	lsb_int8 = b_val0;
	cobj = (unsigned char *) (pointer) i_val1;
	((struct _vm_Process_ProcessExecutor_c *)HEAP_REF(cobj, unsigned char*)) -> isStarted_f = lsb_int8;
	/* */
	i_val1 = this;
	/* */
	cobj = (unsigned char *) (pointer) i_val1;
	i_val1 = ((struct _vm_Process_ProcessExecutor_c *)HEAP_REF(cobj, unsigned char*)) -> thisProcess_f;
	/* */
	i_val0 = this;
	/* */
	cobj = (unsigned char *) (pointer) i_val0;
	i_val0 = ((struct _vm_Process_ProcessExecutor_c *)HEAP_REF(cobj, unsigned char*)) -> thisProcess_f;
	/* */
	if (i_val1 == 0) {
		pc = 22;
		goto throwNullPointer;
	}
	rval_m_22 = vm_Process_transferTo(sp, i_val1, i_val0);
	if (rval_m_22 == -1) {
		;
	} else {
		sp++;
		pc = 22;
		sp--;
		excep = rval_m_22;
		goto throwIt;
	}
	/* */
	i_val1 = this;
	/* */
	cobj = (unsigned char *) (pointer) i_val1;
	b_val1 = ((struct _vm_Process_ProcessExecutor_c *)HEAP_REF(cobj, unsigned char*)) -> isStarted_f;
	/* */
	if (b_val1 != 0) {
		goto L47;
	}
	/* */
	i_val1 = this;
	/* */
	b_val0 = 1;
	/* */
	lsb_int8 = b_val0;
	cobj = (unsigned char *) (pointer) i_val1;
	((struct _vm_Process_ProcessExecutor_c *)HEAP_REF(cobj, unsigned char*)) -> isStarted_f = lsb_int8;
	/* */
	goto L128;
	/* */
	L47: i_val1 = this;
	/* */
	cobj = (unsigned char *) (pointer) i_val1;
	i_val1 = ((struct _vm_Process_ProcessExecutor_c *)HEAP_REF(cobj, unsigned char*)) -> thisProcess_f;
	/* */
	*sp = (int32) i_val1;
	sp++;
	sp -= 1;
	rval_m_54 = vm_Process_access_0(sp);
	if (rval_m_54 == -1) {
		sp += 1;
	} else {
		sp++;
		pc = 54;
		sp--;
		excep = rval_m_54;
		goto throwIt;
	}
	/* */
	sp -= 1;
	i_obj = (Object*) (pointer) * sp;
	if (i_obj == 0) {
		pc = 58;
		goto throwNullPointer;
	}
	classIndex = getClassIndex(i_obj);
	methodIndex = (unsigned short) -1;
	while (methodIndex == (unsigned short) -1) {
		switch (classIndex) {
		case 35:
			methodIndex = 78;
			continue;
		case 36:
			methodIndex = 82;
			continue;
		}
		classIndex = pgm_read_word(&classes[classIndex].superClass);
	}
	rval_m_58 = dispatchInterface(methodIndex, &methodVtableIndex, sp);
	if (rval_m_58 == -1) {
		sp += methodVtableIndex;
	} else {
		sp++;
		pc = 58;
		sp--;
		excep = rval_m_58;
		goto throwIt;
	}
	/* */
	goto L102;
	/* */
	L75: sp--;
	t = (int32)(*sp);
	/* */
	i_val1 = this;
	/* */
	cobj = (unsigned char *) (pointer) i_val1;
	i_val1 = ((struct _vm_Process_ProcessExecutor_c *)HEAP_REF(cobj, unsigned char*)) -> thisProcess_f;
	/* */
	*sp = (int32) i_val1;
	sp++;
	sp -= 1;
	rval_m_83 = vm_Process_access_0(sp);
	if (rval_m_83 == -1) {
		sp += 1;
	} else {
		sp++;
		pc = 83;
		sp--;
		excep = rval_m_83;
		goto throwIt;
	}
	/* */
	i_val1 = t;
	/* */
	sp--;
	hvm_arg_no_1_88 = (int32)(*sp);
	if (hvm_arg_no_1_88 == 0) {
		pc = 88;
		goto throwNullPointer;
	}
	classIndex = getClassIndex((Object *) (pointer) hvm_arg_no_1_88);
	methodIndex = (unsigned short) -1;
	while (methodIndex == (unsigned short) -1) {
		switch (classIndex) {
		case 35:
			rval_m_88 = scjhelloworld_TestProcess_P1_catchError(sp,
					hvm_arg_no_1_88, i_val1);
			methodIndex = 77;
			continue;
		case 36:
			rval_m_88 = scjhelloworld_TestProcess_P2_catchError(sp,
					hvm_arg_no_1_88, i_val1);
			methodIndex = 81;
			continue;
		}
		classIndex = pgm_read_word(&classes[classIndex].superClass);
	}
	if (rval_m_88 == -1) {
		;
	} else {
		sp++;
		pc = 88;
		sp--;
		excep = rval_m_88;
		goto throwIt;
	}
	/* */
	L102: i_val1 = ((struct _staticClassFields_c *) classData)->instance_f;
	/* */
	*sp = (int32) i_val1;
	sp++;
	sp -= 1;
	i_obj = (Object*) (pointer) * sp;
	if (i_obj == 0) {
		pc = 108;
		goto throwNullPointer;
	}
	classIndex = getClassIndex(i_obj);
	methodIndex = (unsigned short) -1;
	while (methodIndex == (unsigned short) -1) {
		switch (classIndex) {
		}
		classIndex = pgm_read_word(&classes[classIndex].superClass);
	}
	rval_m_108 = dispatchInterface(methodIndex, &methodVtableIndex, sp);
	if (rval_m_108 == -1) {
		sp += methodVtableIndex;
	} else {
		sp++;
		pc = 108;
		sp--;
		excep = rval_m_108;
		goto throwIt;
	}
	/* */
	i_val1 = this;
	/* */
	cobj = (unsigned char *) (pointer) i_val1;
	i_val1 = ((struct _vm_Process_ProcessExecutor_c *)HEAP_REF(cobj, unsigned char*)) -> thisProcess_f;
	/* */
	b_val0 = 1;
	/* */
	*sp = (int32) i_val1;
	sp++;
	*sp = (int32) (int8) b_val0;
	sp++;
	sp -= 2;
	rval_m_121 = vm_Process_access_1(sp);
	if (rval_m_121 == -1) {
		;
	} else {
		sp++;
		pc = 121;
		sp--;
		excep = rval_m_121;
		goto throwIt;
	}
	/* */
	L125: goto L125;
	/* */
	L128: return -1;
	throwNullPointer: initializeException(sp, JAVA_LANG_NULLPOINTEREXCEPTION,
			JAVA_LANG_NULLPOINTEREXCEPTION_INIT_);
	excep = JAVA_LANG_NULLPOINTEREXCEPTION;
	goto throwIt;
	throwIt: handler_pc = handleAthrow(&methods[89], excep, pc);
	sp++;
	switch (handler_pc) {
	case 75:
		goto L75;
	case (unsigned short) -1: /* Not handled */
	default:
		fp[0] = *(sp - 1);
		return excep;
	}
}

RANGE const ExceptionHandler ex_vm_Process_ProcessExecutor_run[1] PROGMEM = {
	{	47, 72, 75, 29}
};

/* Class: vm.Process$SP */
/* Method: <init> */
/* <init>
 * param : 
 * return: void
 */
int16 vm_Process_SP_init_(int32 *fp, int32 this)
{
	int32* sp;
	int32 i_val0;
	int16 rval_m_1;
	sp = &fp[3]; /* make room for local VM state on the stack */
	/* */
	i_val0 = this;
	/* */
	*sp = (int32)i_val0;
	sp++;
	sp -= 1;
	rval_m_1 = java_lang_Object_init_(sp);
	if (rval_m_1 == -1) {
		;
	}
	else
	{
		fp[0] = *sp;
		return rval_m_1;
	}
	/* */
	return -1;
}

/* Class: vm.Process$SP */
/* Method: <init> */
/* <init>
 * param : vm.Process$SP
 * return: void
 */
int16 vm_Process_SP_init__(int32 *fp) {
	int32* sp;
	int32 i_val0;
	int16 rval_m_1;
	int32 lv_0 = 0;
	lv_0 = (int32)(*(fp + 0));
	sp = &fp[4]; /* make room for local VM state on the stack */
	/* */
	i_val0 = lv_0;
	/* */
	rval_m_1 = vm_Process_SP_init_(sp, i_val0);
	if (rval_m_1 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_1;
	}
	/* */
	return -1;
}

/* Class: vm.Process$X86_32SP */
/* Method: <init> */
/* <init>
 * param : 
 * return: void
 */
int16 vm_Process_X86_32SP_init_(int32 *fp, int32 this)
{
	int32* sp;
	int32 i_val1;
	int32 i_val0;
	int16 rval_m_2;
	sp = &fp[3]; /* make room for local VM state on the stack */
	/* */
	i_val1 = this;
	/* */
	i_val0 = 0;
	/* */
	*sp = (int32)i_val1;
	sp++;
	*sp = (int32)i_val0;
	sp++;
	sp -= 2;
	rval_m_2 = vm_Process_SP_init__(sp);
	if (rval_m_2 == -1) {
		;
	}
	else
	{
		fp[0] = *sp;
		return rval_m_2;
	}
	/* */
	return -1;
}

/* Class: vm.Process$X86_32SP */
/* Method: <init> */
/* <init>
 * param : vm.Process$X86_32SP
 * return: void
 */
int16 vm_Process_X86_32SP_init__(int32 *fp) {
	int32* sp;
	int32 i_val0;
	int16 rval_m_1;
	int32 lv_0 = 0;
	lv_0 = (int32)(*(fp + 0));
	sp = &fp[4]; /* make room for local VM state on the stack */
	/* */
	i_val0 = lv_0;
	/* */
	rval_m_1 = vm_Process_X86_32SP_init_(sp, i_val0);
	if (rval_m_1 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_1;
	}
	/* */
	return -1;
}

/* Class: vm.Process$X86_64SP */
/* Method: <init> */
/* <init>
 * param : 
 * return: void
 */
int16 vm_Process_X86_64SP_init_(int32 *fp, int32 this)
{
	int32* sp;
	int32 i_val1;
	int32 i_val0;
	int16 rval_m_2;
	sp = &fp[3]; /* make room for local VM state on the stack */
	/* */
	i_val1 = this;
	/* */
	i_val0 = 0;
	/* */
	*sp = (int32)i_val1;
	sp++;
	*sp = (int32)i_val0;
	sp++;
	sp -= 2;
	rval_m_2 = vm_Process_SP_init__(sp);
	if (rval_m_2 == -1) {
		;
	}
	else
	{
		fp[0] = *sp;
		return rval_m_2;
	}
	/* */
	return -1;
}

/* Class: vm.Process$X86_64SP */
/* Method: <init> */
/* <init>
 * param : vm.Process$X86_64SP
 * return: void
 */
int16 vm_Process_X86_64SP_init__(int32 *fp) {
	int32* sp;
	int32 i_val0;
	int16 rval_m_1;
	int32 lv_0 = 0;
	lv_0 = (int32)(*(fp + 0));
	sp = &fp[4]; /* make room for local VM state on the stack */
	/* */
	i_val0 = lv_0;
	/* */
	rval_m_1 = vm_Process_X86_64SP_init_(sp, i_val0);
	if (rval_m_1 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_1;
	}
	/* */
	return -1;
}

/* Class: vm.Process */
/* Method: <init> */
/* <init>
 * param : vm.ProcessLogic, int[]
 * return: void
 */
int16 vm_Process_init_(int32 *fp, int32 this, int32 logic, int32 stack)
{
	int32* sp;
	int32 i_val3;
	int16 rval_m_1;
	int32 i_val2;
	unsigned char* cobj;
	int32 lsb_int32;
	int8 b_val2;
	int8 lsb_int8;
	int16 rval_m_35;
	int8 b_val3;
	int8 key_int8;
	int16 rval_m_85;
	int16 rval_m_104;
	sp = &fp[5]; /* make room for local VM state on the stack */
	/* */
	i_val3 = this;
	/* */
	*sp = (int32)i_val3;
	sp++;
	sp -= 1;
	rval_m_1 = java_lang_Object_init_(sp);
	if (rval_m_1 == -1) {
		;
	}
	else
	{
		fp[0] = *sp;
		return rval_m_1;
	}
	/* */
	i_val3 = this;
	/* */
	i_val2 = logic;
	/* */
	lsb_int32 = i_val2;
	cobj = (unsigned char *) (pointer)i_val3;
	((struct _vm_Process_c *)HEAP_REF(cobj, unsigned char*)) -> logic_f = lsb_int32;
	/* */
	i_val3 = this;
	/* */
	i_val2 = stack;
	/* */
	lsb_int32 = i_val2;
	cobj = (unsigned char *) (pointer)i_val3;
	((struct _vm_Process_c *)HEAP_REF(cobj, unsigned char*)) -> stack_f = lsb_int32;
	/* */
	i_val3 = this;
	/* */
	b_val2 = 0;
	/* */
	lsb_int8 = b_val2;
	cobj = (unsigned char *) (pointer)i_val3;
	((struct _vm_Process_c *)HEAP_REF(cobj, unsigned char*)) -> isFinished_f = lsb_int8;
	/* */
	i_val3 = this;
	/* */
	*sp = (int32)i_val3;
	sp++;
	if (handleNewClassIndex(sp, 40) == 0) {
		fp[0] = *sp;
		return getClassIndex((Object*) (pointer) *sp);
	}
	sp++;
	/* */
	i_val3 = *(sp - 1);
	/* */
	i_val2 = this;
	/* */
	rval_m_35 = vm_Process_ProcessExecutor_init_(sp, i_val3, i_val2);
	if (rval_m_35 == -1) {
		;
	}
	else
	{
		fp[0] = *sp;
		return rval_m_35;
	}
	/* */
	sp--;
	lsb_int32 = (int32)(*sp);
	sp--;
	cobj = (unsigned char *) (pointer) *sp;
	((struct _vm_Process_c *)HEAP_REF(cobj, unsigned char*)) -> processExecuter_f = lsb_int32;
	/* */
	b_val3 = architecture;
	/* */
	key_int8 = b_val3;
	switch (key_int8 - 1) {
		case 0:
		goto L79;
		case 1:
		goto L98;
		case 2:
		goto L98;
		default:
		goto L98;
	}
	/* */
	L79:
	i_val3 = this;
	/* */
	*sp = (int32)i_val3;
	sp++;
	if (handleNewClassIndex(sp, 43) == 0) {
		fp[0] = *sp;
		return getClassIndex((Object*) (pointer) *sp);
	}
	sp++;
	/* */
	i_val3 = *(sp - 1);
	/* */
	i_val2 = 0;
	/* */
	*sp = (int32)i_val3;
	sp++;
	*sp = (int32)i_val2;
	sp++;
	sp -= 2;
	rval_m_85 = vm_Process_X86_64SP_init__(sp);
	if (rval_m_85 == -1) {
		;
	}
	else
	{
		fp[0] = *sp;
		return rval_m_85;
	}
	/* */
	sp--;
	lsb_int32 = (int32)(*sp);
	sp--;
	cobj = (unsigned char *) (pointer) *sp;
	((struct _vm_Process_c *)HEAP_REF(cobj, unsigned char*)) -> sp_f = lsb_int32;
	/* */
	goto L114;
	/* */
	L98:
	i_val3 = this;
	/* */
	*sp = (int32)i_val3;
	sp++;
	if (handleNewClassIndex(sp, 42) == 0) {
		fp[0] = *sp;
		return getClassIndex((Object*) (pointer) *sp);
	}
	sp++;
	/* */
	i_val3 = *(sp - 1);
	/* */
	i_val2 = 0;
	/* */
	*sp = (int32)i_val3;
	sp++;
	*sp = (int32)i_val2;
	sp++;
	sp -= 2;
	rval_m_104 = vm_Process_X86_32SP_init__(sp);
	if (rval_m_104 == -1) {
		;
	}
	else
	{
		fp[0] = *sp;
		return rval_m_104;
	}
	/* */
	sp--;
	lsb_int32 = (int32)(*sp);
	sp--;
	cobj = (unsigned char *) (pointer) *sp;
	((struct _vm_Process_c *)HEAP_REF(cobj, unsigned char*)) -> sp_f = lsb_int32;
	/* */
	L114:
	return -1;
}

/* Class: vm.Process */
/* Method: access$0 */
/* access$0
 * param : vm.Process
 * return: vm.ProcessLogic
 */
int16 vm_Process_access_0(int32 *fp) {
	int32* sp;
	int32 i_val0;
	unsigned char* cobj;
	int16 excep;
	unsigned short handler_pc;
	unsigned short pc;
	int32 lv_0 = 0;
	lv_0 = (int32)(*(fp + 0));
	sp = &fp[3]; /* make room for local VM state on the stack */
	/* */
	i_val0 = lv_0;
	/* */
	cobj = (unsigned char *) (pointer) i_val0;
	if (cobj == 0) {
		pc = 1;
		goto throwNullPointer;
	}
	i_val0 = ((struct _vm_Process_c *)HEAP_REF(cobj, unsigned char*)) -> logic_f;
	/* */
	*((int32*) fp) = i_val0;
	return -1;
	throwNullPointer: initializeException(sp, JAVA_LANG_NULLPOINTEREXCEPTION,
			JAVA_LANG_NULLPOINTEREXCEPTION_INIT_);
	excep = JAVA_LANG_NULLPOINTEREXCEPTION;
	goto throwIt;
	throwIt: handler_pc = handleAthrow(&methods[97], excep, pc);
	sp++;
	switch (handler_pc) {
	case (unsigned short) -1: /* Not handled */
	default:
		fp[0] = *(sp - 1);
		return excep;
	}
}

/* Class: vm.Process */
/* Method: access$1 */
/* access$1
 * param : vm.Process, boolean
 * return: void
 */
int16 vm_Process_access_1(int32 *fp) {
	int32* sp;
	int32 i_val1;
	int8 b_val0;
	unsigned char* cobj;
	int8 lsb_int8;
	int16 excep;
	unsigned short handler_pc;
	unsigned short pc;
	int32 lv_0 = 0;
	int32 lv_1 = 0;
	lv_0 = (int32)(*(fp + 0));
	lv_1 = (int32)(*(fp + 1));
	sp = &fp[4]; /* make room for local VM state on the stack */
	/* */
	i_val1 = lv_0;
	/* */
	b_val0 = (int32) lv_1;
	/* */
	lsb_int8 = b_val0;
	cobj = (unsigned char *) (pointer) i_val1;
	if (cobj == 0) {
		pc = 2;
		goto throwNullPointer;
	}
	((struct _vm_Process_c *)HEAP_REF(cobj, unsigned char*)) -> isFinished_f = lsb_int8;
	/* */
	return -1;
	throwNullPointer: initializeException(sp, JAVA_LANG_NULLPOINTEREXCEPTION,
			JAVA_LANG_NULLPOINTEREXCEPTION_INIT_);
	excep = JAVA_LANG_NULLPOINTEREXCEPTION;
	goto throwIt;
	throwIt: handler_pc = handleAthrow(&methods[98], excep, pc);
	sp++;
	switch (handler_pc) {
	case (unsigned short) -1: /* Not handled */
	default:
		fp[0] = *(sp - 1);
		return excep;
	}
}

/* Class: vm.Process */
/* Method: executeWithStack */
/* Class: vm.Process */
/* Method: initialize */
/* initialize
 * param : 
 * return: void
 */
int16 vm_Process_initialize(int32 *fp, int32 this)
{
	int32* sp;
	int32 i_val1;
	unsigned char* cobj;
	int32 i_val0;
	int16 rval_m_14;
	sp = &fp[3]; /* make room for local VM state on the stack */
	/* */
	i_val1 = this;
	/* */
	cobj = (unsigned char *) (pointer)i_val1;
	i_val1 = ((struct _vm_Process_c *)HEAP_REF(cobj, unsigned char*)) -> processExecuter_f;
	/* */
	i_val0 = this;
	/* */
	cobj = (unsigned char *) (pointer)i_val0;
	i_val0 = ((struct _vm_Process_c *)HEAP_REF(cobj, unsigned char*)) -> stack_f;
	/* */
	*sp = (int32)i_val1;
	sp++;
	*sp = (int32)i_val0;
	sp++;
	sp -= 2;
	rval_m_14 = n_vm_Process_executeWithStack(sp);
	if (rval_m_14 == -1) {
		;
	}
	else
	{
		fp[0] = *sp;
		return rval_m_14;
	}
	/* */
	return -1;
}

/* Class: vm.Process */
/* Method: transfer */
/* Class: vm.Process */
/* Method: transferTo */
/* transferTo
 * param : vm.Process
 * return: void
 */
int16 vm_Process_transferTo(int32 *fp, int32 this, int32 nextProcess)
{
	int32* sp;
	int32 i_val1;
	int32 i_val0;
	int16 rval_m_2;
	sp = &fp[4]; /* make room for local VM state on the stack */
	/* */
	i_val1 = this;
	/* */
	i_val0 = nextProcess;
	/* */
	*sp = (int32)i_val1;
	sp++;
	*sp = (int32)i_val0;
	sp++;
	sp -= 2;
	rval_m_2 = n_vm_Process_transfer(sp);
	if (rval_m_2 == -1) {
		;
	}
	else
	{
		fp[0] = *sp;
		return rval_m_2;
	}
	/* */
	return -1;
}

/* nwrite
 * param : byte[], int
 * return: void
 */
extern int16 n_devices_X86Writer_nwrite(int32 *sp);
/* <clinit>
 * param : 
 * return: void
 */
#ifndef EXCLUDESTUB_N_JAVA_LANG_CLASS_CLINIT_
int16 n_java_lang_Class_clinit_(int32 *sp) {
	unimplemented_native_function (N_JAVA_LANG_CLASS_CLINIT_);
	return -1;
}
#else
extern int16 n_java_lang_Class_clinit_(int32 *sp);
#endif

/* desiredAssertionStatus
 * param : 
 * return: boolean
 */
#ifndef EXCLUDESTUB_N_JAVA_LANG_CLASS_DESIREDASSERTIONSTATUS
int16 n_java_lang_Class_desiredAssertionStatus(int32 *sp) {
	unimplemented_native_function (N_JAVA_LANG_CLASS_DESIREDASSERTIONSTATUS);
	return -1;
}
#else
extern int16 n_java_lang_Class_desiredAssertionStatus(int32 *sp);
#endif

/* getPrimitiveClass
 * param : java.lang.String
 * return: java.lang.Class
 */
#ifndef EXCLUDESTUB_N_JAVA_LANG_CLASS_GETPRIMITIVECLASS
int16 n_java_lang_Class_getPrimitiveClass(int32 *sp) {
	unimplemented_native_function (N_JAVA_LANG_CLASS_GETPRIMITIVECLASS);
	return -1;
}
#else
extern int16 n_java_lang_Class_getPrimitiveClass(int32 *sp);
#endif

/* doubleToRawLongBits
 * param : double
 * return: long
 */
extern int16 n_java_lang_Double_doubleToRawLongBits(int32 *sp);
/* longBitsToDouble
 * param : long
 * return: double
 */
extern int16 n_java_lang_Double_longBitsToDouble(int32 *sp);
/* floatToRawIntBits
 * param : float
 * return: int
 */
extern int16 n_java_lang_Float_floatToRawIntBits(int32 *sp);
/* arraycopy
 * param : java.lang.Object, int, java.lang.Object, int, int
 * return: void
 */
extern int16 n_java_lang_System_arraycopy(int32 *sp);
/* registerNatives
 * param : 
 * return: void
 */
extern int16 n_java_lang_System_registerNatives(int32 *sp);
/* <clinit>
 * param : 
 * return: void
 */
#ifndef EXCLUDESTUB_N_JAVA_LANG_THROWABLE_CLINIT_
int16 n_java_lang_Throwable_clinit_(int32 *sp) {
	unimplemented_native_function (N_JAVA_LANG_THROWABLE_CLINIT_);
	return -1;
}
#else
extern int16 n_java_lang_Throwable_clinit_(int32 *sp);
#endif

/* fillInStackTrace
 * param : int
 * return: java.lang.Throwable
 */
#ifndef EXCLUDESTUB_N_JAVA_LANG_THROWABLE_FILLINSTACKTRACE_
int16 n_java_lang_Throwable_fillInStackTrace_(int32 *sp) {
	unimplemented_native_function (N_JAVA_LANG_THROWABLE_FILLINSTACKTRACE_);
	return -1;
}
#else
extern int16 n_java_lang_Throwable_fillInStackTrace_(int32 *sp);
#endif

/* delayTicks
 * param : int
 * return: void
 */
extern int16 n_scjhelloworld_Delay_delayTicks(int32 *sp);
/* ledStatus
 * param : int, int
 * return: void
 */
extern int16 n_scjhelloworld_Led_ledStatus(int32 *sp);
/* executeWithStack
 * param : java.lang.Runnable, int[]
 * return: void
 */
extern int16 n_vm_Process_executeWithStack(int32 *sp);
/* transfer
 * param : vm.Process, vm.Process
 * return: void
 */
extern int16 n_vm_Process_transfer(int32 *sp);

RANGE static const char methodName0[25] PROGMEM = "devices.Console.<clinit>";
RANGE static const char methodName1[25] PROGMEM = "devices.Console.getBytes";
RANGE static const char methodName2[24] PROGMEM = "devices.Console.println";
RANGE static const char methodName3[24] PROGMEM = "devices.Console.println";
RANGE static const char methodName4[25] PROGMEM = "devices.X86Writer.<init>";
RANGE static const char methodName5[7] PROGMEM = "nwrite";
RANGE static const char methodName6[24] PROGMEM = "devices.X86Writer.write";
RANGE static const char methodName7[39] PROGMEM = "java.lang.AbstractStringBuilder.<init>";
RANGE static const char methodName8[39] PROGMEM = "java.lang.AbstractStringBuilder.append";
RANGE static const char methodName9[39] PROGMEM = "java.lang.AbstractStringBuilder.append";
RANGE static const char methodName10[43] PROGMEM = "java.lang.AbstractStringBuilder.appendNull";
RANGE static const char methodName11[55] PROGMEM = "java.lang.AbstractStringBuilder.ensureCapacityInternal";
RANGE static const char methodName12[47] PROGMEM = "java.lang.AbstractStringBuilder.expandCapacity";
RANGE static const char methodName13[37] PROGMEM = "java.lang.ArithmeticException.<init>";
RANGE static const char methodName14[48] PROGMEM = "java.lang.ArrayIndexOutOfBoundsException.<init>";
RANGE static const char methodName15[32] PROGMEM = "java.lang.AssertionError.<init>";
RANGE static const char methodName16[9] PROGMEM = "<clinit>";
RANGE static const char methodName17[23] PROGMEM = "desiredAssertionStatus";
RANGE static const char methodName18[18] PROGMEM = "getPrimitiveClass";
RANGE static const char methodName19[26] PROGMEM = "java.lang.Double.<clinit>";
RANGE static const char methodName20[20] PROGMEM = "doubleToRawLongBits";
RANGE static const char methodName21[17] PROGMEM = "longBitsToDouble";
RANGE static const char methodName22[23] PROGMEM = "java.lang.Error.<init>";
RANGE static const char methodName23[27] PROGMEM = "java.lang.Exception.<init>";
RANGE static const char methodName24[27] PROGMEM = "java.lang.Exception.<init>";
RANGE static const char methodName25[25] PROGMEM = "java.lang.Float.<clinit>";
RANGE static const char methodName26[18] PROGMEM = "floatToRawIntBits";
RANGE static const char methodName27[42] PROGMEM = "java.lang.IllegalArgumentException.<init>";
RANGE static const char methodName28[46] PROGMEM = "java.lang.IllegalMonitorStateException.<init>";
RANGE static const char methodName29[43] PROGMEM = "java.lang.IndexOutOfBoundsException.<init>";
RANGE static const char methodName30[43] PROGMEM = "java.lang.IndexOutOfBoundsException.<init>";
RANGE static const char methodName31[27] PROGMEM = "java.lang.Integer.<clinit>";
RANGE static const char methodName32[27] PROGMEM = "java.lang.Integer.getChars";
RANGE static const char methodName33[29] PROGMEM = "java.lang.Integer.stringSize";
RANGE static const char methodName34[24] PROGMEM = "java.lang.Math.<clinit>";
RANGE static const char methodName35[22] PROGMEM = "java.lang.Math.<init>";
RANGE static const char methodName36[19] PROGMEM = "java.lang.Math.min";
RANGE static const char methodName37[27] PROGMEM = "java.lang.Math.powerOfTwoD";
RANGE static const char methodName38[44] PROGMEM = "java.lang.NegativeArraySizeException.<init>";
RANGE static const char methodName39[38] PROGMEM = "java.lang.NullPointerException.<init>";
RANGE static const char methodName40[24] PROGMEM = "java.lang.Object.<init>";
RANGE static const char methodName41[34] PROGMEM = "java.lang.OutOfMemoryError.<init>";
RANGE static const char methodName42[34] PROGMEM = "java.lang.RuntimeException.<init>";
RANGE static const char methodName43[34] PROGMEM = "java.lang.RuntimeException.<init>";
RANGE static const char methodName44[24] PROGMEM = "java.lang.String.<init>";
RANGE static const char methodName45[24] PROGMEM = "java.lang.String.<init>";
RANGE static const char methodName46[24] PROGMEM = "java.lang.String.charAt";
RANGE static const char methodName47[26] PROGMEM = "java.lang.String.getChars";
RANGE static const char methodName48[24] PROGMEM = "java.lang.String.length";
RANGE static const char methodName49[31] PROGMEM = "java.lang.StringBuilder.<init>";
RANGE static const char methodName50[31] PROGMEM = "java.lang.StringBuilder.append";
RANGE static const char methodName51[31] PROGMEM = "java.lang.StringBuilder.append";
RANGE static const char methodName52[31] PROGMEM = "java.lang.StringBuilder.append";
RANGE static const char methodName53[33] PROGMEM = "java.lang.StringBuilder.toString";
RANGE static const char methodName54[49] PROGMEM = "java.lang.StringIndexOutOfBoundsException.<init>";
RANGE static const char methodName55[26] PROGMEM = "java.lang.System.<clinit>";
RANGE static const char methodName56[10] PROGMEM = "arraycopy";
RANGE static const char methodName57[16] PROGMEM = "registerNatives";
RANGE static const char methodName58[9] PROGMEM = "<clinit>";
RANGE static const char methodName59[27] PROGMEM = "java.lang.Throwable.<init>";
RANGE static const char methodName60[27] PROGMEM = "java.lang.Throwable.<init>";
RANGE static const char methodName61[37] PROGMEM = "java.lang.Throwable.fillInStackTrace";
RANGE static const char methodName62[17] PROGMEM = "fillInStackTrace";
RANGE static const char methodName63[37] PROGMEM = "java.lang.VirtualMachineError.<init>";
RANGE static const char methodName64[26] PROGMEM = "java.util.Arrays.<clinit>";
RANGE static const char methodName65[24] PROGMEM = "java.util.Arrays.<init>";
RANGE static const char methodName66[24] PROGMEM = "java.util.Arrays.copyOf";
RANGE static const char methodName67[29] PROGMEM = "java.util.Arrays.copyOfRange";
RANGE static const char methodName68[27] PROGMEM = "scjhelloworld.Delay.<init>";
RANGE static const char methodName69[26] PROGMEM = "scjhelloworld.Delay.delay";
RANGE static const char methodName70[11] PROGMEM = "delayTicks";
RANGE static const char methodName71[25] PROGMEM = "scjhelloworld.Led.<init>";
RANGE static const char methodName72[10] PROGMEM = "ledStatus";
RANGE static const char methodName73[22] PROGMEM = "scjhelloworld.Led.off";
RANGE static const char methodName74[21] PROGMEM = "scjhelloworld.Led.on";
RANGE static const char methodName75[36] PROGMEM = "scjhelloworld.TestProcess$P1.<init>";
RANGE static const char methodName76[36] PROGMEM = "scjhelloworld.TestProcess$P1.<init>";
RANGE static const char methodName77[40] PROGMEM = "scjhelloworld.TestProcess$P1.catchError";
RANGE static const char methodName78[33] PROGMEM = "scjhelloworld.TestProcess$P1.run";
RANGE static const char methodName79[36] PROGMEM = "scjhelloworld.TestProcess$P2.<init>";
RANGE static const char methodName80[36] PROGMEM = "scjhelloworld.TestProcess$P2.<init>";
RANGE static const char methodName81[40] PROGMEM = "scjhelloworld.TestProcess$P2.catchError";
RANGE static const char methodName82[33] PROGMEM = "scjhelloworld.TestProcess$P2.run";
RANGE static const char methodName83[35] PROGMEM = "scjhelloworld.TestProcess.access$0";
RANGE static const char methodName84[35] PROGMEM = "scjhelloworld.TestProcess.access$1";
RANGE static const char methodName85[35] PROGMEM = "scjhelloworld.TestProcess.access$2";
RANGE static const char methodName86[31] PROGMEM = "scjhelloworld.TestProcess.main";
RANGE static const char methodName87[31] PROGMEM = "vm.ClockInterruptHandler.yield";
RANGE static const char methodName88[34] PROGMEM = "vm.Process$ProcessExecutor.<init>";
RANGE static const char methodName89[31] PROGMEM = "vm.Process$ProcessExecutor.run";
RANGE static const char methodName90[21] PROGMEM = "vm.Process$SP.<init>";
RANGE static const char methodName91[21] PROGMEM = "vm.Process$SP.<init>";
RANGE static const char methodName92[27] PROGMEM = "vm.Process$X86_32SP.<init>";
RANGE static const char methodName93[27] PROGMEM = "vm.Process$X86_32SP.<init>";
RANGE static const char methodName94[27] PROGMEM = "vm.Process$X86_64SP.<init>";
RANGE static const char methodName95[27] PROGMEM = "vm.Process$X86_64SP.<init>";
RANGE static const char methodName96[18] PROGMEM = "vm.Process.<init>";
RANGE static const char methodName97[20] PROGMEM = "vm.Process.access$0";
RANGE static const char methodName98[20] PROGMEM = "vm.Process.access$1";
RANGE static const char methodName99[17] PROGMEM = "executeWithStack";
RANGE static const char methodName100[22] PROGMEM = "vm.Process.initialize";
RANGE static const char methodName101[9] PROGMEM = "transfer";
RANGE static const char methodName102[22] PROGMEM = "vm.Process.transferTo";

static RANGE const MethodInfo _methods[103] PROGMEM = {
	{	3, 2, 1, 0, 32, 0, 0, 0, 0, (int16 (*)(int32 *))devices_Console_clinit_, methodName0},
	{	3, 4, 4, 2, 33, 0, 0, 0, 0, (int16 (*)(int32 *))devices_Console_getBytes, methodName1},
	{	3, 2, 1, 1, 32, 0, 0, 0, 0, (int16 (*)(int32 *))devices_Console_println, methodName2},
	{	3, 3, 3, 2, 32, 0, 0, 0, 0, (int16 (*)(int32 *))devices_Console_println_, methodName3},
	{	4, 1, 1, 0, 64, 0, 0, 0, 0, (int16 (*)(int32 *))devices_X86Writer_init_, methodName4},
	{	4, 0, 0, 2, 32, 0, 0, 0, 0, n_devices_X86Writer_nwrite, methodName5},
	{	4, 2, 3, 2, 32, 0, 0, 0, 0, (int16 (*)(int32 *))devices_X86Writer_write, methodName6},
	{	5, 2, 2, 1, 64, 0, 0, 0, 0, (int16 (*)(int32 *))java_lang_AbstractStringBuilder_init_, methodName7},
	{	5, 3, 4, 1, 33, 0, 0, 0, 0, (int16 (*)(int32 *))java_lang_AbstractStringBuilder_append, methodName8},
	{	5, 5, 3, 1, 33, 0, 0, 0, 0, (int16 (*)(int32 *))java_lang_AbstractStringBuilder_append_, methodName9},
	{	5, 3, 3, 0, 33, 0, 0, 0, 0, (int16 (*)(int32 *))java_lang_AbstractStringBuilder_appendNull, methodName10},
	{	5, 2, 2, 1, 32, 0, 0, 0, 0, (int16 (*)(int32 *))java_lang_AbstractStringBuilder_ensureCapacityInternal, methodName11},
	{	5, 3, 3, 1, 32, 0, 0, 0, 0, (int16 (*)(int32 *))java_lang_AbstractStringBuilder_expandCapacity, methodName12},
	{	6, 1, 1, 0, 64, 0, 0, 8, java_lang_ArithmeticException_init_, 0, methodName13},
	{	7, 1, 1, 0, 64, 0, 0, 0, 0, (int16 (*)(int32 *))java_lang_ArrayIndexOutOfBoundsException_init_, methodName14},
	{	8, 1, 1, 0, 64, 0, 0, 0, 0, (int16 (*)(int32 *))java_lang_AssertionError_init_, methodName15},
	{	9, 0, 0, 0, 32, 0, 0, 0, 0, n_java_lang_Class_clinit_, methodName16},
	{	9, 0, 0, 0, 1, 0, 0, 0, 0, n_java_lang_Class_desiredAssertionStatus, methodName17},
	{	9, 0, 0, 1, 33, 0, 0, 0, 0, n_java_lang_Class_getPrimitiveClass, methodName18},
	{	10, 1, 1, 0, 32, 0, 0, 0, 0, (int16 (*)(int32 *))java_lang_Double_clinit_, methodName19},
	{	10, 0, 0, 2, 22, 0, 0, 0, 0, n_java_lang_Double_doubleToRawLongBits, methodName20},
	{	10, 0, 0, 2, 26, 0, 0, 0, 0, n_java_lang_Double_longBitsToDouble, methodName21},
	{	11, 1, 1, 0, 64, 0, 0, 0, 0, (int16 (*)(int32 *))java_lang_Error_init_, methodName22},
	{	12, 1, 1, 0, 64, 0, 0, 0, 0, (int16 (*)(int32 *))java_lang_Exception_init_, methodName23},
	{	12, 2, 2, 1, 64, 0, 0, 0, 0, (int16 (*)(int32 *))java_lang_Exception_init__, methodName24},
	{	13, 1, 1, 0, 32, 0, 0, 0, 0, (int16 (*)(int32 *))java_lang_Float_clinit_, methodName25},
	{	13, 0, 0, 1, 17, 0, 0, 0, 0, n_java_lang_Float_floatToRawIntBits, methodName26},
	{	14, 2, 2, 1, 64, 0, 0, 0, 0, (int16 (*)(int32 *))java_lang_IllegalArgumentException_init_, methodName27},
	{	15, 1, 1, 0, 64, 0, 0, 0, 0, (int16 (*)(int32 *))java_lang_IllegalMonitorStateException_init_, methodName28},
	{	16, 1, 1, 0, 64, 0, 0, 0, 0, (int16 (*)(int32 *))java_lang_IndexOutOfBoundsException_init_, methodName29},
	{	16, 2, 2, 1, 64, 0, 0, 0, 0, (int16 (*)(int32 *))java_lang_IndexOutOfBoundsException_init__, methodName30},
	{	17, 4, 1, 0, 32, 0, 0, 0, 0, (int16 (*)(int32 *))java_lang_Integer_clinit_, methodName31},
	{	17, 4, 7, 3, 32, 0, 0, 0, 0, (int16 (*)(int32 *))java_lang_Integer_getChars, methodName32},
	{	17, 3, 2, 1, 17, 0, 0, 0, 0, (int16 (*)(int32 *))java_lang_Integer_stringSize, methodName33},
	{	18, 2, 1, 0, 32, 0, 0, 0, 0, (int16 (*)(int32 *))java_lang_Math_clinit_, methodName34},
	{	18, 1, 1, 0, 64, 0, 0, 0, 0, (int16 (*)(int32 *))java_lang_Math_init_, methodName35},
	{	18, 2, 2, 2, 17, 0, 0, 0, 0, (int16 (*)(int32 *))java_lang_Math_min, methodName36},
	{	18, 4, 1, 1, 26, 0, 0, 0, 0, (int16 (*)(int32 *))java_lang_Math_powerOfTwoD, methodName37},
	{	19, 1, 1, 0, 64, 0, 0, 0, 0, (int16 (*)(int32 *))java_lang_NegativeArraySizeException_init_, methodName38},
	{	20, 1, 1, 0, 64, 0, 0, 8, java_lang_NullPointerException_init_, 0, methodName39},
	{	22, 0, 1, 0, 64, 0, 0, 0, 0, (int16 (*)(int32 *))java_lang_Object_init_, methodName40},
	{	23, 1, 1, 0, 64, 0, 0, 8, java_lang_OutOfMemoryError_init_, 0, methodName41},
	{	24, 1, 1, 0, 64, 0, 0, 0, 0, (int16 (*)(int32 *))java_lang_RuntimeException_init_, methodName42},
	{	24, 2, 2, 1, 64, 0, 0, 0, 0, (int16 (*)(int32 *))java_lang_RuntimeException_init__, methodName43},
	{	25, 3, 2, 1, 64, 0, 0, 22, java_lang_String_initFromCharArray, 0, methodName44},
	{	25, 5, 4, 3, 64, 0, 0, 0, 0, (int16 (*)(int32 *))java_lang_String_init__, methodName45},
	{	25, 3, 2, 1, 13, 0, 0, 0, 0, (int16 (*)(int32 *))java_lang_String_charAt, methodName46},
	{	25, 6, 5, 4, 32, 0, 0, 0, 0, (int16 (*)(int32 *))java_lang_String_getChars, methodName47},
	{	25, 1, 1, 0, 17, 0, 0, 0, 0, (int16 (*)(int32 *))java_lang_String_length, methodName48},
	{	26, 2, 1, 0, 64, 0, 0, 0, 0, (int16 (*)(int32 *))java_lang_StringBuilder_init_, methodName49},
	{	26, 2, 2, 1, 33, 0, 0, 0, 0, (int16 (*)(int32 *))java_lang_StringBuilder_append_, methodName50},
	{	26, 2, 2, 1, 33, 0, 0, 0, 0, (int16 (*)(int32 *))java_lang_StringBuilder_append__, methodName51},
	{	26, 2, 2, 1, 33, 0, 0, 0, 0, (int16 (*)(int32 *))java_lang_StringBuilder_append___, methodName52},
	{	26, 5, 1, 0, 33, 0, 0, 0, 0, (int16 (*)(int32 *))java_lang_StringBuilder_toString, methodName53},
	{	27, 3, 2, 1, 64, 0, 0, 0, 0, (int16 (*)(int32 *))java_lang_StringIndexOutOfBoundsException_init_, methodName54},
	{	28, 1, 1, 0, 32, 0, 0, 0, 0, (int16 (*)(int32 *))java_lang_System_clinit_, methodName55},
	{	28, 0, 0, 5, 32, 0, 0, 0, 0, n_java_lang_System_arraycopy, methodName56},
	{	28, 0, 0, 0, 32, 0, 0, 0, 0, n_java_lang_System_registerNatives, methodName57},
	{	29, 0, 0, 0, 32, 0, 0, 0, 0, n_java_lang_Throwable_clinit_, methodName58},
	{	29, 2, 1, 0, 64, 0, 0, 0, 0, (int16 (*)(int32 *))java_lang_Throwable_init_, methodName59},
	{	29, 2, 2, 1, 64, 0, 0, 0, 0, (int16 (*)(int32 *))java_lang_Throwable_init__, methodName60},
	{	29, 2, 1, 0, 161, 0, 0, 0, 0, (int16 (*)(int32 *))java_lang_Throwable_fillInStackTrace, methodName61},
	{	29, 0, 0, 1, 33, 0, 0, 0, 0, n_java_lang_Throwable_fillInStackTrace_, methodName62},
	{	30, 1, 1, 0, 64, 0, 0, 0, 0, (int16 (*)(int32 *))java_lang_VirtualMachineError_init_, methodName63},
	{	31, 1, 1, 0, 32, 0, 0, 0, 0, (int16 (*)(int32 *))java_util_Arrays_clinit_, methodName64},
	{	31, 1, 1, 0, 64, 0, 0, 0, 0, (int16 (*)(int32 *))java_util_Arrays_init_, methodName65},
	{	31, 6, 3, 2, 33, 0, 0, 0, 0, (int16 (*)(int32 *))java_util_Arrays_copyOf, methodName66},
	{	31, 6, 5, 3, 33, 0, 0, 0, 0, (int16 (*)(int32 *))java_util_Arrays_copyOfRange, methodName67},
	{	32, 2, 2, 1, 64, 0, 0, 0, 0, (int16 (*)(int32 *))scjhelloworld_Delay_init_, methodName68},
	{	32, 2, 1, 0, 32, 0, 0, 0, 0, (int16 (*)(int32 *))scjhelloworld_Delay_delay, methodName69},
	{	32, 0, 0, 1, 32, 0, 0, 0, 0, n_scjhelloworld_Delay_delayTicks, methodName70},
	{	33, 2, 2, 1, 64, 0, 0, 0, 0, (int16 (*)(int32 *))scjhelloworld_Led_init_, methodName71},
	{	33, 0, 0, 2, 32, 0, 0, 0, 0, n_scjhelloworld_Led_ledStatus, methodName72},
	{	33, 3, 1, 0, 32, 0, 0, 0, 0, (int16 (*)(int32 *))scjhelloworld_Led_off, methodName73},
	{	33, 3, 1, 0, 32, 0, 0, 0, 0, (int16 (*)(int32 *))scjhelloworld_Led_on, methodName74},
	{	35, 1, 1, 0, 64, 0, 0, 0, 0, (int16 (*)(int32 *))scjhelloworld_TestProcess_P1_init_, methodName75},
	{	35, 1, 2, 1, 64, 0, 0, 0, 0, (int16 (*)(int32 *))scjhelloworld_TestProcess_P1_init__, methodName76},
	{	35, 3, 6, 1, 32, 0, 0, 0, 0, (int16 (*)(int32 *))scjhelloworld_TestProcess_P1_catchError, methodName77},
	{	35, 3, 6, 0, 32, 0, 0, 0, 0, (int16 (*)(int32 *))scjhelloworld_TestProcess_P1_run, methodName78},
	{	36, 1, 1, 0, 64, 0, 0, 0, 0, (int16 (*)(int32 *))scjhelloworld_TestProcess_P2_init_, methodName79},
	{	36, 1, 2, 1, 64, 0, 0, 0, 0, (int16 (*)(int32 *))scjhelloworld_TestProcess_P2_init__, methodName80},
	{	36, 3, 6, 1, 32, 0, 0, 0, 0, (int16 (*)(int32 *))scjhelloworld_TestProcess_P2_catchError, methodName81},
	{	36, 3, 6, 0, 32, 0, 0, 0, 0, (int16 (*)(int32 *))scjhelloworld_TestProcess_P2_run, methodName82},
	{	34, 1, 1, 0, 33, 0, 0, 0, 0, (int16 (*)(int32 *))scjhelloworld_TestProcess_access_0, methodName83},
	{	34, 1, 1, 0, 33, 0, 0, 0, 0, (int16 (*)(int32 *))scjhelloworld_TestProcess_access_1, methodName84},
	{	34, 1, 1, 0, 33, 0, 0, 0, 0, (int16 (*)(int32 *))scjhelloworld_TestProcess_access_2, methodName85},
	{	34, 5, 6, 1, 32, 0, 0, 0, 0, (int16 (*)(int32 *))scjhelloworld_TestProcess_main, methodName86},
	{	38, 1, 1, 0, 32, 0, 0, 0, 0, (int16 (*)(int32 *))vm_ClockInterruptHandler_yield, methodName87},
	{	40, 2, 2, 1, 64, 0, 0, 0, 0, (int16 (*)(int32 *))vm_Process_ProcessExecutor_init_, methodName88},
	{	40, 2, 2, 0, 32, 1, ex_vm_Process_ProcessExecutor_run, 0, 0, (int16 (*)(int32 *))vm_Process_ProcessExecutor_run, methodName89},
	{	41, 1, 1, 0, 64, 0, 0, 0, 0, (int16 (*)(int32 *))vm_Process_SP_init_, methodName90},
	{	41, 1, 2, 1, 64, 0, 0, 0, 0, (int16 (*)(int32 *))vm_Process_SP_init__, methodName91},
	{	42, 2, 1, 0, 64, 0, 0, 0, 0, (int16 (*)(int32 *))vm_Process_X86_32SP_init_, methodName92},
	{	42, 1, 2, 1, 64, 0, 0, 0, 0, (int16 (*)(int32 *))vm_Process_X86_32SP_init__, methodName93},
	{	43, 2, 1, 0, 64, 0, 0, 0, 0, (int16 (*)(int32 *))vm_Process_X86_64SP_init_, methodName94},
	{	43, 1, 2, 1, 64, 0, 0, 0, 0, (int16 (*)(int32 *))vm_Process_X86_64SP_init__, methodName95},
	{	39, 4, 3, 2, 64, 0, 0, 0, 0, (int16 (*)(int32 *))vm_Process_init_, methodName96},
	{	39, 1, 1, 1, 33, 0, 0, 0, 0, (int16 (*)(int32 *))vm_Process_access_0, methodName97},
	{	39, 2, 2, 2, 32, 0, 0, 0, 0, (int16 (*)(int32 *))vm_Process_access_1, methodName98},
	{	39, 0, 0, 2, 32, 0, 0, 0, 0, n_vm_Process_executeWithStack, methodName99},
	{	39, 2, 1, 0, 32, 0, 0, 0, 0, (int16 (*)(int32 *))vm_Process_initialize, methodName100},
	{	39, 0, 0, 2, 32, 0, 0, 0, 0, n_vm_Process_transfer, methodName101},
	{	39, 2, 2, 1, 32, 0, 0, 0, 0, (int16 (*)(int32 *))vm_Process_transferTo, methodName102}
};

RANGE static const unsigned char string_constant_1[12] PROGMEM = {0x2D,0x32,0x31,0x34,0x37,0x34,0x38,0x33,0x36,0x34,0x38,0x00}; /* -2147483648 */
RANGE static const unsigned char string_constant_3[7] PROGMEM = {0x64,0x6F,0x75,0x62,0x6C,0x65,0x00}; /* double */
RANGE static const unsigned char string_constant_4[6] PROGMEM = {0x66,0x6C,0x6F,0x61,0x74,0x00}; /* float */
RANGE static const unsigned char string_constant_5[4] PROGMEM = {0x69,0x6E,0x74,0x00}; /* int */
RANGE static const double double_constant_15 PROGMEM = -0.0;
RANGE static const unsigned char long_constant_16[8] PROGMEM = {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3, 0xff};
RANGE static const unsigned char long_constant_17[8] PROGMEM = {0x7f, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0};
RANGE static const unsigned char string_constant_18[1] PROGMEM = {0x00}; /*  */
RANGE static const unsigned char string_constant_19[28] PROGMEM = {0x53,0x74,0x72,0x69,0x6E,0x67,0x20,0x69,0x6E,0x64,0x65,0x78,0x20,0x6F,0x75,0x74,
	0x20,0x6F,0x66,0x20,0x72,0x61,0x6E,0x67,0x65,0x3A,0x20,0x00}; /* String index out of range:  */
RANGE static const unsigned char string_constant_21[4] PROGMEM = {0x20,0x3E,0x20,0x00}; /*  >  */
RANGE static const unsigned char string_constant_22[20] PROGMEM = {0x45,0x72,0x72,0x6F,0x72,0x20,0x65,0x6E,0x20,0x50,0x72,0x6F,0x63,0x65,0x73,0x6F,
	0x20,0x31,0x2E,0x00}; /* Error en Proceso 1. */
RANGE static const unsigned char string_constant_23[38] PROGMEM = {0x50,0x72,0x6F,0x63,0x65,0x73,0x6F,0x20,0x31,0x2E,0x20,0x54,0x72,0x61,0x6E,0x73,
	0x66,0x65,0x72,0x65,0x6E,0x69,0x63,0x61,0x20,0x61,0x20,0x50,0x72,0x6F,0x63,0x65,
	0x73,0x6F,0x20,0x32,0x2E,0x00}; /* Proceso 1. Transferenica a Proceso 2. */
RANGE static const unsigned char string_constant_24[20] PROGMEM = {0x45,0x72,0x72,0x6F,0x72,0x20,0x65,0x6E,0x20,0x50,0x72,0x6F,0x63,0x65,0x73,0x6F,
	0x20,0x32,0x2E,0x00}; /* Error en Proceso 2. */
RANGE static const unsigned char string_constant_25[46] PROGMEM = {0x50,0x72,0x6F,0x63,0x65,0x73,0x6F,0x20,0x32,0x2E,0x20,0x54,0x72,0x61,0x6E,0x73,
	0x66,0x65,0x72,0x65,0x6E,0x69,0x63,0x61,0x20,0x61,0x20,0x50,0x72,0x6F,0x63,0x65,
	0x73,0x6F,0x20,0x50,0x72,0x69,0x6E,0x63,0x69,0x70,0x61,0x6C,0x2E,0x00}; /* Proceso 2. Transferenica a Proceso Principal. */
RANGE static const unsigned char string_constant_26[29] PROGMEM = {0x49,0x6E,0x69,0x63,0x69,0x6F,0x20,0x64,0x65,0x20,0x50,0x72,0x6F,0x63,0x65,0x73,
	0x6F,0x20,0x50,0x72,0x69,0x6E,0x63,0x69,0x70,0x61,0x6C,0x2E,0x00}; /* Inicio de Proceso Principal. */
RANGE static const unsigned char string_constant_27[55] PROGMEM = {0x46,0x69,0x6E,0x20,0x64,0x65,0x20,0x50,0x72,0x6F,0x63,0x65,0x73,0x6F,0x20,0x50,
	0x72,0x69,0x6E,0x63,0x69,0x70,0x61,0x6C,0x2C,0x20,0x73,0x65,0x20,0x64,0x65,0x6A,
	0x61,0x20,0x65,0x6E,0x20,0x75,0x6E,0x20,0x6C,0x6F,0x6F,0x70,0x20,0x69,0x6E,0x66,
	0x69,0x6E,0x69,0x74,0x6F,0x2E,0x00}; /* Fin de Proceso Principal, se deja en un loop infinito. */

RANGE static const ConstantInfo _constants[28] PROGMEM = {
	{	CONSTANT_INTEGER, -2147483648, 0, 0},
	{	CONSTANT_STRING, 11, string_constant_1, 0},
	{	CONSTANT_INTEGER, 2147483647, 0, 0},
	{	CONSTANT_STRING, 65542, string_constant_3, 0},
	{	CONSTANT_STRING, 131077, string_constant_4, 0},
	{	CONSTANT_STRING, 196611, string_constant_5, 0},
	{	CONSTANT_INTEGER, 99999, 0, 0},
	{	CONSTANT_INTEGER, 999999, 0, 0},
	{	CONSTANT_INTEGER, 9999999, 0, 0},
	{	CONSTANT_INTEGER, 99999999, 0, 0},
	{	CONSTANT_INTEGER, 999999999, 0, 0},
	{	CONSTANT_INTEGER, 65536, 0, 0},
	{	CONSTANT_INTEGER, 52429, 0, 0},
	{	CONSTANT_CLASS, 18, 0, 0},
	{	CONSTANT_FLOAT, 0, 0, -0.0},
	{	CONSTANT_DOUBLE, 0, &double_constant_15, 0},
	{	CONSTANT_LONG, 0, long_constant_16, 0},
	{	CONSTANT_LONG, 0, long_constant_17, 0},
	{	CONSTANT_STRING, 262144, string_constant_18, 0},
	{	CONSTANT_STRING, 327707, string_constant_19, 0},
	{	CONSTANT_CLASS, 31, 0, 0},
	{	CONSTANT_STRING, 393219, string_constant_21, 0},
	{	CONSTANT_STRING, 458771, string_constant_22, 0},
	{	CONSTANT_STRING, 524325, string_constant_23, 0},
	{	CONSTANT_STRING, 589843, string_constant_24, 0},
	{	CONSTANT_STRING, 655405, string_constant_25, 0},
	{	CONSTANT_STRING, 720924, string_constant_26, 0},
	{	CONSTANT_STRING, 786486, string_constant_27, 0}
};
Object* stringConstants[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

const uint16 mainMethodIndex = 86;

RANGE static const short _classInitializerSequence[4] PROGMEM = {58, 34, 0, 31};

#if defined(PRE_INITIALIZE_EXCEPTIONS)
static ExceptionObject _exceptionObjects[11] = {
	{	6, 13, 0},
	{	7, 14, 0},
	{	8, 15, 0},
	{	11, 22, 0},
	{	15, 28, 0},
	{	16, 29, 0},
	{	19, 38, 0},
	{	20, 39, 0},
	{	23, 41, 0},
	{	24, 42, 0},
	{	30, 63, 0},
};
#endif
const MethodInfo *methods;
const ConstantInfo *constants;
const short* classInitializerSequence;

#if defined(PRE_INITIALIZE_EXCEPTIONS)
ExceptionObject* exceptionObjects;
#endif

unsigned char initMethods(void) {
	methods = &_methods[0];
	constants = &_constants[0];
#if defined(PRE_INITIALIZE_EXCEPTIONS)
	exceptionObjects = &_exceptionObjects[0];
#endif

	classInitializerSequence = &_classInitializerSequence[0];
	return 1;
}

