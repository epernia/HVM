#include "natives.h"

#include <stdio.h>

#include <stdlib.h>

extern void dumpByte(unsigned char b);
void dumpNativeFunc(int16 (*nativeFunc)(int32 *sp), const char* functionName) {
	if (nativeFunc == n_devices_X86Writer_nwrite) {
		dumpByte (N_DEVICES_X86WRITER_NWRITE_NUM);
	} else if (nativeFunc == n_java_lang_Class_clinit_) {
		dumpByte (N_JAVA_LANG_CLASS_CLINIT__NUM);
	} else if (nativeFunc == n_java_lang_Class_desiredAssertionStatus) {
		dumpByte (N_JAVA_LANG_CLASS_DESIREDASSERTIONSTATUS_NUM);
	} else if (nativeFunc == n_java_lang_Class_getComponentType) {
		dumpByte (N_JAVA_LANG_CLASS_GETCOMPONENTTYPE_NUM);
	} else if (nativeFunc == n_java_lang_Class_getName0) {
		dumpByte (N_JAVA_LANG_CLASS_GETNAME0_NUM);
	} else if (nativeFunc == n_java_lang_Class_getPrimitiveClass) {
		dumpByte (N_JAVA_LANG_CLASS_GETPRIMITIVECLASS_NUM);
	} else if (nativeFunc == n_java_lang_Double_doubleToRawLongBits) {
		dumpByte (N_JAVA_LANG_DOUBLE_DOUBLETORAWLONGBITS_NUM);
	} else if (nativeFunc == n_java_lang_Double_longBitsToDouble) {
		dumpByte (N_JAVA_LANG_DOUBLE_LONGBITSTODOUBLE_NUM);
	} else if (nativeFunc == n_java_lang_Float_floatToRawIntBits) {
		dumpByte (N_JAVA_LANG_FLOAT_FLOATTORAWINTBITS_NUM);
	} else if (nativeFunc == n_java_lang_Object_getClass) {
		dumpByte (N_JAVA_LANG_OBJECT_GETCLASS_NUM);
	} else if (nativeFunc == n_java_lang_System_arraycopy) {
		dumpByte (N_JAVA_LANG_SYSTEM_ARRAYCOPY_NUM);
	} else if (nativeFunc == n_java_lang_System_registerNatives) {
		dumpByte (N_JAVA_LANG_SYSTEM_REGISTERNATIVES_NUM);
	} else if (nativeFunc == n_java_lang_Throwable_clinit_) {
		dumpByte (N_JAVA_LANG_THROWABLE_CLINIT__NUM);
	} else if (nativeFunc == n_java_lang_Throwable_fillInStackTrace_) {
		dumpByte (N_JAVA_LANG_THROWABLE_FILLINSTACKTRACE__NUM);
	} else if (nativeFunc == n_java_lang_reflect_Array_newArray) {
		dumpByte (N_JAVA_LANG_REFLECT_ARRAY_NEWARRAY_NUM);
	} else if (nativeFunc == n_vm_Process_executeWithStack) {
		dumpByte (N_VM_PROCESS_EXECUTEWITHSTACK_NUM);
	} else if (nativeFunc == n_vm_Process_transfer) {
		dumpByte (N_VM_PROCESS_TRANSFER_NUM);
	} else if (nativeFunc == n_vm_RealtimeClock_awaitNextTick) {
		dumpByte (N_VM_REALTIMECLOCK_AWAITNEXTTICK_NUM);
	} else if (nativeFunc == n_vm_RealtimeClock_getNativeResolution) {
		dumpByte (N_VM_REALTIMECLOCK_GETNATIVERESOLUTION_NUM);
	} else if (nativeFunc == n_vm_RealtimeClock_getNativeTime) {
		dumpByte (N_VM_REALTIMECLOCK_GETNATIVETIME_NUM);
	} else {
		printf("Unsupported native function (%s)\n", functionName);
		exit(3);
	}
}

int16 n_devices_X86Writer_nwrite(int32 *sp) {
	return -1;
}

int16 n_java_lang_Class_clinit_(int32 *sp) {
	return -1;
}

int16 n_java_lang_Class_desiredAssertionStatus(int32 *sp) {
	return -1;
}

int16 n_java_lang_Class_getComponentType(int32 *sp) {
	return -1;
}

int16 n_java_lang_Class_getName0(int32 *sp) {
	return -1;
}

int16 n_java_lang_Class_getPrimitiveClass(int32 *sp) {
	return -1;
}

int16 n_java_lang_Double_doubleToRawLongBits(int32 *sp) {
	return -1;
}

int16 n_java_lang_Double_longBitsToDouble(int32 *sp) {
	return -1;
}

int16 n_java_lang_Float_floatToRawIntBits(int32 *sp) {
	return -1;
}

int16 n_java_lang_Object_getClass(int32 *sp) {
	return -1;
}

int16 n_java_lang_System_arraycopy(int32 *sp) {
	return -1;
}

int16 n_java_lang_System_registerNatives(int32 *sp) {
	return -1;
}

int16 n_java_lang_Throwable_clinit_(int32 *sp) {
	return -1;
}

int16 n_java_lang_Throwable_fillInStackTrace_(int32 *sp) {
	return -1;
}

int16 n_java_lang_reflect_Array_newArray(int32 *sp) {
	return -1;
}

int16 n_vm_Process_executeWithStack(int32 *sp) {
	return -1;
}

int16 n_vm_Process_transfer(int32 *sp) {
	return -1;
}

int16 n_vm_RealtimeClock_awaitNextTick(int32 *sp) {
	return -1;
}

int16 n_vm_RealtimeClock_getNativeResolution(int32 *sp) {
	return -1;
}

int16 n_vm_RealtimeClock_getNativeTime(int32 *sp) {
	return -1;
}

