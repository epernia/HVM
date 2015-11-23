/*
 * types.h
 *
 *  Created on: 06/09/2010
 *      Author: sek
 */
#include "ostypes.h"

#ifndef TYPES_H_
#define TYPES_H_

/* #define FLASHSUPPORT */
#define HVM_CLOCK 0

#ifndef JAVA_HEAP_SIZE
#define JAVA_HEAP_SIZE 65536
#endif

#ifndef JAVA_STACK_SIZE
#define JAVA_STACK_SIZE 2048
#endif

#ifndef PHEAP_SIZE
#define PHEAP_SIZE 1
#endif

typedef struct _exceptionHandler {
	uint16 start_pc;
	uint16 end_pc;
	uint16 handle_pc;
	unsigned short clazz;
} ExceptionHandler;

typedef struct PACKED _methodInfo {
    unsigned short classIndex;
    unsigned short maxStack;
	unsigned short maxLocals;
	unsigned char numArgs;
	unsigned char minfo;

	unsigned char numExceptionHandlers;
	const ExceptionHandler* handlers;

    unsigned short codeSize;
	const unsigned char* code;
	int16 (*nativeFunc)(int32 *sp);
	const char* name;
} MethodInfo;

typedef uint16 Object;

typedef struct PACKED _classInfo {
	signed short superClass;
	unsigned char dimension;
	unsigned char hasLock;
    unsigned short dobjectSize;  /* Used for class index of element type in case of arrays */
    unsigned short pobjectSize;
	const unsigned short* interfaces;
	const char* name;
#if defined(SUPPORTGC)
	const unsigned short* references;
#endif
} ClassInfo;

typedef struct _constant {
	unsigned char type;
	int32 value;
	const void* data;
    float fvalue;
} ConstantInfo;

typedef struct _exceptionObject
{
    unsigned short classId;
    unsigned short methodId;
    Object* exception;
} ExceptionObject;

#define CONSTANT_STRING 1
#define CONSTANT_INTEGER 2
#define CONSTANT_FLOAT 3
#define CONSTANT_LONG 4
#define CONSTANT_DOUBLE 5
#define CONSTANT_CLASS 6

#define NOP_OPCODE 0x00
#define ACONST_NULL_OPCODE 0x01
#define ICONST_M1_OPCODE 0x02
#define ICONST_0_OPCODE 0x03
#define ICONST_1_OPCODE 0x04
#define ICONST_2_OPCODE 0x05
#define ICONST_3_OPCODE 0x06
#define ICONST_4_OPCODE 0x07
#define ICONST_5_OPCODE 0x08
#define LCONST_0_OPCODE 0x09
#define LCONST_1_OPCODE 0x0A
#define FCONST_0_OPCODE 0x0B
#define FCONST_1_OPCODE 0x0C
#define FCONST_2_OPCODE 0x0D
#define DCONST_0_OPCODE 0x0E
#define DCONST_1_OPCODE 0x0F
#define BIPUSH_OPCODE 0x10
#define SIPUSH_OPCODE 0x11
#define LDC_OPCODE 0x12
#define LDC_W_OPCODE 0x13
#define LDC2_W_OPCODE 0x14
#define ILOAD_OPCODE 0x15
#define LLOAD_OPCODE 0x16
#define FLOAD_OPCODE 0x17
#define DLOAD_OPCODE 0x18
#define ALOAD_OPCODE 0x19
#define ILOAD_0_OPCODE 0x1A
#define ILOAD_1_OPCODE 0x1B
#define ILOAD_2_OPCODE 0x1C
#define ILOAD_3_OPCODE 0x1D
#define LLOAD_0_OPCODE 0x1E
#define LLOAD_1_OPCODE 0x1F
#define LLOAD_2_OPCODE 0x20
#define LLOAD_3_OPCODE 0x21
#define FLOAD_0_OPCODE 0x22
#define FLOAD_1_OPCODE 0x23
#define FLOAD_2_OPCODE 0x24
#define FLOAD_3_OPCODE 0x25
#define DLOAD_0_OPCODE 0x26
#define DLOAD_1_OPCODE 0x27
#define DLOAD_2_OPCODE 0x28
#define DLOAD_3_OPCODE 0x29
#define ALOAD_0_OPCODE 0x2A
#define ALOAD_1_OPCODE 0x2B
#define ALOAD_2_OPCODE 0x2C
#define ALOAD_3_OPCODE 0x2D
#define IALOAD_OPCODE 0x2E
#define LALOAD_OPCODE 0x2F
#define FALOAD_OPCODE 0x30
#define DALOAD_OPCODE 0x31
#define AALOAD_OPCODE 0x32
#define BALOAD_OPCODE 0x33
#define CALOAD_OPCODE 0x34
#define SALOAD_OPCODE 0x35
#define ISTORE_OPCODE 0x36
#define LSTORE_OPCODE 0x37
#define FSTORE_OPCODE 0x38
#define DSTORE_OPCODE 0x39
#define ASTORE_OPCODE 0x3A
#define ISTORE_0_OPCODE 0x3B
#define ISTORE_1_OPCODE 0x3C
#define ISTORE_2_OPCODE 0x3D
#define ISTORE_3_OPCODE 0x3E
#define LSTORE_0_OPCODE 0x3F
#define LSTORE_1_OPCODE 0x40
#define LSTORE_2_OPCODE 0x41
#define LSTORE_3_OPCODE 0x42
#define FSTORE_0_OPCODE 0x43
#define FSTORE_1_OPCODE 0x44
#define FSTORE_2_OPCODE 0x45
#define FSTORE_3_OPCODE 0x46
#define DSTORE_0_OPCODE 0x47
#define DSTORE_1_OPCODE 0x48
#define DSTORE_2_OPCODE 0x49
#define DSTORE_3_OPCODE 0x4A
#define ASTORE_0_OPCODE 0x4B
#define ASTORE_1_OPCODE 0x4C
#define ASTORE_2_OPCODE 0x4D
#define ASTORE_3_OPCODE 0x4E
#define IASTORE_OPCODE 0x4F
#define LASTORE_OPCODE 0x50
#define FASTORE_OPCODE 0x51
#define DASTORE_OPCODE 0x52
#define AASTORE_OPCODE 0x53
#define BASTORE_OPCODE 0x54
#define CASTORE_OPCODE 0x55
#define SASTORE_OPCODE 0x56
#define POP_OPCODE 0x57
#define POP2_OPCODE 0x58
#define DUP_OPCODE 0x59
#define DUP_X1_OPCODE 0x5A
#define DUP_X2_OPCODE 0x5B
#define DUP2_OPCODE 0x5C
#define DUP2_X1_OPCODE 0x5D
#define DUP2_X2_OPCODE 0x5E
#define SWAP_OPCODE 0x5F
#define IADD_OPCODE 0x60
#define LADD_OPCODE 0x61
#define FADD_OPCODE 0x62
#define DADD_OPCODE 0x63
#define ISUB_OPCODE 0x64
#define LSUB_OPCODE 0x65
#define FSUB_OPCODE 0x66
#define DSUB_OPCODE 0x67
#define IMUL_OPCODE 0x68
#define LMUL_OPCODE 0x69
#define FMUL_OPCODE 0x6A
#define DMUL_OPCODE 0x6B
#define IDIV_OPCODE 0x6C
#define LDIV_OPCODE 0x6D
#define FDIV_OPCODE 0x6E
#define DDIV_OPCODE 0x6F
#define IREM_OPCODE 0x70
#define LREM_OPCODE 0x71
#define FREM_OPCODE 0x72
#define DREM_OPCODE 0x73
#define INEG_OPCODE 0x74
#define LNEG_OPCODE 0x75
#define FNEG_OPCODE 0x76
#define DNEG_OPCODE 0x77
#define ISHL_OPCODE 0x78
#define LSHL_OPCODE 0x79
#define ISHR_OPCODE 0x7A
#define LSHR_OPCODE 0x7B
#define IUSHR_OPCODE 0x7C
#define LUSHR_OPCODE 0x7D
#define IAND_OPCODE 0x7E
#define LAND_OPCODE 0x7F
#define IOR_OPCODE 0x80
#define LOR_OPCODE 0x81
#define IXOR_OPCODE 0x82
#define LXOR_OPCODE 0x83
#define IINC_OPCODE 0x84
#define I2L_OPCODE 0x85
#define I2F_OPCODE 0x86
#define I2D_OPCODE 0x87
#define L2I_OPCODE 0x88
#define L2F_OPCODE 0x89
#define L2D_OPCODE 0x8A
#define F2I_OPCODE 0x8B
#define F2L_OPCODE 0x8C
#define F2D_OPCODE 0x8D
#define D2I_OPCODE 0x8E
#define D2L_OPCODE 0x8F
#define D2F_OPCODE 0x90
#define I2B_OPCODE 0x91
#define I2C_OPCODE 0x92
#define I2S_OPCODE 0x93
#define LCMP_OPCODE 0x94
#define FCMPL_OPCODE 0x95
#define FCMPG_OPCODE 0x96
#define DCMPL_OPCODE 0x97
#define DCMPG_OPCODE 0x98
#define IFEQ_OPCODE 0x99
#define IFNE_OPCODE 0x9A
#define IFLT_OPCODE 0x9B
#define IFGE_OPCODE 0x9C
#define IFGT_OPCODE 0x9D
#define IFLE_OPCODE 0x9E
#define IF_ICMPEQ_OPCODE 0x9F
#define IF_ICMPNE_OPCODE 0xA0
#define IF_ICMPLT_OPCODE 0xA1
#define IF_ICMPGE_OPCODE 0xA2
#define IF_ICMPGT_OPCODE 0xA3
#define IF_ICMPLE_OPCODE 0xA4
#define IF_ACMPEQ_OPCODE 0xA5
#define IF_ACMPNE_OPCODE 0xA6
#define GOTO_OPCODE 0xA7
#define JSR_OPCODE 0xA8
#define RET_OPCODE 0xA9
#define TABLESWITCH_OPCODE 0xAA
#define LOOKUPSWITCH_OPCODE 0xAB
#define IRETURN_OPCODE 0xAC
#define LRETURN_OPCODE 0xAD
#define FRETURN_OPCODE 0xAE
#define DRETURN_OPCODE 0xAF
#define ARETURN_OPCODE 0xB0
#define RETURN_OPCODE 0xB1
#define GETSTATIC_OPCODE 0xB2
#define PUTSTATIC_OPCODE 0xB3
#define GETFIELD_OPCODE 0xB4
#define PUTFIELD_OPCODE 0xB5
#define INVOKEVIRTUAL_OPCODE 0xB6
#define INVOKESPECIAL_OPCODE 0xB7
#define INVOKESTATIC_OPCODE 0xB8
#define INVOKEINTERFACE_OPCODE 0xB9
#define NEW_OPCODE 0xBB
#define NEWARRAY_OPCODE 0xBC
#define ANEWARRAY_OPCODE 0xBD
#define ARRAYLENGTH_OPCODE 0xBE
#define ATHROW_OPCODE 0xBF
#define CHECKCAST_OPCODE 0xC0
#define INSTANCEOF_OPCODE 0xC1
#define MONITORENTER_OPCODE 0xC2
#define MONITOREXIT_OPCODE 0xC3
#define WIDE_OPCODE 0xC4
#define MULTIANEWARRAY_OPCODE 0xC5
#define IFNULL_OPCODE 0xC6
#define IFNONNULL_OPCODE 0xC7
#define GOTO_W_OPCODE 0xC8
#define JSR_W_OPCODE 0xC9
#define INVOKE_CLONE_ONARRAY 0xCA
#define GETHWFIELD_OPCODE 0xCB
#define PUTHWFIELD_OPCODE 0xCC
#define NEWFLASHARRAY_OPCODE 0xCD

#if defined(ENABLE_DEBUG)
#define START_EVENT 10
#define RESUME_EVENT 11
#define TERMINATED_EVENT 12
#define TERMINATE_EVENT 13
#define BREAKPOINT_ADD_EVENT 14
#define BREAKPOINT_HIT_EVENT 15
#define BREAKPOINT_REMOVE_EVENT 16
#define GET_STACKFRAMES_EVENT 17
#define STACKFRAMES_START_EVENT 18
#define STACKFRAMES_END_EVENT 19
#define GET_STACKVALUE_EVENT 20
#define STEP_EVENT 21

#define STEPINTO 1
#define STEPRETURN 2
#define STEPOVER 3
#define STEPCONTINUE 4

#endif

#ifdef REF_OFFSET
extern long heap_base;
#define HEAP_REF(x, type) ((type)(((unsigned char*)x) + heap_base))
#define HEAP_UNREF(x, type) ((type)(((unsigned char*)x) - heap_base))
#else
#define HEAP_REF(x, type) x
#define HEAP_UNREF(x, type) x
#endif

#define EXCLUDESTUB_N_DEVICES_X86WRITER_NWRITE
#define EXCLUDESTUB_N_JAVA_LANG_CLASS_GETNAME0
#define EXCLUDESTUB_N_JAVA_LANG_THREAD_CLINIT_
#define EXCLUDESTUB_N_JAVA_LANG_STRINGBUILDER_APPEND
#define EXCLUDESTUB_N_JAVA_LANG_STRINGBUFFER_APPEND
#define EXCLUDESTUB_N_JAVA_LANG_THROWABLE_GETCAUSE
#define EXCLUDESTUB_N_JAVA_LANG_THROWABLE_FILLINSTACKTRACE_
#define EXCLUDESTUB_N_JAVA_LANG_CLASS_DESIREDASSERTIONSTATUS
#define EXCLUDESTUB_N_JAVA_LANG_CLASS_GETPRIMITIVECLASS
#define EXCLUDESTUB_N_JAVA_LANG_SYSTEM_CURRENTTIMEMILLIS
#define EXCLUDESTUB_N_JAVA_LANG_SYSTEM_ARRAYCOPY
#define EXCLUDESTUB_N_JAVA_LANG_OBJECT_GETCLASS
#define EXCLUDESTUB_N_JAVA_LANG_CLASS_GETCOMPONENTTYPE
#define EXCLUDESTUB_N_JAVA_LANG_OBJECT_HASHCODE
#define EXCLUDESTUB_N_JAVA_SECURITY_ACCESSCONTROLLER_DOPRIVILEGED
#define EXCLUDESTUB_N_JAVA_LANG_REFLECT_ARRAY_NEWARRAY
#define EXCLUDESTUB_N_JAVA_LANG_THREAD_TOSTRING
#define EXCLUDESTUB_N_REFLECT_OBJECTINFO_GETADDRESS
#define EXCLUDESTUB_N_VM_HVMHEAP_GETHEAPSTART
#define EXCLUDESTUB_N_TEST_ICECAPVM_MINITESTS_TESTCVAR1_GETIVAR
#define EXCLUDESTUB_N_TEST_ICECAPVM_MINITESTS_TESTCVAR1_GETBVAR
#define EXCLUDESTUB_N_TEST_ICECAPVM_MINITESTS_TESTCVAR1_GETSVAR
#define EXCLUDESTUB_N_TEST_ICECAPVM_MINITESTS_TESTCVAR1_GETLVAR
#define EXCLUDESTUB_N_JAVA_LANG_FLOAT_TOSTRING
#define EXCLUDESTUB_N_JAVA_LANG_OBJECT_CLONE
#define EXCLUDESTUB_N_VM_PROCESS_TRANSFER
#define EXCLUDESTUB_N_VM_PROCESS_EXECUTEWITHSTACK
#define EXCLUDESTUB_N_VM_REALTIMECLOCK_GETNATIVERESOLUTION
#define EXCLUDESTUB_N_VM_REALTIMECLOCK_GETNATIVETIME
#define EXCLUDESTUB_N_VM_REALTIMECLOCK_DELAYNATIVEUNTIL
#define EXCLUDESTUB_N_TEST_ICECAPVM_MINITESTS_TESTINVOKENATIVE1_SUPER_TESTNATIVE
#define EXCLUDESTUB_N_TEST_ICECAPVM_MINITESTS_TESTINVOKENATIVE1_SUPER_TESTNATIVESTATIC
#define EXCLUDESTUB_N_TEST_ICECAPVM_MINITESTS_TESTINVOKENATIVE2_SUPER_TESTNATIVESTATIC
#define EXCLUDESTUB_N_JAVA_LANG_CLASS_NEWINSTANCE
#define EXCLUDESTUB_N_JAVA_LANG_STRING_INIT_
#define EXCLUDESTUB_N_TEST_ICECAPVM_MINITESTS_TESTPERFORMANCE_QUICKSORTC
#define EXCLUDESTUB_N_VM_MONITOR_ATTACHMONITOR
#define EXCLUDESTUB_N_VM_REALTIMECLOCK_AWAITNEXTTICK
#define EXCLUDESTUB_N_DEVICES_SYSTEM_SNAPSHOT
#define EXCLUDESTUB_N_DEVICES_SYSTEM_LOCKROM
#define EXCLUDESTUB_N_SUN_MISC_VM_GETSAVEDPROPERTY
#define EXCLUDESTUB_N_JAVA_LANG_THREAD_CURRENTTHREAD
#define EXCLUDESTUB_N_SUN_MISC_VM_ISBOOTED
#define EXCLUDESTUB_N_SUN_SECURITY_ACTION_GETPROPERTYACTION_INIT_
#define EXCLUDESTUB_N_JAVA_LANG_FLOAT_FLOATTORAWINTBITS
#define EXCLUDESTUB_N_JAVA_LANG_SYSTEM_REGISTERNATIVES
#define EXCLUDESTUB_N_JAVA_LANG_DOUBLE_DOUBLETORAWLONGBITS
#define EXCLUDESTUB_N_JAVA_LANG_SYSTEM_NANOTIME
#define EXCLUDESTUB_N_JAVA_LANG_SYSTEM_IDENTITYHASHCODE
#define EXCLUDESTUB_N_JAVA_LANG_CLASS_GETMETHOD
#define EXCLUDESTUB_N_JAVA_LANG_REFLECT_METHOD_INVOKE
#define EXCLUDESTUB_N_JAVA_LANG_CLASS_FORNAME
#define EXCLUDESTUB_N_SUN_SECURITY_ACTION_GETBOOLEANACTION_INIT_
#define EXCLUDESTUB_N_JAVA_LANG_CLASS_GETCONSTRUCTOR
#define EXCLUDESTUB_N_JAVA_LANG_REFLECT_CONSTRUCTOR_NEWINSTANCE
#define EXCLUDESTUB_N_JAVA_LANG_THROWABLE_CLINIT_

/* #define PRE_INITIALIZE_EXCEPTIONS */
#define PRE_INITIALIZE_CONSTANTS

#endif /* TYPES_H_ */
