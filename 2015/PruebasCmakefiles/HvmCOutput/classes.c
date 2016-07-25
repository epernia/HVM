#include "types.h"
#include "methods.h"
#include "ostypes.h"
#include "classes.h"


static unsigned char _classData[227] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

RANGE static const uint32 _staticReferenceOffsets[21] PROGMEM = { 20, offsetof(struct _staticClassFields_c, bytes_f), offsetof(struct _staticClassFields_c, writer_f), offsetof(struct _staticClassFields_c, TYPE_f__f), offsetof(struct _staticClassFields_c, TYPE_f), offsetof(struct _staticClassFields_c, TYPE_f__f__f), offsetof(struct _staticClassFields_c, digits_f), offsetof(struct _staticClassFields_c, DigitTens_f), offsetof(struct _staticClassFields_c, DigitOnes_f), offsetof(struct _staticClassFields_c, sizeTable_f), offsetof(struct _staticClassFields_c, in_f), offsetof(struct _staticClassFields_c, out_f), offsetof(struct _staticClassFields_c, err_f), offsetof(struct _staticClassFields_c, security_f), offsetof(struct _staticClassFields_c, cons_f), offsetof(struct _staticClassFields_c, UNASSIGNED_STACK_f), offsetof(struct _staticClassFields_c, SUPPRESSED_SENTINEL_f), offsetof(struct _staticClassFields_c, p1_f), offsetof(struct _staticClassFields_c, p2_f), offsetof(struct _staticClassFields_c, mainProcess_f), offsetof(struct _staticClassFields_c, instance_f)};


RANGE static const unsigned short class4interfaces[2] PROGMEM = { 1, 5 };
RANGE static const unsigned short class38interfaces[3] PROGMEM = { 2, 7, 8 };
RANGE static const unsigned short class35interfaces[3] PROGMEM = { 2, 7, 8 };
RANGE static const unsigned short class36interfaces[3] PROGMEM = { 2, 7, 8 };
RANGE static const unsigned short class40interfaces[2] PROGMEM = { 1, 8 };
RANGE uint16 NUMBEROFCLASSES_var = NUMBEROFCLASSES;


RANGE static const char className0[3] PROGMEM = "[B";
RANGE static const char className1[3] PROGMEM = "[C";
RANGE static const char className2[3] PROGMEM = "[I";
RANGE static const char className3[16] PROGMEM = "devices.Console";
RANGE static const char className4[18] PROGMEM = "devices.X86Writer";
RANGE static const char className5[32] PROGMEM = "java.lang.AbstractStringBuilder";
RANGE static const char className6[30] PROGMEM = "java.lang.ArithmeticException";
RANGE static const char className7[41] PROGMEM = "java.lang.ArrayIndexOutOfBoundsException";
RANGE static const char className8[25] PROGMEM = "java.lang.AssertionError";
RANGE static const char className9[16] PROGMEM = "java.lang.Class";
RANGE static const char className10[17] PROGMEM = "java.lang.Double";
RANGE static const char className11[16] PROGMEM = "java.lang.Error";
RANGE static const char className12[20] PROGMEM = "java.lang.Exception";
RANGE static const char className13[16] PROGMEM = "java.lang.Float";
RANGE static const char className14[35] PROGMEM = "java.lang.IllegalArgumentException";
RANGE static const char className15[39] PROGMEM = "java.lang.IllegalMonitorStateException";
RANGE static const char className16[36] PROGMEM = "java.lang.IndexOutOfBoundsException";
RANGE static const char className17[18] PROGMEM = "java.lang.Integer";
RANGE static const char className18[15] PROGMEM = "java.lang.Math";
RANGE static const char className19[37] PROGMEM = "java.lang.NegativeArraySizeException";
RANGE static const char className20[31] PROGMEM = "java.lang.NullPointerException";
RANGE static const char className21[17] PROGMEM = "java.lang.Number";
RANGE static const char className22[17] PROGMEM = "java.lang.Object";
RANGE static const char className23[27] PROGMEM = "java.lang.OutOfMemoryError";
RANGE static const char className24[27] PROGMEM = "java.lang.RuntimeException";
RANGE static const char className25[17] PROGMEM = "java.lang.String";
RANGE static const char className26[24] PROGMEM = "java.lang.StringBuilder";
RANGE static const char className27[42] PROGMEM = "java.lang.StringIndexOutOfBoundsException";
RANGE static const char className28[17] PROGMEM = "java.lang.System";
RANGE static const char className29[20] PROGMEM = "java.lang.Throwable";
RANGE static const char className30[30] PROGMEM = "java.lang.VirtualMachineError";
RANGE static const char className31[17] PROGMEM = "java.util.Arrays";
RANGE static const char className32[20] PROGMEM = "scjhelloworld.Delay";
RANGE static const char className33[18] PROGMEM = "scjhelloworld.Led";
RANGE static const char className34[26] PROGMEM = "scjhelloworld.TestProcess";
RANGE static const char className35[29] PROGMEM = "scjhelloworld.TestProcess$P1";
RANGE static const char className36[29] PROGMEM = "scjhelloworld.TestProcess$P2";
RANGE static const char className37[16] PROGMEM = "vm.Architecture";
RANGE static const char className38[25] PROGMEM = "vm.ClockInterruptHandler";
RANGE static const char className39[11] PROGMEM = "vm.Process";
RANGE static const char className40[27] PROGMEM = "vm.Process$ProcessExecutor";
RANGE static const char className41[14] PROGMEM = "vm.Process$SP";
RANGE static const char className42[20] PROGMEM = "vm.Process$X86_32SP";
RANGE static const char className43[20] PROGMEM = "vm.Process$X86_64SP";

#if defined(SUPPORTGC)
RANGE const static unsigned short JAVA_LANG_THROWABLE_references[4] PROGMEM = {
    0x5,
    0x400,
    0xc08,
    0x10
};
RANGE const static unsigned short JAVA_LANG_INDEXOUTOFBOUNDSEXCEPTION_references[4] PROGMEM = {
    0x5,
    0x400,
    0xc08,
    0x10
};
RANGE const static unsigned short JAVA_LANG_ERROR_references[4] PROGMEM = {
    0x5,
    0x400,
    0xc08,
    0x10
};
RANGE const static unsigned short JAVA_LANG_ASSERTIONERROR_references[4] PROGMEM = {
    0x5,
    0x400,
    0xc08,
    0x10
};
RANGE const static unsigned short VM_PROCESS_PROCESSEXECUTOR_references[2] PROGMEM = {
    0x1,
    0x0
};
RANGE const static unsigned short JAVA_LANG_NULLPOINTEREXCEPTION_references[4] PROGMEM = {
    0x5,
    0x400,
    0xc08,
    0x10
};
RANGE const static unsigned short JAVA_LANG_ILLEGALMONITORSTATEEXCEPTION_references[4] PROGMEM = {
    0x5,
    0x400,
    0xc08,
    0x10
};
RANGE const static unsigned short JAVA_LANG_VIRTUALMACHINEERROR_references[4] PROGMEM = {
    0x5,
    0x400,
    0xc08,
    0x10
};
RANGE const static unsigned short JAVA_LANG_ABSTRACTSTRINGBUILDER_references[2] PROGMEM = {
    0x1,
    0x0
};
RANGE const static unsigned short JAVA_LANG_ARITHMETICEXCEPTION_references[4] PROGMEM = {
    0x5,
    0x400,
    0xc08,
    0x10
};
RANGE const static unsigned short JAVA_LANG_STRING_references[2] PROGMEM = {
    0x1,
    0x0
};
RANGE const static unsigned short JAVA_LANG_NEGATIVEARRAYSIZEEXCEPTION_references[4] PROGMEM = {
    0x5,
    0x400,
    0xc08,
    0x10
};
RANGE const static unsigned short VM_PROCESS_references[3] PROGMEM = {
    0x4,
    0x400,
    0xc08
};
RANGE const static unsigned short JAVA_LANG_STRINGINDEXOUTOFBOUNDSEXCEPTION_references[4] PROGMEM = {
    0x5,
    0x400,
    0xc08,
    0x10
};
RANGE const static unsigned short JAVA_LANG_RUNTIMEEXCEPTION_references[4] PROGMEM = {
    0x5,
    0x400,
    0xc08,
    0x10
};
RANGE const static unsigned short JAVA_LANG_ARRAYINDEXOUTOFBOUNDSEXCEPTION_references[4] PROGMEM = {
    0x5,
    0x400,
    0xc08,
    0x10
};
RANGE const static unsigned short JAVA_LANG_ILLEGALARGUMENTEXCEPTION_references[4] PROGMEM = {
    0x5,
    0x400,
    0xc08,
    0x10
};
RANGE const static unsigned short JAVA_LANG_EXCEPTION_references[4] PROGMEM = {
    0x5,
    0x400,
    0xc08,
    0x10
};
RANGE const static unsigned short VM_CLOCKINTERRUPTHANDLER_references[3] PROGMEM = {
    0x3,
    0x400,
    0x8
};
RANGE const static unsigned short JAVA_LANG_CLASS_references[7] PROGMEM = {
    0xb,
    0x400,
    0xc08,
    0x1810,
    0x201c,
    0x2824,
    0x2c
};
RANGE const static unsigned short JAVA_LANG_STRINGBUILDER_references[2] PROGMEM = {
    0x1,
    0x0
};
RANGE const static unsigned short JAVA_LANG_OUTOFMEMORYERROR_references[4] PROGMEM = {
    0x5,
    0x400,
    0xc08,
    0x10
};
#endif


static RANGE const ClassInfo _classes[44] PROGMEM = {
		{ 22, 1, 0, -1, 0, 0, className0
#if defined(SUPPORTGC)
		, 0
#endif
		},
		{ 22, 1, 0, -4, 0, 0, className1
#if defined(SUPPORTGC)
		, 0
#endif
		},
		{ 22, 1, 0, -4, 0, 0, className2
#if defined(SUPPORTGC)
		, 0
#endif
		},
		{ 22, 0, 0, 0, 0, 0, className3
#if defined(SUPPORTGC)
		, 0
#endif
		},
		{ 22, 0, 0, 0, 0, class4interfaces, className4
#if defined(SUPPORTGC)
		, 0
#endif
		},
		{ 22, 0, 0, (sizeof(struct _java_lang_AbstractStringBuilder_c) - sizeof(Object)) << 3 /* approx 8 bytes */, 0, 0, className5
#if defined(SUPPORTGC)
		, JAVA_LANG_ABSTRACTSTRINGBUILDER_references
#endif
		},
		{ 24, 0, 1, (sizeof(struct _java_lang_ArithmeticException_c) - sizeof(Object)) << 3 /* approx 20 bytes */, 0, 0, className6
#if defined(SUPPORTGC)
		, JAVA_LANG_ARITHMETICEXCEPTION_references
#endif
		},
		{ 16, 0, 1, (sizeof(struct _java_lang_ArrayIndexOutOfBoundsException_c) - sizeof(Object)) << 3 /* approx 20 bytes */, 0, 0, className7
#if defined(SUPPORTGC)
		, JAVA_LANG_ARRAYINDEXOUTOFBOUNDSEXCEPTION_references
#endif
		},
		{ 11, 0, 1, (sizeof(struct _java_lang_AssertionError_c) - sizeof(Object)) << 3 /* approx 20 bytes */, 0, 0, className8
#if defined(SUPPORTGC)
		, JAVA_LANG_ASSERTIONERROR_references
#endif
		},
		{ 22, 0, 0, (sizeof(struct _java_lang_Class_c) - sizeof(Object)) << 3 /* approx 48 bytes */, 0, 0, className9
#if defined(SUPPORTGC)
		, 0
#endif
		},
		{ 21, 0, 0, (sizeof(struct _java_lang_Double_c) - sizeof(Object)) << 3 /* approx 8 bytes */, 0, 0, className10
#if defined(SUPPORTGC)
		, 0
#endif
		},
		{ 29, 0, 1, (sizeof(struct _java_lang_Error_c) - sizeof(Object)) << 3 /* approx 20 bytes */, 0, 0, className11
#if defined(SUPPORTGC)
		, JAVA_LANG_ERROR_references
#endif
		},
		{ 29, 0, 1, (sizeof(struct _java_lang_Exception_c) - sizeof(Object)) << 3 /* approx 20 bytes */, 0, 0, className12
#if defined(SUPPORTGC)
		, JAVA_LANG_EXCEPTION_references
#endif
		},
		{ 21, 0, 0, (sizeof(struct _java_lang_Float_c) - sizeof(Object)) << 3 /* approx 4 bytes */, 0, 0, className13
#if defined(SUPPORTGC)
		, 0
#endif
		},
		{ 24, 0, 1, (sizeof(struct _java_lang_IllegalArgumentException_c) - sizeof(Object)) << 3 /* approx 20 bytes */, 0, 0, className14
#if defined(SUPPORTGC)
		, JAVA_LANG_ILLEGALARGUMENTEXCEPTION_references
#endif
		},
		{ 24, 0, 1, (sizeof(struct _java_lang_IllegalMonitorStateException_c) - sizeof(Object)) << 3 /* approx 20 bytes */, 0, 0, className15
#if defined(SUPPORTGC)
		, JAVA_LANG_ILLEGALMONITORSTATEEXCEPTION_references
#endif
		},
		{ 24, 0, 1, (sizeof(struct _java_lang_IndexOutOfBoundsException_c) - sizeof(Object)) << 3 /* approx 20 bytes */, 0, 0, className16
#if defined(SUPPORTGC)
		, JAVA_LANG_INDEXOUTOFBOUNDSEXCEPTION_references
#endif
		},
		{ 21, 0, 0, (sizeof(struct _java_lang_Integer_c) - sizeof(Object)) << 3 /* approx 4 bytes */, 0, 0, className17
#if defined(SUPPORTGC)
		, 0
#endif
		},
		{ 22, 0, 0, 0, 0, 0, className18
#if defined(SUPPORTGC)
		, 0
#endif
		},
		{ 24, 0, 1, (sizeof(struct _java_lang_NegativeArraySizeException_c) - sizeof(Object)) << 3 /* approx 20 bytes */, 0, 0, className19
#if defined(SUPPORTGC)
		, JAVA_LANG_NEGATIVEARRAYSIZEEXCEPTION_references
#endif
		},
		{ 24, 0, 1, (sizeof(struct _java_lang_NullPointerException_c) - sizeof(Object)) << 3 /* approx 20 bytes */, 0, 0, className20
#if defined(SUPPORTGC)
		, JAVA_LANG_NULLPOINTEREXCEPTION_references
#endif
		},
		{ 22, 0, 0, 0, 0, 0, className21
#if defined(SUPPORTGC)
		, 0
#endif
		},
		{ -1, 0, 0, 0, 0, 0, className22
#if defined(SUPPORTGC)
		, 0
#endif
		},
		{ 30, 0, 1, (sizeof(struct _java_lang_OutOfMemoryError_c) - sizeof(Object)) << 3 /* approx 20 bytes */, 0, 0, className23
#if defined(SUPPORTGC)
		, JAVA_LANG_OUTOFMEMORYERROR_references
#endif
		},
		{ 12, 0, 1, (sizeof(struct _java_lang_RuntimeException_c) - sizeof(Object)) << 3 /* approx 20 bytes */, 0, 0, className24
#if defined(SUPPORTGC)
		, JAVA_LANG_RUNTIMEEXCEPTION_references
#endif
		},
		{ 22, 0, 0, (sizeof(struct _java_lang_String_c) - sizeof(Object)) << 3 /* approx 8 bytes */, 0, 0, className25
#if defined(SUPPORTGC)
		, JAVA_LANG_STRING_references
#endif
		},
		{ 5, 0, 0, (sizeof(struct _java_lang_StringBuilder_c) - sizeof(Object)) << 3 /* approx 8 bytes */, 0, 0, className26
#if defined(SUPPORTGC)
		, JAVA_LANG_STRINGBUILDER_references
#endif
		},
		{ 16, 0, 1, (sizeof(struct _java_lang_StringIndexOutOfBoundsException_c) - sizeof(Object)) << 3 /* approx 20 bytes */, 0, 0, className27
#if defined(SUPPORTGC)
		, JAVA_LANG_STRINGINDEXOUTOFBOUNDSEXCEPTION_references
#endif
		},
		{ 22, 0, 0, 0, 0, 0, className28
#if defined(SUPPORTGC)
		, 0
#endif
		},
		{ 22, 0, 1, (sizeof(struct _java_lang_Throwable_c) - sizeof(Object)) << 3 /* approx 20 bytes */, 0, 0, className29
#if defined(SUPPORTGC)
		, JAVA_LANG_THROWABLE_references
#endif
		},
		{ 11, 0, 1, (sizeof(struct _java_lang_VirtualMachineError_c) - sizeof(Object)) << 3 /* approx 20 bytes */, 0, 0, className30
#if defined(SUPPORTGC)
		, JAVA_LANG_VIRTUALMACHINEERROR_references
#endif
		},
		{ 22, 0, 0, 0, 0, 0, className31
#if defined(SUPPORTGC)
		, 0
#endif
		},
		{ 22, 0, 0, (sizeof(struct _scjhelloworld_Delay_c) - sizeof(Object)) << 3 /* approx 4 bytes */, 0, 0, className32
#if defined(SUPPORTGC)
		, 0
#endif
		},
		{ 22, 0, 0, (sizeof(struct _scjhelloworld_Led_c) - sizeof(Object)) << 3 /* approx 4 bytes */, 0, 0, className33
#if defined(SUPPORTGC)
		, 0
#endif
		},
		{ 22, 0, 0, 0, 0, 0, className34
#if defined(SUPPORTGC)
		, 0
#endif
		},
		{ 22, 0, 0, 0, 0, class35interfaces, className35
#if defined(SUPPORTGC)
		, 0
#endif
		},
		{ 22, 0, 0, 0, 0, class36interfaces, className36
#if defined(SUPPORTGC)
		, 0
#endif
		},
		{ 22, 0, 0, 0, 0, 0, className37
#if defined(SUPPORTGC)
		, 0
#endif
		},
		{ 22, 0, 0, (sizeof(struct _vm_ClockInterruptHandler_c) - sizeof(Object)) << 3 /* approx 12 bytes */, 0, class38interfaces, className38
#if defined(SUPPORTGC)
		, VM_CLOCKINTERRUPTHANDLER_references
#endif
		},
		{ 22, 0, 0, (sizeof(struct _vm_Process_c) - sizeof(Object)) << 3 /* approx 21 bytes */, 0, 0, className39
#if defined(SUPPORTGC)
		, VM_PROCESS_references
#endif
		},
		{ 22, 0, 0, (sizeof(struct _vm_Process_ProcessExecutor_c) - sizeof(Object)) << 3 /* approx 5 bytes */, 0, class40interfaces, className40
#if defined(SUPPORTGC)
		, VM_PROCESS_PROCESSEXECUTOR_references
#endif
		},
		{ 22, 0, 0, 0, 0, 0, className41
#if defined(SUPPORTGC)
		, 0
#endif
		},
		{ 41, 0, 0, (sizeof(struct _vm_Process_X86_32SP_c) - sizeof(Object)) << 3 /* approx 8 bytes */, 0, 0, className42
#if defined(SUPPORTGC)
		, 0
#endif
		},
		{ 41, 0, 0, (sizeof(struct _vm_Process_X86_64SP_c) - sizeof(Object)) << 3 /* approx 16 bytes */, 0, 0, className43
#if defined(SUPPORTGC)
		, 0
#endif
		}
};


RANGE const uint8 tupac = 6;
RANGE static const unsigned char _inheritanceMatrix[512] PROGMEM = { 0x01,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x40,0x10,0x40,0x21,0x00,0x00,0x00,0x00,0x80,0x10,0x41,0x21,0x00,0x00,0x00,0x00,0x00,0x09,0x40,0x20,0x00,0x00,0x00,0x00,0x00,0x02,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x40,0x20,0x00,0x00,0x00,0x00,0x00,0x10,0x40,0x20,0x00,0x00,0x00,0x00,0x00,0x20,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x50,0x40,0x21,0x00,0x00,0x00,0x00,0x00,0x90,0x40,0x21,0x00,0x00,0x00,0x00,0x00,0x10,0x41,0x21,0x00,0x00,0x00,0x00,0x00,0x00,0x62,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x44,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x48,0x21,0x00,0x00,0x00,0x00,0x00,0x10,0x50,0x21,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0xC0,0x60,0x00,0x00,0x00,0x00,0x00,0x10,0x40,0x21,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x02,0x00,0x00,0x00,0x00,0x20,0x00,0x40,0x04,0x00,0x00,0x00,0x00,0x00,0x10,0x41,0x29,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x20,0x00,0x00,0x00,0x00,0x00,0x08,0x40,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x40,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x40,0x00,0x00,0x06,0x00,0x00,0x00,0x00,0x40,0x00,0x00,0x0A,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00 };

const ClassInfo *classes;
const unsigned char *inheritanceMatrix;
const unsigned char* classData;

const uint32* staticReferenceOffsets;

unsigned char initClasses(void) {
   classes = &_classes[0];
   inheritanceMatrix = &_inheritanceMatrix[0];
   classData = &_classData[0];
   staticReferenceOffsets = &_staticReferenceOffsets[0];
   return 1;
}

