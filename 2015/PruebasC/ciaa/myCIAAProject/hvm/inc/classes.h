#define NUMBEROFINTERFACES 11
#define NUMBEROFCLASSES 44
#define JAVA_LANG_STRING 25
#define JAVA_LANG_OBJECT 22
#define JAVA_LANG_INTEGER 17
#define JAVA_LANG_BYTE -1
#define JAVA_LANG_SHORT -1
#define JAVA_LANG_CHARACTER -1
#define JAVA_LANG_BOOLEAN -1
#define JAVA_LANG_LONG -1
#define JAVA_LANG_CLASS 9
#define JAVA_LANG_CLASSCASTEXCEPTION -1
#define JAVA_LANG_OUTOFMEMORYERROR 23
#define JAVA_LANG_THROWABLE 29
#define JAVA_LANG_ARITHMETICEXCEPTION 6
#define JAVA_LANG_NOSUCHMETHODEXCEPTION -1
#define JAVA_LANG_REFLECT_METHOD -1
#define JAVA_LANG_REFLECT_INVOCATIONTARGETEXCEPTION -1
#define JAVA_LANG_REFLECT_CONSTRUCTOR -1
#define VM_HARDWAREOBJECT -1
#define REFLECT_HEAPACCESSOR -1
#define VM_ADDRESS32BIT -1
#define VM_ADDRESS64BIT -1
#define JAVA_LANG_NULLPOINTEREXCEPTION 20
#define _C 1
#define _I 2
#define VM_MEMORY -1
#define JAVA_LANG_STRING_var JAVA_LANG_STRING
#define JAVA_LANG_OBJECT_var JAVA_LANG_OBJECT
#define JAVA_LANG_INTEGER_var JAVA_LANG_INTEGER
#define JAVA_LANG_BYTE_var JAVA_LANG_BYTE
#define JAVA_LANG_SHORT_var JAVA_LANG_SHORT
#define JAVA_LANG_CHARACTER_var JAVA_LANG_CHARACTER
#define JAVA_LANG_BOOLEAN_var JAVA_LANG_BOOLEAN
#define JAVA_LANG_LONG_var JAVA_LANG_LONG
#define JAVA_LANG_CLASS_var JAVA_LANG_CLASS
#define JAVA_LANG_CLASSCASTEXCEPTION_var JAVA_LANG_CLASSCASTEXCEPTION
#define JAVA_LANG_OUTOFMEMORYERROR_var JAVA_LANG_OUTOFMEMORYERROR
#define JAVA_LANG_THROWABLE_var JAVA_LANG_THROWABLE
#define JAVA_LANG_ARITHMETICEXCEPTION_var JAVA_LANG_ARITHMETICEXCEPTION
#define JAVA_LANG_NOSUCHMETHODEXCEPTION_var JAVA_LANG_NOSUCHMETHODEXCEPTION
#define JAVA_LANG_REFLECT_METHOD_var JAVA_LANG_REFLECT_METHOD
#define JAVA_LANG_REFLECT_INVOCATIONTARGETEXCEPTION_var JAVA_LANG_REFLECT_INVOCATIONTARGETEXCEPTION
#define JAVA_LANG_REFLECT_CONSTRUCTOR_var JAVA_LANG_REFLECT_CONSTRUCTOR
#define VM_HARDWAREOBJECT_var VM_HARDWAREOBJECT
#define REFLECT_HEAPACCESSOR_var REFLECT_HEAPACCESSOR
#define VM_ADDRESS32BIT_var VM_ADDRESS32BIT
#define VM_ADDRESS64BIT_var VM_ADDRESS64BIT
#define JAVA_LANG_NULLPOINTEREXCEPTION_var JAVA_LANG_NULLPOINTEREXCEPTION
#define _C_var _C
#define _I_var _I
#define VM_MEMORY_var VM_MEMORY
#define JAVA_LANG_STRING_VALUE_offset 0
#define JAVA_SECURITY_PRIVILEGEDACTION -1
#define DEVICES_HANDLER -1
#define JAVA_LANG_RUNNABLE 8

typedef struct PACKED _java_lang_Throwable_c {
    Object header;
    uint32 backtrace_f;
    uint32 detailMessage_f;
    uint32 cause_f;
    uint32 stackTrace_f;
    uint32 suppressedExceptions_f;
} java_lang_Throwable_c;

typedef struct PACKED _java_lang_IndexOutOfBoundsException_c {
    Object header;
    uint32 backtrace_f;
    uint32 detailMessage_f;
    uint32 cause_f;
    uint32 stackTrace_f;
    uint32 suppressedExceptions_f;
} java_lang_IndexOutOfBoundsException_c;

typedef struct PACKED _java_lang_Float_c {
    Object header;
    float value_f;
} java_lang_Float_c;

typedef struct PACKED _java_lang_Double_c {
    Object header;
    uint32 value_f;
    uint32 lsbvalue_f;
} java_lang_Double_c;

typedef struct PACKED _java_lang_Error_c {
    Object header;
    uint32 backtrace_f;
    uint32 detailMessage_f;
    uint32 cause_f;
    uint32 stackTrace_f;
    uint32 suppressedExceptions_f;
} java_lang_Error_c;

typedef struct PACKED _vm_Process_X86_64SP_c {
    Object header;
    uint32 csp_f;
    uint32 lsbcsp_f;
    uint32 jsp_f;
    uint32 lsbjsp_f;
} vm_Process_X86_64SP_c;

typedef struct PACKED _java_lang_AssertionError_c {
    Object header;
    uint32 backtrace_f;
    uint32 detailMessage_f;
    uint32 cause_f;
    uint32 stackTrace_f;
    uint32 suppressedExceptions_f;
} java_lang_AssertionError_c;

typedef struct PACKED _java_lang_Integer_c {
    Object header;
    uint32 value_f;
} java_lang_Integer_c;

typedef struct PACKED _vm_Process_ProcessExecutor_c {
    Object header;
    uint32 thisProcess_f;
    uint8 isStarted_f;
} vm_Process_ProcessExecutor_c;

typedef struct PACKED _java_lang_NullPointerException_c {
    Object header;
    uint32 backtrace_f;
    uint32 detailMessage_f;
    uint32 cause_f;
    uint32 stackTrace_f;
    uint32 suppressedExceptions_f;
} java_lang_NullPointerException_c;

typedef struct PACKED _java_lang_IllegalMonitorStateException_c {
    Object header;
    uint32 backtrace_f;
    uint32 detailMessage_f;
    uint32 cause_f;
    uint32 stackTrace_f;
    uint32 suppressedExceptions_f;
} java_lang_IllegalMonitorStateException_c;

typedef struct PACKED _java_lang_VirtualMachineError_c {
    Object header;
    uint32 backtrace_f;
    uint32 detailMessage_f;
    uint32 cause_f;
    uint32 stackTrace_f;
    uint32 suppressedExceptions_f;
} java_lang_VirtualMachineError_c;

typedef struct PACKED _java_lang_AbstractStringBuilder_c {
    Object header;
    uint32 value_f;
    uint32 count_f;
} java_lang_AbstractStringBuilder_c;

typedef struct PACKED _java_lang_ArithmeticException_c {
    Object header;
    uint32 backtrace_f;
    uint32 detailMessage_f;
    uint32 cause_f;
    uint32 stackTrace_f;
    uint32 suppressedExceptions_f;
} java_lang_ArithmeticException_c;

typedef struct PACKED _java_lang_String_c {
    Object header;
    uint32 value_f;
    uint32 hash_f;
} java_lang_String_c;

typedef struct PACKED _java_lang_NegativeArraySizeException_c {
    Object header;
    uint32 backtrace_f;
    uint32 detailMessage_f;
    uint32 cause_f;
    uint32 stackTrace_f;
    uint32 suppressedExceptions_f;
} java_lang_NegativeArraySizeException_c;

typedef struct PACKED _vm_Process_c {
    Object header;
    uint32 logic_f;
    uint32 stack_f;
    uint32 processExecuter_f;
    uint32 sp_f;
    uint32 runtime_data_f;
    uint8 isFinished_f;
} vm_Process_c;

typedef struct PACKED _vm_Process_X86_32SP_c {
    Object header;
    uint32 csp_f;
    uint32 jsp_f;
} vm_Process_X86_32SP_c;

typedef struct PACKED _java_lang_StringIndexOutOfBoundsException_c {
    Object header;
    uint32 backtrace_f;
    uint32 detailMessage_f;
    uint32 cause_f;
    uint32 stackTrace_f;
    uint32 suppressedExceptions_f;
} java_lang_StringIndexOutOfBoundsException_c;

typedef struct PACKED _scjhelloworld_Led_c {
    Object header;
    uint32 ledNumber_f;
} scjhelloworld_Led_c;

typedef struct PACKED _java_lang_RuntimeException_c {
    Object header;
    uint32 backtrace_f;
    uint32 detailMessage_f;
    uint32 cause_f;
    uint32 stackTrace_f;
    uint32 suppressedExceptions_f;
} java_lang_RuntimeException_c;

typedef struct PACKED _java_lang_ArrayIndexOutOfBoundsException_c {
    Object header;
    uint32 backtrace_f;
    uint32 detailMessage_f;
    uint32 cause_f;
    uint32 stackTrace_f;
    uint32 suppressedExceptions_f;
} java_lang_ArrayIndexOutOfBoundsException_c;

typedef struct PACKED _java_lang_IllegalArgumentException_c {
    Object header;
    uint32 backtrace_f;
    uint32 detailMessage_f;
    uint32 cause_f;
    uint32 stackTrace_f;
    uint32 suppressedExceptions_f;
} java_lang_IllegalArgumentException_c;

typedef struct PACKED _java_lang_Exception_c {
    Object header;
    uint32 backtrace_f;
    uint32 detailMessage_f;
    uint32 cause_f;
    uint32 stackTrace_f;
    uint32 suppressedExceptions_f;
} java_lang_Exception_c;

typedef struct PACKED _vm_ClockInterruptHandler_c {
    Object header;
    uint32 currentProcess_f;
    uint32 scheduler_f;
    uint32 handlerProcess_f;
} vm_ClockInterruptHandler_c;

typedef struct PACKED _scjhelloworld_Delay_c {
    Object header;
    uint32 delayTime_f;
} scjhelloworld_Delay_c;

typedef struct PACKED _java_lang_Class_c {
    Object header;
    uint32 cachedConstructor_f;
    uint32 newInstanceCallerCache_f;
    uint32 name_f;
    uint32 classLoader_f;
    uint32 reflectionData_f;
    uint32 classRedefinedCount_f;
    uint32 genericInfo_f;
    uint32 enumConstants_f;
    uint32 enumConstantDirectory_f;
    uint32 annotationData_f;
    uint32 annotationType_f;
    uint32 classValueMap_f;
} java_lang_Class_c;

typedef struct PACKED _java_lang_StringBuilder_c {
    Object header;
    uint32 value_f;
    uint32 count_f;
} java_lang_StringBuilder_c;

typedef struct PACKED _java_lang_OutOfMemoryError_c {
    Object header;
    uint32 backtrace_f;
    uint32 detailMessage_f;
    uint32 cause_f;
    uint32 stackTrace_f;
    uint32 suppressedExceptions_f;
} java_lang_OutOfMemoryError_c;

typedef struct PACKED _staticClassFields_c {
    uint32 UNASSIGNED_STACK_f;
    uint32 SUPPRESSED_SENTINEL_f;
    uint32 TYPE_f;
    uint8 _assertionsDisabled_f;
    uint32 TYPE_f__f;
    uint32 in_f;
    uint32 out_f;
    uint32 err_f;
    uint32 security_f;
    uint32 cons_f;
    uint32 TYPE_f__f__f;
    uint32 digits_f;
    uint32 DigitTens_f;
    uint32 DigitOnes_f;
    uint32 sizeTable_f;
    uint32 p1_f;
    uint32 p2_f;
    uint32 mainProcess_f;
    uint32 negativeZeroFloatBits_f;
    uint32 lsbnegativeZeroFloatBits_f;
    uint32 negativeZeroDoubleBits_f;
    uint32 lsbnegativeZeroDoubleBits_f;
    uint32 twoToTheDoubleScaleUp_f;
    uint32 lsbtwoToTheDoubleScaleUp_f;
    uint32 twoToTheDoubleScaleDown_f;
    uint32 lsbtwoToTheDoubleScaleDown_f;
    uint8 _assertionsDisabled_f__f;
    uint32 bytes_f;
    uint32 writer_f;
    uint32 instance_f;
    uint8 architecture_f;
    uint8 _dummy_;
} staticClassFields_c;
