#include "ostypes.h"
#include "types.h"
#include "classes.h"
#include "methods.h"
int16 scjhelloworld_TestProcess_P1_run(int32 *fp);
extern unsigned char handleNewClassIndex(int32* sp, unsigned short classIndex);
extern unsigned short getClassIndex(Object* obj);
RANGE extern const MethodInfo *methods;
extern int16 enterMethodInterpreter(unsigned short methodNumber, int32* sp);
extern Object* stringConstants[];
extern const ConstantInfo *constants;
#ifndef PRE_INITIALIZE_CONSTANTS
extern int16 initializeStringConstant(const ConstantInfo* constant, int32* sp);
#endif
void initializeException(int32* sp, int16 exceptionClass,
		int16 exceptionInitMethod);
extern unsigned short handleAthrow(const MethodInfo* method,
		unsigned short classIndex, unsigned short pc);
int16 vm_Process_transferTo(int32* sp);
int16 scjhelloworld_TestProcess_P2_run(int32 *fp);
int16 vm_Process_ProcessExecutor_run(int32 *fp);
RANGE extern const ClassInfo *classes;
extern signed short dispatchInterface(unsigned short methodIndex,
		unsigned char *vTableIndex, int32* sp);
extern const unsigned char *classData;
extern const ClassInfo *classes;
int16 vm_Process_init_(int32 *fp);
extern int8 architecture;
int16 vm_Process_transferTo(int32 *fp);
int16 n_vm_Process_transfer(int32* sp);
extern void unimplemented_native_function(uint16 methodID);

/* Class: devices.Console */
/* Method: <clinit> */
RANGE const unsigned char devices_Console_clinit_[28] PROGMEM = {
	0x11,0x02,0x01,0xBC,0x00,0x00,0xB3,0x00,0x03,0x22,
	/* offset: 0, 0*/
	(uint8)(((uint16)(offsetof(struct _staticClassFields_c, bytes_f) << 3)) >> 8), (uint8)(((uint16)(offsetof(struct _staticClassFields_c, bytes_f) << 3)) & 0xff),
	0xBB,0x00,0x08,0x59,
	0xB7,0x00,0x04,0x14,0xB3,0x00,0x03,0x22,
	/* offset: 0, 32*/
	(uint8)(((uint16)(offsetof(struct _staticClassFields_c, writer_f) << 3)) >> 8), (uint8)(((uint16)(offsetof(struct _staticClassFields_c, writer_f) << 3)) & 0xff),
	0xB1,0x00
};

/* Class: devices.Console */
/* Method: getBytes */
RANGE const unsigned char devices_Console_getBytes[64] PROGMEM = {
	0x03,0x3D,0x2A,0xB7,0x00,0x30,0x25,0x3E,0xA7,0x00,0x15,0xB2,0x00,0x03,0x22,
	/* offset: 0, 0*/
	(uint8)(((uint16)(offsetof(struct _staticClassFields_c, bytes_f) << 3)) >> 8), (uint8)(((uint16)(offsetof(struct _staticClassFields_c, bytes_f) << 3)) & 0xff),
	0x1C,0x2A,0x1C,0xB7,0x00,0x2E,0x39,0x91,0x54,0x84,0x02,0x01,0x1C,0x1D,0xA2,
	0x00,0x0A,0x1C,0x11,0x01,0xFF,0xA1,0xFF,0xE5,0x1B,0x99,0x00,0x0D,0xB2,0x00,0x03,
	0x22,
	/* offset: 0, 0*/
	(uint8)(((uint16)(offsetof(struct _staticClassFields_c, bytes_f) << 3)) >> 8), (uint8)(((uint16)(offsetof(struct _staticClassFields_c, bytes_f) << 3)) & 0xff),
	0x1C,0x10,0x0A,0x54,0xB2,0x00,0x03,0x22,
	/* offset: 0, 0*/
	(uint8)(((uint16)(offsetof(struct _staticClassFields_c, bytes_f) << 3)) >> 8), (uint8)(((uint16)(offsetof(struct _staticClassFields_c, bytes_f) << 3)) & 0xff),
	0xB0,0x01,0x11
};

/* Class: devices.Console */
/* Method: println */
RANGE const unsigned char devices_Console_println[9] PROGMEM = {
	0x2A,0x04,0xB8,0x00,0x03,0x20,0xB1,0x01,0x01
};

/* Class: devices.Console */
/* Method: println */
RANGE const unsigned char devices_Console_println_[49] PROGMEM = {
	0x2A,0xB7,0x00,0x30,0x25,0x93,0x3D,0x1B,0x99,0x00,0x08,0x1C,0x04,0x60,0x93,0x3D,
	0x2A,0x1B,0xB8,0x00,0x01,0x2B,0x57,0xB2,0x00,0x03,0x22,
	/* offset: 0, 32*/
	(uint8)(((uint16)(offsetof(struct _staticClassFields_c, writer_f) << 3)) >> 8), (uint8)(((uint16)(offsetof(struct _staticClassFields_c, writer_f) << 3)) & 0xff),
	0xB2,0x00,0x03,
	0x22,
	/* offset: 0, 0*/
	(uint8)(((uint16)(offsetof(struct _staticClassFields_c, bytes_f) << 3)) >> 8), (uint8)(((uint16)(offsetof(struct _staticClassFields_c, bytes_f) << 3)) & 0xff),
	0x1C,0xB9,0x00,0x00,0x02,0x05,0x01,0x00,0x04,0x00,0x06,0xB1,0x01,
	0x01
};

/* Class: devices.X86Writer */
/* Method: <init> */
RANGE const unsigned char devices_X86Writer_init_[8] PROGMEM = {
	0x2A,0xB7,0x00,0x28,0x0A,0xB1,0x01,0x01
};

/* Class: devices.X86Writer */
/* Method: nwrite */
/* Class: devices.X86Writer */
/* Method: write */
RANGE const unsigned char devices_X86Writer_write[9] PROGMEM = {
	0x2B,0x1C,0xB8,0x00,0x05,0x14,0xB1,0x01,0x03
};

/* Class: java.lang.AbstractStringBuilder */
/* Method: <init> */
RANGE const unsigned char java_lang_AbstractStringBuilder_init_[19] PROGMEM = {
	0x2A,0xB7,0x00,0x28,0x01,0x2A,0x1B,0xBC,0x00,0x01,0xB5,0x00,0x05,0x22,
	/* offset: 0, 0*/
	(uint8)(((uint16)((offsetof(struct _java_lang_StringBuilder_c, value_f) - sizeof(Object)) << 3)) >> 8), (uint8)(((uint16)((offsetof(struct _java_lang_StringBuilder_c, value_f) - sizeof(Object)) << 3)) & 0xff),

	0xB1,0x01,0x01
};

/* Class: java.lang.AbstractStringBuilder */
/* Method: append */
RANGE const unsigned char java_lang_AbstractStringBuilder_append[82] PROGMEM = {
	0x1B,0x12,0x00,0x00,0xA0,0x00,0x10,0x2A,0x12,0x00,0x01,0xB7,0x00,0x33,0x18,0x57,
	0x2A,0xB0,0x01,0x11,0x1B,0x9C,0x00,0x0E,0x1B,0x74,0xB8,0x00,0x21,0x32,0x04,0x60,
	0xA7,0x00,0x08,0x1B,0xB8,0x00,0x21,0x32,0x3D,0x2A,0xB4,0x00,0x05,0x20,
	/* offset: 0, 32*/
	(uint8)(((uint16)((offsetof(struct _java_lang_StringBuilder_c, count_f) - sizeof(Object)) << 3)) >> 8), (uint8)(((uint16)((offsetof(struct _java_lang_StringBuilder_c, count_f) - sizeof(Object)) << 3)) & 0xff),

	0x1C,0x60,0x3E,0x2A,0x1D,0xB7,0x00,0x0B,0x04,0x1B,0x1D,0x2A,0xB4,0x00,0x05,0x22,
	/* offset: 0, 0*/
	(uint8)(((uint16)((offsetof(struct _java_lang_StringBuilder_c, value_f) - sizeof(Object)) << 3)) >> 8), (uint8)(((uint16)((offsetof(struct _java_lang_StringBuilder_c, value_f) - sizeof(Object)) << 3)) & 0xff),
	0xB8,0x00,0x20,0x33,0x2A,0x1D,0xB5,0x00,0x05,0x20,
	/* offset: 0, 32*/
	(uint8)(((uint16)((offsetof(struct _java_lang_StringBuilder_c, count_f) - sizeof(Object)) << 3)) >> 8), (uint8)(((uint16)((offsetof(struct _java_lang_StringBuilder_c, count_f) - sizeof(Object)) << 3)) & 0xff),
	0x2A,0xB0,
	0x01,0x11
};

/* Class: java.lang.AbstractStringBuilder */
/* Method: append */
RANGE const unsigned char java_lang_AbstractStringBuilder_append_[73] PROGMEM = {
	0x2B,0xC7,0x00,0x0B,0x2A,0xB7,0x00,0x0A,0x19,0xB0,0x01,0x0B,0x2B,0xB7,0x00,0x30,
	0x1A,0x3D,0x2A,0x2A,0xB4,0x00,0x05,0x20,
	/* offset: 0, 32*/
	(uint8)(((uint16)((offsetof(struct _java_lang_StringBuilder_c, count_f) - sizeof(Object)) << 3)) >> 8), (uint8)(((uint16)((offsetof(struct _java_lang_StringBuilder_c, count_f) - sizeof(Object)) << 3)) & 0xff),
	0x1C,0x60,0xB7,0x00,0x0B,0x04,
	0x2B,0x03,0x1C,0x2A,0xB4,0x00,0x05,0x22,
	/* offset: 0, 0*/
	(uint8)(((uint16)((offsetof(struct _java_lang_StringBuilder_c, value_f) - sizeof(Object)) << 3)) >> 8), (uint8)(((uint16)((offsetof(struct _java_lang_StringBuilder_c, value_f) - sizeof(Object)) << 3)) & 0xff),
	0x2A,0xB4,0x00,0x05,0x20,
	/* offset: 0, 32*/
	(uint8)(((uint16)((offsetof(struct _java_lang_StringBuilder_c, count_f) - sizeof(Object)) << 3)) >> 8), (uint8)(((uint16)((offsetof(struct _java_lang_StringBuilder_c, count_f) - sizeof(Object)) << 3)) & 0xff),
	0xB7,0x00,0x2F,0x1B,0x2A,0x59,0xB4,0x00,0x05,0x20,
	/* offset: 0, 32*/
	(uint8)(((uint16)((offsetof(struct _java_lang_StringBuilder_c, count_f) - sizeof(Object)) << 3)) >> 8), (uint8)(((uint16)((offsetof(struct _java_lang_StringBuilder_c, count_f) - sizeof(Object)) << 3)) & 0xff),
	0x1C,0x60,0xB5,
	0x00,0x05,0x20,
	/* offset: 0, 32*/
	(uint8)(((uint16)((offsetof(struct _java_lang_StringBuilder_c, count_f) - sizeof(Object)) << 3)) >> 8), (uint8)(((uint16)((offsetof(struct _java_lang_StringBuilder_c, count_f) - sizeof(Object)) << 3)) & 0xff),
	0x2A,0xB0,0x01,0x0B
};

/* Class: java.lang.AbstractStringBuilder */
/* Method: appendNull */
RANGE const unsigned char java_lang_AbstractStringBuilder_appendNull[68] PROGMEM = {
	0x2A,0xB4,0x00,0x05,0x20,
	/* offset: 0, 32*/
	(uint8)(((uint16)((offsetof(struct _java_lang_StringBuilder_c, count_f) - sizeof(Object)) << 3)) >> 8), (uint8)(((uint16)((offsetof(struct _java_lang_StringBuilder_c, count_f) - sizeof(Object)) << 3)) & 0xff),
	0x3C,0x2A,0x1B,0x07,0x60,0xB7,0x00,0x0B,0x04,
	0x2A,0xB4,0x00,0x05,0x22,
	/* offset: 0, 0*/
	(uint8)(((uint16)((offsetof(struct _java_lang_StringBuilder_c, value_f) - sizeof(Object)) << 3)) >> 8), (uint8)(((uint16)((offsetof(struct _java_lang_StringBuilder_c, value_f) - sizeof(Object)) << 3)) & 0xff),
	0x4D,0x2C,0x1B,0x84,0x01,0x01,0x10,0x6E,0x55,
	0x2C,0x1B,0x84,0x01,0x01,0x10,0x75,0x55,0x2C,0x1B,0x84,0x01,0x01,0x10,0x6C,0x55,
	0x2C,0x1B,0x84,0x01,0x01,0x10,0x6C,0x55,0x2A,0x1B,0xB5,0x00,0x05,0x20,
	/* offset: 0, 32*/
	(uint8)(((uint16)((offsetof(struct _java_lang_StringBuilder_c, count_f) - sizeof(Object)) << 3)) >> 8), (uint8)(((uint16)((offsetof(struct _java_lang_StringBuilder_c, count_f) - sizeof(Object)) << 3)) & 0xff),

	0x2A,0xB0,0x01,0x0D
};

/* Class: java.lang.AbstractStringBuilder */
/* Method: ensureCapacityInternal */
RANGE const unsigned char java_lang_AbstractStringBuilder_ensureCapacityInternal[22] PROGMEM = {
	0x1B,0x2A,0xB4,0x00,0x05,0x22,
	/* offset: 0, 0*/
	(uint8)(((uint16)((offsetof(struct _java_lang_StringBuilder_c, value_f) - sizeof(Object)) << 3)) >> 8), (uint8)(((uint16)((offsetof(struct _java_lang_StringBuilder_c, value_f) - sizeof(Object)) << 3)) & 0xff),
	0xBE,0x64,0x9E,0x00,0x09,0x2A,0x1B,0xB7,
	0x00,0x0C,0x05,0xB1,0x01,0x01
};

/* Class: java.lang.AbstractStringBuilder */
/* Method: expandCapacity */
RANGE const unsigned char java_lang_AbstractStringBuilder_expandCapacity[64] PROGMEM = {
	0x2A,0xB4,0x00,0x05,0x22,
	/* offset: 0, 0*/
	(uint8)(((uint16)((offsetof(struct _java_lang_StringBuilder_c, value_f) - sizeof(Object)) << 3)) >> 8), (uint8)(((uint16)((offsetof(struct _java_lang_StringBuilder_c, value_f) - sizeof(Object)) << 3)) & 0xff),
	0xBE,0x05,0x68,0x05,0x60,0x3D,0x1C,0x1B,0x64,
	0x9C,0x00,0x05,0x1B,0x3D,0x1C,0x9C,0x00,0x14,0x1B,0x9C,0x00,0x0C,0xBB,0x00,0x2E,
	0x59,0xB7,0x00,0x29,0x07,0xBF,0x12,0x00,0x02,0x3D,0x2A,0x2A,0xB4,0x00,0x05,0x22,
	/* offset: 0, 0*/
	(uint8)(((uint16)((offsetof(struct _java_lang_StringBuilder_c, value_f) - sizeof(Object)) << 3)) >> 8), (uint8)(((uint16)((offsetof(struct _java_lang_StringBuilder_c, value_f) - sizeof(Object)) << 3)) & 0xff),
	0x1C,0xB8,0x00,0x42,0x0A,0xB5,0x00,0x05,0x22,
	/* offset: 0, 0*/
	(uint8)(((uint16)((offsetof(struct _java_lang_StringBuilder_c, value_f) - sizeof(Object)) << 3)) >> 8), (uint8)(((uint16)((offsetof(struct _java_lang_StringBuilder_c, value_f) - sizeof(Object)) << 3)) & 0xff),
	0xB1,0x01,0x01
};

/* Class: java.lang.ArithmeticException */
/* Method: <init> */
RANGE const unsigned char java_lang_ArithmeticException_init_[8] PROGMEM = {
	0x2A,0xB7,0x00,0x2A,0x01,0xB1,0x01,0x01
};

/* Class: java.lang.ArrayIndexOutOfBoundsException */
/* Method: <init> */
RANGE const unsigned char java_lang_ArrayIndexOutOfBoundsException_init_[8] PROGMEM = {
	0x2A,0xB7,0x00,0x1D,0x01,0xB1,0x01,0x01
};

/* Class: java.lang.AssertionError */
/* Method: <init> */
RANGE const unsigned char java_lang_AssertionError_init_[8] PROGMEM = {
	0x2A,0xB7,0x00,0x16,0x01,0xB1,0x01,0x01
};

/* Class: java.lang.Class */
/* Method: <clinit> */
/* Class: java.lang.Class */
/* Method: desiredAssertionStatus */
/* Class: java.lang.Class */
/* Method: getPrimitiveClass */
/* Class: java.lang.Double */
/* Method: <clinit> */
RANGE const unsigned char java_lang_Double_clinit_[15] PROGMEM = {
	0x12,0x00,0x03,0xB8,0x00,0x12,0x3E,0xB3,0x00,0x0A,0x22,
	/* offset: 1, 0*/
	(uint8)(((uint16)(offsetof(struct _staticClassFields_c, TYPE_f__f) << 3)) >> 8), (uint8)(((uint16)(offsetof(struct _staticClassFields_c, TYPE_f__f) << 3)) & 0xff),
	0xB1,0x00
};

/* Class: java.lang.Double */
/* Method: doubleToRawLongBits */
/* Class: java.lang.Double */
/* Method: longBitsToDouble */
/* Class: java.lang.Error */
/* Method: <init> */
RANGE const unsigned char java_lang_Error_init_[8] PROGMEM = {
	0x2A,0xB7,0x00,0x3B,0x01,0xB1,0x01,0x01
};

/* Class: java.lang.Exception */
/* Method: <init> */
RANGE const unsigned char java_lang_Exception_init_[8] PROGMEM = {
	0x2A,0xB7,0x00,0x3B,0x01,0xB1,0x01,0x01
};

/* Class: java.lang.Exception */
/* Method: <init> */
RANGE const unsigned char java_lang_Exception_init__[9] PROGMEM = {
	0x2A,0x2B,0xB7,0x00,0x3C,0x02,0xB1,0x01,0x03
};

/* Class: java.lang.Float */
/* Method: <clinit> */
RANGE const unsigned char java_lang_Float_clinit_[15] PROGMEM = {
	0x12,0x00,0x04,0xB8,0x00,0x12,0x23,0xB3,0x00,0x0D,0x22,
	/* offset: 1, -96*/
	(uint8)(((uint16)(offsetof(struct _staticClassFields_c, TYPE_f) << 3)) >> 8), (uint8)(((uint16)(offsetof(struct _staticClassFields_c, TYPE_f) << 3)) & 0xff),
	0xB1,0x00
};

/* Class: java.lang.Float */
/* Method: floatToRawIntBits */
/* Class: java.lang.IllegalArgumentException */
/* Method: <init> */
RANGE const unsigned char java_lang_IllegalArgumentException_init_[9] PROGMEM = {
	0x2A,0x2B,0xB7,0x00,0x2B,0x02,0xB1,0x01,0x03
};

/* Class: java.lang.IllegalMonitorStateException */
/* Method: <init> */
RANGE const unsigned char java_lang_IllegalMonitorStateException_init_[8] PROGMEM = {
	0x2A,0xB7,0x00,0x2A,0x01,0xB1,0x01,0x01
};

/* Class: java.lang.IndexOutOfBoundsException */
/* Method: <init> */
RANGE const unsigned char java_lang_IndexOutOfBoundsException_init_[8] PROGMEM = {
	0x2A,0xB7,0x00,0x2A,0x01,0xB1,0x01,0x01
};

/* Class: java.lang.IndexOutOfBoundsException */
/* Method: <init> */
RANGE const unsigned char java_lang_IndexOutOfBoundsException_init__[9] PROGMEM = {
	0x2A,0x2B,0xB7,0x00,0x2B,0x02,0xB1,0x01,0x03
};

/* Class: java.lang.Integer */
/* Method: <clinit> */
RANGE const unsigned char java_lang_Integer_clinit_[1519] PROGMEM = {
	0x12,0x00,0x05,0xB8,0x00,0x12,0x56,0xB3,0x00,0x11,0x22,
	/* offset: 2, -128*/
	(uint8)(((uint16)(offsetof(struct _staticClassFields_c, TYPE_f__f__f) << 3)) >> 8), (uint8)(((uint16)(offsetof(struct _staticClassFields_c, TYPE_f__f__f) << 3)) & 0xff),
	0x10,0x24,0xBC,
	0x00,0x01,0x59,0x03,0x10,0x30,0x55,0x59,0x04,0x10,0x31,0x55,0x59,0x05,0x10,0x32,
	0x55,0x59,0x06,0x10,0x33,0x55,0x59,0x07,0x10,0x34,0x55,0x59,0x08,0x10,0x35,0x55,
	0x59,0x10,0x06,0x10,0x36,0x55,0x59,0x10,0x07,0x10,0x37,0x55,0x59,0x10,0x08,0x10,
	0x38,0x55,0x59,0x10,0x09,0x10,0x39,0x55,0x59,0x10,0x0A,0x10,0x61,0x55,0x59,0x10,
	0x0B,0x10,0x62,0x55,0x59,0x10,0x0C,0x10,0x63,0x55,0x59,0x10,0x0D,0x10,0x64,0x55,
	0x59,0x10,0x0E,0x10,0x65,0x55,0x59,0x10,0x0F,0x10,0x66,0x55,0x59,0x10,0x10,0x10,
	0x67,0x55,0x59,0x10,0x11,0x10,0x68,0x55,0x59,0x10,0x12,0x10,0x69,0x55,0x59,0x10,
	0x13,0x10,0x6A,0x55,0x59,0x10,0x14,0x10,0x6B,0x55,0x59,0x10,0x15,0x10,0x6C,0x55,
	0x59,0x10,0x16,0x10,0x6D,0x55,0x59,0x10,0x17,0x10,0x6E,0x55,0x59,0x10,0x18,0x10,
	0x6F,0x55,0x59,0x10,0x19,0x10,0x70,0x55,0x59,0x10,0x1A,0x10,0x71,0x55,0x59,0x10,
	0x1B,0x10,0x72,0x55,0x59,0x10,0x1C,0x10,0x73,0x55,0x59,0x10,0x1D,0x10,0x74,0x55,
	0x59,0x10,0x1E,0x10,0x75,0x55,0x59,0x10,0x1F,0x10,0x76,0x55,0x59,0x10,0x20,0x10,
	0x77,0x55,0x59,0x10,0x21,0x10,0x78,0x55,0x59,0x10,0x22,0x10,0x79,0x55,0x59,0x10,
	0x23,0x10,0x7A,0x55,0xB3,0x00,0x11,0x22,
	/* offset: 2, -96*/
	(uint8)(((uint16)(offsetof(struct _staticClassFields_c, digits_f) << 3)) >> 8), (uint8)(((uint16)(offsetof(struct _staticClassFields_c, digits_f) << 3)) & 0xff),
	0x10,0x64,0xBC,0x00,0x01,0x59,
	0x03,0x10,0x30,0x55,0x59,0x04,0x10,0x30,0x55,0x59,0x05,0x10,0x30,0x55,0x59,0x06,
	0x10,0x30,0x55,0x59,0x07,0x10,0x30,0x55,0x59,0x08,0x10,0x30,0x55,0x59,0x10,0x06,
	0x10,0x30,0x55,0x59,0x10,0x07,0x10,0x30,0x55,0x59,0x10,0x08,0x10,0x30,0x55,0x59,
	0x10,0x09,0x10,0x30,0x55,0x59,0x10,0x0A,0x10,0x31,0x55,0x59,0x10,0x0B,0x10,0x31,
	0x55,0x59,0x10,0x0C,0x10,0x31,0x55,0x59,0x10,0x0D,0x10,0x31,0x55,0x59,0x10,0x0E,
	0x10,0x31,0x55,0x59,0x10,0x0F,0x10,0x31,0x55,0x59,0x10,0x10,0x10,0x31,0x55,0x59,
	0x10,0x11,0x10,0x31,0x55,0x59,0x10,0x12,0x10,0x31,0x55,0x59,0x10,0x13,0x10,0x31,
	0x55,0x59,0x10,0x14,0x10,0x32,0x55,0x59,0x10,0x15,0x10,0x32,0x55,0x59,0x10,0x16,
	0x10,0x32,0x55,0x59,0x10,0x17,0x10,0x32,0x55,0x59,0x10,0x18,0x10,0x32,0x55,0x59,
	0x10,0x19,0x10,0x32,0x55,0x59,0x10,0x1A,0x10,0x32,0x55,0x59,0x10,0x1B,0x10,0x32,
	0x55,0x59,0x10,0x1C,0x10,0x32,0x55,0x59,0x10,0x1D,0x10,0x32,0x55,0x59,0x10,0x1E,
	0x10,0x33,0x55,0x59,0x10,0x1F,0x10,0x33,0x55,0x59,0x10,0x20,0x10,0x33,0x55,0x59,
	0x10,0x21,0x10,0x33,0x55,0x59,0x10,0x22,0x10,0x33,0x55,0x59,0x10,0x23,0x10,0x33,
	0x55,0x59,0x10,0x24,0x10,0x33,0x55,0x59,0x10,0x25,0x10,0x33,0x55,0x59,0x10,0x26,
	0x10,0x33,0x55,0x59,0x10,0x27,0x10,0x33,0x55,0x59,0x10,0x28,0x10,0x34,0x55,0x59,
	0x10,0x29,0x10,0x34,0x55,0x59,0x10,0x2A,0x10,0x34,0x55,0x59,0x10,0x2B,0x10,0x34,
	0x55,0x59,0x10,0x2C,0x10,0x34,0x55,0x59,0x10,0x2D,0x10,0x34,0x55,0x59,0x10,0x2E,
	0x10,0x34,0x55,0x59,0x10,0x2F,0x10,0x34,0x55,0x59,0x10,0x30,0x10,0x34,0x55,0x59,
	0x10,0x31,0x10,0x34,0x55,0x59,0x10,0x32,0x10,0x35,0x55,0x59,0x10,0x33,0x10,0x35,
	0x55,0x59,0x10,0x34,0x10,0x35,0x55,0x59,0x10,0x35,0x10,0x35,0x55,0x59,0x10,0x36,
	0x10,0x35,0x55,0x59,0x10,0x37,0x10,0x35,0x55,0x59,0x10,0x38,0x10,0x35,0x55,0x59,
	0x10,0x39,0x10,0x35,0x55,0x59,0x10,0x3A,0x10,0x35,0x55,0x59,0x10,0x3B,0x10,0x35,
	0x55,0x59,0x10,0x3C,0x10,0x36,0x55,0x59,0x10,0x3D,0x10,0x36,0x55,0x59,0x10,0x3E,
	0x10,0x36,0x55,0x59,0x10,0x3F,0x10,0x36,0x55,0x59,0x10,0x40,0x10,0x36,0x55,0x59,
	0x10,0x41,0x10,0x36,0x55,0x59,0x10,0x42,0x10,0x36,0x55,0x59,0x10,0x43,0x10,0x36,
	0x55,0x59,0x10,0x44,0x10,0x36,0x55,0x59,0x10,0x45,0x10,0x36,0x55,0x59,0x10,0x46,
	0x10,0x37,0x55,0x59,0x10,0x47,0x10,0x37,0x55,0x59,0x10,0x48,0x10,0x37,0x55,0x59,
	0x10,0x49,0x10,0x37,0x55,0x59,0x10,0x4A,0x10,0x37,0x55,0x59,0x10,0x4B,0x10,0x37,
	0x55,0x59,0x10,0x4C,0x10,0x37,0x55,0x59,0x10,0x4D,0x10,0x37,0x55,0x59,0x10,0x4E,
	0x10,0x37,0x55,0x59,0x10,0x4F,0x10,0x37,0x55,0x59,0x10,0x50,0x10,0x38,0x55,0x59,
	0x10,0x51,0x10,0x38,0x55,0x59,0x10,0x52,0x10,0x38,0x55,0x59,0x10,0x53,0x10,0x38,
	0x55,0x59,0x10,0x54,0x10,0x38,0x55,0x59,0x10,0x55,0x10,0x38,0x55,0x59,0x10,0x56,
	0x10,0x38,0x55,0x59,0x10,0x57,0x10,0x38,0x55,0x59,0x10,0x58,0x10,0x38,0x55,0x59,
	0x10,0x59,0x10,0x38,0x55,0x59,0x10,0x5A,0x10,0x39,0x55,0x59,0x10,0x5B,0x10,0x39,
	0x55,0x59,0x10,0x5C,0x10,0x39,0x55,0x59,0x10,0x5D,0x10,0x39,0x55,0x59,0x10,0x5E,
	0x10,0x39,0x55,0x59,0x10,0x5F,0x10,0x39,0x55,0x59,0x10,0x60,0x10,0x39,0x55,0x59,
	0x10,0x61,0x10,0x39,0x55,0x59,0x10,0x62,0x10,0x39,0x55,0x59,0x10,0x63,0x10,0x39,
	0x55,0xB3,0x00,0x11,0x22,
	/* offset: 2, -64*/
	(uint8)(((uint16)(offsetof(struct _staticClassFields_c, DigitTens_f) << 3)) >> 8), (uint8)(((uint16)(offsetof(struct _staticClassFields_c, DigitTens_f) << 3)) & 0xff),
	0x10,0x64,0xBC,0x00,0x01,0x59,0x03,0x10,0x30,
	0x55,0x59,0x04,0x10,0x31,0x55,0x59,0x05,0x10,0x32,0x55,0x59,0x06,0x10,0x33,0x55,
	0x59,0x07,0x10,0x34,0x55,0x59,0x08,0x10,0x35,0x55,0x59,0x10,0x06,0x10,0x36,0x55,
	0x59,0x10,0x07,0x10,0x37,0x55,0x59,0x10,0x08,0x10,0x38,0x55,0x59,0x10,0x09,0x10,
	0x39,0x55,0x59,0x10,0x0A,0x10,0x30,0x55,0x59,0x10,0x0B,0x10,0x31,0x55,0x59,0x10,
	0x0C,0x10,0x32,0x55,0x59,0x10,0x0D,0x10,0x33,0x55,0x59,0x10,0x0E,0x10,0x34,0x55,
	0x59,0x10,0x0F,0x10,0x35,0x55,0x59,0x10,0x10,0x10,0x36,0x55,0x59,0x10,0x11,0x10,
	0x37,0x55,0x59,0x10,0x12,0x10,0x38,0x55,0x59,0x10,0x13,0x10,0x39,0x55,0x59,0x10,
	0x14,0x10,0x30,0x55,0x59,0x10,0x15,0x10,0x31,0x55,0x59,0x10,0x16,0x10,0x32,0x55,
	0x59,0x10,0x17,0x10,0x33,0x55,0x59,0x10,0x18,0x10,0x34,0x55,0x59,0x10,0x19,0x10,
	0x35,0x55,0x59,0x10,0x1A,0x10,0x36,0x55,0x59,0x10,0x1B,0x10,0x37,0x55,0x59,0x10,
	0x1C,0x10,0x38,0x55,0x59,0x10,0x1D,0x10,0x39,0x55,0x59,0x10,0x1E,0x10,0x30,0x55,
	0x59,0x10,0x1F,0x10,0x31,0x55,0x59,0x10,0x20,0x10,0x32,0x55,0x59,0x10,0x21,0x10,
	0x33,0x55,0x59,0x10,0x22,0x10,0x34,0x55,0x59,0x10,0x23,0x10,0x35,0x55,0x59,0x10,
	0x24,0x10,0x36,0x55,0x59,0x10,0x25,0x10,0x37,0x55,0x59,0x10,0x26,0x10,0x38,0x55,
	0x59,0x10,0x27,0x10,0x39,0x55,0x59,0x10,0x28,0x10,0x30,0x55,0x59,0x10,0x29,0x10,
	0x31,0x55,0x59,0x10,0x2A,0x10,0x32,0x55,0x59,0x10,0x2B,0x10,0x33,0x55,0x59,0x10,
	0x2C,0x10,0x34,0x55,0x59,0x10,0x2D,0x10,0x35,0x55,0x59,0x10,0x2E,0x10,0x36,0x55,
	0x59,0x10,0x2F,0x10,0x37,0x55,0x59,0x10,0x30,0x10,0x38,0x55,0x59,0x10,0x31,0x10,
	0x39,0x55,0x59,0x10,0x32,0x10,0x30,0x55,0x59,0x10,0x33,0x10,0x31,0x55,0x59,0x10,
	0x34,0x10,0x32,0x55,0x59,0x10,0x35,0x10,0x33,0x55,0x59,0x10,0x36,0x10,0x34,0x55,
	0x59,0x10,0x37,0x10,0x35,0x55,0x59,0x10,0x38,0x10,0x36,0x55,0x59,0x10,0x39,0x10,
	0x37,0x55,0x59,0x10,0x3A,0x10,0x38,0x55,0x59,0x10,0x3B,0x10,0x39,0x55,0x59,0x10,
	0x3C,0x10,0x30,0x55,0x59,0x10,0x3D,0x10,0x31,0x55,0x59,0x10,0x3E,0x10,0x32,0x55,
	0x59,0x10,0x3F,0x10,0x33,0x55,0x59,0x10,0x40,0x10,0x34,0x55,0x59,0x10,0x41,0x10,
	0x35,0x55,0x59,0x10,0x42,0x10,0x36,0x55,0x59,0x10,0x43,0x10,0x37,0x55,0x59,0x10,
	0x44,0x10,0x38,0x55,0x59,0x10,0x45,0x10,0x39,0x55,0x59,0x10,0x46,0x10,0x30,0x55,
	0x59,0x10,0x47,0x10,0x31,0x55,0x59,0x10,0x48,0x10,0x32,0x55,0x59,0x10,0x49,0x10,
	0x33,0x55,0x59,0x10,0x4A,0x10,0x34,0x55,0x59,0x10,0x4B,0x10,0x35,0x55,0x59,0x10,
	0x4C,0x10,0x36,0x55,0x59,0x10,0x4D,0x10,0x37,0x55,0x59,0x10,0x4E,0x10,0x38,0x55,
	0x59,0x10,0x4F,0x10,0x39,0x55,0x59,0x10,0x50,0x10,0x30,0x55,0x59,0x10,0x51,0x10,
	0x31,0x55,0x59,0x10,0x52,0x10,0x32,0x55,0x59,0x10,0x53,0x10,0x33,0x55,0x59,0x10,
	0x54,0x10,0x34,0x55,0x59,0x10,0x55,0x10,0x35,0x55,0x59,0x10,0x56,0x10,0x36,0x55,
	0x59,0x10,0x57,0x10,0x37,0x55,0x59,0x10,0x58,0x10,0x38,0x55,0x59,0x10,0x59,0x10,
	0x39,0x55,0x59,0x10,0x5A,0x10,0x30,0x55,0x59,0x10,0x5B,0x10,0x31,0x55,0x59,0x10,
	0x5C,0x10,0x32,0x55,0x59,0x10,0x5D,0x10,0x33,0x55,0x59,0x10,0x5E,0x10,0x34,0x55,
	0x59,0x10,0x5F,0x10,0x35,0x55,0x59,0x10,0x60,0x10,0x36,0x55,0x59,0x10,0x61,0x10,
	0x37,0x55,0x59,0x10,0x62,0x10,0x38,0x55,0x59,0x10,0x63,0x10,0x39,0x55,0xB3,0x00,
	0x11,0x22,
	/* offset: 2, -32*/
	(uint8)(((uint16)(offsetof(struct _staticClassFields_c, DigitOnes_f) << 3)) >> 8), (uint8)(((uint16)(offsetof(struct _staticClassFields_c, DigitOnes_f) << 3)) & 0xff),
	0x10,0x0A,0xBC,0x00,0x02,0x59,0x03,0x10,0x09,0x4F,0x59,0x04,
	0x10,0x63,0x4F,0x59,0x05,0x11,0x03,0xE7,0x4F,0x59,0x06,0x11,0x27,0x0F,0x4F,0x59,
	0x07,0x12,0x00,0x06,0x4F,0x59,0x08,0x12,0x00,0x07,0x4F,0x59,0x10,0x06,0x12,0x00,
	0x08,0x4F,0x59,0x10,0x07,0x12,0x00,0x09,0x4F,0x59,0x10,0x08,0x12,0x00,0x0A,0x4F,
	0x59,0x10,0x09,0x12,0x00,0x02,0x4F,0xB3,0x00,0x11,0x22,
	/* offset: 3, 0*/
	(uint8)(((uint16)(offsetof(struct _staticClassFields_c, sizeTable_f) << 3)) >> 8), (uint8)(((uint16)(offsetof(struct _staticClassFields_c, sizeTable_f) << 3)) & 0xff),
	0xB1,0x00
};

/* Class: java.lang.Integer */
/* Method: getChars */
RANGE const unsigned char java_lang_Integer_getChars[144] PROGMEM = {
	0x1B,0x36,0x05,0x03,0x36,0x06,0x1A,0x9C,0x00,0x0A,0x10,0x2D,0x36,0x06,0x1A,0x74,
	0x3B,0x1A,0x12,0x00,0x0B,0xA1,0x00,0x3D,0x1A,0x10,0x64,0x6C,0x3E,0x1A,0x1D,0x10,
	0x06,0x78,0x1D,0x08,0x78,0x60,0x1D,0x05,0x78,0x60,0x64,0x36,0x04,0x1D,0x3B,0x2C,
	0x84,0x05,0xFF,0x15,0x05,0xB2,0x00,0x11,0x22,
	/* offset: 2, -32*/
	(uint8)(((uint16)(offsetof(struct _staticClassFields_c, DigitOnes_f) << 3)) >> 8), (uint8)(((uint16)(offsetof(struct _staticClassFields_c, DigitOnes_f) << 3)) & 0xff),
	0x15,0x04,0x34,0x55,0x2C,
	0x84,0x05,0xFF,0x15,0x05,0xB2,0x00,0x11,0x22,
	/* offset: 2, -64*/
	(uint8)(((uint16)(offsetof(struct _staticClassFields_c, DigitTens_f) << 3)) >> 8), (uint8)(((uint16)(offsetof(struct _staticClassFields_c, DigitTens_f) << 3)) & 0xff),
	0x15,0x04,0x34,0x55,0xA7,
	0xFF,0xC2,0x1A,0x12,0x00,0x0C,0x68,0x10,0x13,0x7C,0x3E,0x1A,0x1D,0x06,0x78,0x1D,
	0x04,0x78,0x60,0x64,0x36,0x04,0x2C,0x84,0x05,0xFF,0x15,0x05,0xB2,0x00,0x11,0x22,
	/* offset: 2, -96*/
	(uint8)(((uint16)(offsetof(struct _staticClassFields_c, digits_f) << 3)) >> 8), (uint8)(((uint16)(offsetof(struct _staticClassFields_c, digits_f) << 3)) & 0xff),
	0x15,0x04,0x34,0x55,0x1D,0x3B,0x1A,0x9A,0xFF,0xD9,0xA7,0x00,0x03,0x15,
	0x06,0x99,0x00,0x0C,0x2C,0x84,0x05,0xFF,0x15,0x05,0x15,0x06,0x55,0xB1,0x01,0x04
};

/* Class: java.lang.Integer */
/* Method: stringSize */
RANGE const unsigned char java_lang_Integer_stringSize[26] PROGMEM = {
	0x03,0x3C,0x1A,0xB2,0x00,0x11,0x22,
	/* offset: 3, 0*/
	(uint8)(((uint16)(offsetof(struct _staticClassFields_c, sizeTable_f) << 3)) >> 8), (uint8)(((uint16)(offsetof(struct _staticClassFields_c, sizeTable_f) << 3)) & 0xff),
	0x1B,0x2E,0xA3,0x00,0x09,0x1B,0x04,
	0x60,0xAC,0x01,0x00,0x84,0x01,0x01,0xA7,0xFF,0xEB
};

/* Class: java.lang.Math */
/* Method: <clinit> */
RANGE const unsigned char java_lang_Math_clinit_[76] PROGMEM = {
	0x12,0x00,0x0D,0xB7,0x00,0x11,0x6C,0x9A,0x00,0x07,0x04,0xA7,0x00,0x04,0x03,0xB3,
	0x00,0x12,0x08,
	/* offset: 4, 32*/
	(uint8)(((uint16)(offsetof(struct _staticClassFields_c, _assertionsDisabled_f__f) << 3)) >> 8), (uint8)(((uint16)(offsetof(struct _staticClassFields_c, _assertionsDisabled_f__f) << 3)) & 0xff),
	0x12,0x00,0x0E,0xB8,0x00,0x1A,0x18,0x85,0xB3,0x00,0x12,
	0x40,
	/* offset: 3, 32*/
	(uint8)(((uint16)(offsetof(struct _staticClassFields_c, negativeZeroFloatBits_f) << 3)) >> 8), (uint8)(((uint16)(offsetof(struct _staticClassFields_c, negativeZeroFloatBits_f) << 3)) & 0xff),
	0x14,0x00,0x0F,0xB8,0x00,0x14,0x1D,0xB3,0x00,0x12,0x40,
	/* offset: 3, 96*/
	(uint8)(((uint16)(offsetof(struct _staticClassFields_c, negativeZeroDoubleBits_f) << 3)) >> 8), (uint8)(((uint16)(offsetof(struct _staticClassFields_c, negativeZeroDoubleBits_f) << 3)) & 0xff),

	0x11,0x02,0x00,0xB8,0x00,0x25,0x46,0xB3,0x00,0x12,0x40,
	/* offset: 3, -96*/
	(uint8)(((uint16)(offsetof(struct _staticClassFields_c, twoToTheDoubleScaleUp_f) << 3)) >> 8), (uint8)(((uint16)(offsetof(struct _staticClassFields_c, twoToTheDoubleScaleUp_f) << 3)) & 0xff),
	0x11,0xFE,0x00,
	0xB8,0x00,0x25,0x46,0xB3,0x00,0x12,0x40,
	/* offset: 3, -32*/
	(uint8)(((uint16)(offsetof(struct _staticClassFields_c, twoToTheDoubleScaleDown_f) << 3)) >> 8), (uint8)(((uint16)(offsetof(struct _staticClassFields_c, twoToTheDoubleScaleDown_f) << 3)) & 0xff),
	0xB1,0x00
};

/* Class: java.lang.Math */
/* Method: <init> */
RANGE const unsigned char java_lang_Math_init_[8] PROGMEM = {
	0x2A,0xB7,0x00,0x28,0x01,0xB1,0x01,0x01
};

/* Class: java.lang.Math */
/* Method: min */
RANGE const unsigned char java_lang_Math_min[13] PROGMEM = {
	0x1A,0x1B,0xA3,0x00,0x07,0x1A,0xA7,0x00,0x04,0x1B,0xAC,0x01,0x00
};

/* Class: java.lang.Math */
/* Method: powerOfTwoD */
RANGE const unsigned char java_lang_Math_powerOfTwoD[52] PROGMEM = {
	0xB2,0x00,0x12,0x08,
	/* offset: 4, 32*/
	(uint8)(((uint16)(offsetof(struct _staticClassFields_c, _assertionsDisabled_f__f) << 3)) >> 8), (uint8)(((uint16)(offsetof(struct _staticClassFields_c, _assertionsDisabled_f__f) << 3)) & 0xff),
	0x9A,0x00,0x1A,0x1A,0x11,0xFC,0x02,0xA1,0x00,0x0A,
	0x1A,0x11,0x03,0xFF,0xA4,0x00,0x0C,0xBB,0x00,0x10,0x59,0xB7,0x00,0x0F,0x45,0xBF,
	0x1A,0x85,0x14,0x00,0x10,0x61,0x10,0x34,0x79,0x14,0x00,0x11,0x7F,0xB8,0x00,0x15,
	0x47,0xAF,0x01,0x00
};

/* Class: java.lang.NegativeArraySizeException */
/* Method: <init> */
RANGE const unsigned char java_lang_NegativeArraySizeException_init_[8] PROGMEM = {
	0x2A,0xB7,0x00,0x2A,0x01,0xB1,0x01,0x01
};

/* Class: java.lang.NullPointerException */
/* Method: <init> */
RANGE const unsigned char java_lang_NullPointerException_init_[8] PROGMEM = {
	0x2A,0xB7,0x00,0x2A,0x01,0xB1,0x01,0x01
};

/* Class: java.lang.Object */
/* Method: <init> */
RANGE const unsigned char java_lang_Object_init_[3] PROGMEM = {
	0xB1,0x01,0x01
};

/* Class: java.lang.OutOfMemoryError */
/* Method: <init> */
RANGE const unsigned char java_lang_OutOfMemoryError_init_[8] PROGMEM = {
	0x2A,0xB7,0x00,0x3F,0x01,0xB1,0x01,0x01
};

/* Class: java.lang.RuntimeException */
/* Method: <init> */
RANGE const unsigned char java_lang_RuntimeException_init_[8] PROGMEM = {
	0x2A,0xB7,0x00,0x17,0x01,0xB1,0x01,0x01
};

/* Class: java.lang.RuntimeException */
/* Method: <init> */
RANGE const unsigned char java_lang_RuntimeException_init__[9] PROGMEM = {
	0x2A,0x2B,0xB7,0x00,0x18,0x02,0xB1,0x01,0x03
};

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
RANGE const unsigned char java_lang_String_init__[101] PROGMEM = {
	0x2A,0xB7,0x00,0x28,0x01,0x1C,0x9C,0x00,0x0D,0xBB,0x00,0x36,0x59,0x1C,0xB7,0x00,
	0x36,0x07,0xBF,0x1D,0x9D,0x00,0x2A,0x1D,0x9C,0x00,0x0D,0xBB,0x00,0x36,0x59,0x1D,
	0xB7,0x00,0x36,0x07,0xBF,0x1C,0x2B,0xBE,0xA3,0x00,0x16,0x2A,0x12,0x00,0x12,0xB4,
	0x00,0x19,0x22,
	/* offset: 0, 0*/
	(uint8)(((uint16)((offsetof(struct _java_lang_String_c, value_f) - sizeof(Object)) << 3)) >> 8), (uint8)(((uint16)((offsetof(struct _java_lang_String_c, value_f) - sizeof(Object)) << 3)) & 0xff),
	0xB5,0x00,0x19,0x22,
	/* offset: 0, 0*/
	(uint8)(((uint16)((offsetof(struct _java_lang_String_c, value_f) - sizeof(Object)) << 3)) >> 8), (uint8)(((uint16)((offsetof(struct _java_lang_String_c, value_f) - sizeof(Object)) << 3)) & 0xff),
	0xB1,0x01,0x03,0x1C,0x2B,
	0xBE,0x1D,0x64,0xA4,0x00,0x0F,0xBB,0x00,0x36,0x59,0x1C,0x1D,0x60,0xB7,0x00,0x36,
	0x07,0xBF,0x2A,0x2B,0x1C,0x1C,0x1D,0x60,0xB8,0x00,0x43,0x08,0xB5,0x00,0x19,0x22,
	/* offset: 0, 0*/
	(uint8)(((uint16)((offsetof(struct _java_lang_String_c, value_f) - sizeof(Object)) << 3)) >> 8), (uint8)(((uint16)((offsetof(struct _java_lang_String_c, value_f) - sizeof(Object)) << 3)) & 0xff),
	0xB1,0x01,0x03
};

/* Class: java.lang.String */
/* Method: charAt */
RANGE const unsigned char java_lang_String_charAt[38] PROGMEM = {
	0x1B,0x9B,0x00,0x0F,0x1B,0x2A,0xB4,0x00,0x19,0x22,
	/* offset: 0, 0*/
	(uint8)(((uint16)((offsetof(struct _java_lang_String_c, value_f) - sizeof(Object)) << 3)) >> 8), (uint8)(((uint16)((offsetof(struct _java_lang_String_c, value_f) - sizeof(Object)) << 3)) & 0xff),
	0xBE,0xA1,0x00,0x0D,
	0xBB,0x00,0x36,0x59,0x1B,0xB7,0x00,0x36,0x07,0xBF,0x2A,0xB4,0x00,0x19,0x22,
	/* offset: 0, 0*/
	(uint8)(((uint16)((offsetof(struct _java_lang_String_c, value_f) - sizeof(Object)) << 3)) >> 8), (uint8)(((uint16)((offsetof(struct _java_lang_String_c, value_f) - sizeof(Object)) << 3)) & 0xff),
	0x1B,0x34,0xAC,0x01,0x01
};

/* Class: java.lang.String */
/* Method: getChars */
RANGE const unsigned char java_lang_String_getChars[74] PROGMEM = {
	0x1B,0x9C,0x00,0x0D,0xBB,0x00,0x36,0x59,0x1B,0xB7,0x00,0x36,0x07,0xBF,0x1C,0x2A,
	0xB4,0x00,0x19,0x22,
	/* offset: 0, 0*/
	(uint8)(((uint16)((offsetof(struct _java_lang_String_c, value_f) - sizeof(Object)) << 3)) >> 8), (uint8)(((uint16)((offsetof(struct _java_lang_String_c, value_f) - sizeof(Object)) << 3)) & 0xff),
	0xBE,0xA4,0x00,0x0D,0xBB,0x00,0x36,0x59,0x1C,0xB7,
	0x00,0x36,0x07,0xBF,0x1B,0x1C,0xA4,0x00,0x0F,0xBB,0x00,0x36,0x59,0x1C,0x1B,0x64,
	0xB7,0x00,0x36,0x07,0xBF,0x2A,0xB4,0x00,0x19,0x22,
	/* offset: 0, 0*/
	(uint8)(((uint16)((offsetof(struct _java_lang_String_c, value_f) - sizeof(Object)) << 3)) >> 8), (uint8)(((uint16)((offsetof(struct _java_lang_String_c, value_f) - sizeof(Object)) << 3)) & 0xff),
	0x1B,0x2D,0x15,0x04,
	0x1C,0x1B,0x64,0xB8,0x00,0x38,0x25,0xB1,0x01,0x09
};

/* Class: java.lang.String */
/* Method: length */
RANGE const unsigned char java_lang_String_length[11] PROGMEM = {
	0x2A,0xB4,0x00,0x19,0x22,
	/* offset: 0, 0*/
	(uint8)(((uint16)((offsetof(struct _java_lang_String_c, value_f) - sizeof(Object)) << 3)) >> 8), (uint8)(((uint16)((offsetof(struct _java_lang_String_c, value_f) - sizeof(Object)) << 3)) & 0xff),
	0xBE,0xAC,0x01,0x01
};

/* Class: java.lang.StringBuilder */
/* Method: <init> */
RANGE const unsigned char java_lang_StringBuilder_init_[10] PROGMEM = {
	0x2A,0x10,0x10,0xB7,0x00,0x07,0x01,0xB1,0x01,0x01
};

/* Class: java.lang.StringBuilder */
/* Method: append */
RANGE const unsigned char java_lang_StringBuilder_append_[11] PROGMEM = {
	0x2A,0x1B,0xB7,0x00,0x08,0x10,0x57,0x2A,0xB0,0x01,0x05
};

/* Class: java.lang.StringBuilder */
/* Method: append */
RANGE const unsigned char java_lang_StringBuilder_append__[9] PROGMEM = {
	0x2A,0x2B,0xB7,0x00,0x34,0x03,0xB0,0x01,0x07
};

/* Class: java.lang.StringBuilder */
/* Method: append */
RANGE const unsigned char java_lang_StringBuilder_append___[11] PROGMEM = {
	0x2A,0x2B,0xB7,0x00,0x09,0x08,0x57,0x2A,0xB0,0x01,0x07
};

/* Class: java.lang.StringBuilder */
/* Method: toString */
RANGE const unsigned char java_lang_StringBuilder_toString[26] PROGMEM = {
	0xBB,0x00,0x32,0x59,0x2A,0xB4,0x00,0x05,0x22,
	/* offset: 0, 0*/
	(uint8)(((uint16)((offsetof(struct _java_lang_StringBuilder_c, value_f) - sizeof(Object)) << 3)) >> 8), (uint8)(((uint16)((offsetof(struct _java_lang_StringBuilder_c, value_f) - sizeof(Object)) << 3)) & 0xff),
	0x03,0x2A,0xB4,0x00,0x05,
	0x20,
	/* offset: 0, 32*/
	(uint8)(((uint16)((offsetof(struct _java_lang_StringBuilder_c, count_f) - sizeof(Object)) << 3)) >> 8), (uint8)(((uint16)((offsetof(struct _java_lang_StringBuilder_c, count_f) - sizeof(Object)) << 3)) & 0xff),
	0xB7,0x00,0x2D,0x2C,0xB0,0x01,0x03
};

/* Class: java.lang.StringIndexOutOfBoundsException */
/* Method: <init> */
RANGE const unsigned char java_lang_StringIndexOutOfBoundsException_init_[32] PROGMEM = {
	0x2A,0xBB,0x00,0x34,0x59,0xB7,0x00,0x31,0x04,0x12,0x00,0x13,0xB7,0x00,0x34,0x06,
	0x1B,0xB7,0x00,0x32,0x07,0xB7,0x00,0x35,0x08,0xB7,0x00,0x1E,0x02,0xB1,0x01,0x01
};

/* Class: java.lang.System */
/* Method: <clinit> */
RANGE const unsigned char java_lang_System_clinit_[41] PROGMEM = {
	0xB8,0x00,0x39,0x66,0x01,0xB3,0x00,0x1C,0x22,
	/* offset: 5, 104*/
	(uint8)(((uint16)(offsetof(struct _staticClassFields_c, in_f) << 3)) >> 8), (uint8)(((uint16)(offsetof(struct _staticClassFields_c, in_f) << 3)) & 0xff),
	0x01,0xB3,0x00,0x1C,0x22,
	/* offset: 5, -120*/
	(uint8)(((uint16)(offsetof(struct _staticClassFields_c, out_f) << 3)) >> 8), (uint8)(((uint16)(offsetof(struct _staticClassFields_c, out_f) << 3)) & 0xff),
	0x01,0xB3,0x00,0x1C,0x22,
	/* offset: 5, -88*/
	(uint8)(((uint16)(offsetof(struct _staticClassFields_c, err_f) << 3)) >> 8), (uint8)(((uint16)(offsetof(struct _staticClassFields_c, err_f) << 3)) & 0xff),
	0x01,0xB3,0x00,0x1C,0x22,
	/* offset: 5, -56*/
	(uint8)(((uint16)(offsetof(struct _staticClassFields_c, security_f) << 3)) >> 8), (uint8)(((uint16)(offsetof(struct _staticClassFields_c, security_f) << 3)) & 0xff),

	0x01,0xB3,0x00,0x1C,0x22,
	/* offset: 5, -24*/
	(uint8)(((uint16)(offsetof(struct _staticClassFields_c, cons_f) << 3)) >> 8), (uint8)(((uint16)(offsetof(struct _staticClassFields_c, cons_f) << 3)) & 0xff),
	0xB1,0x00
};

/* Class: java.lang.System */
/* Method: arraycopy */
/* Class: java.lang.System */
/* Method: registerNatives */
/* Class: java.lang.Throwable */
/* Method: <clinit> */
/* Class: java.lang.Throwable */
/* Method: <init> */
RANGE const unsigned char java_lang_Throwable_init_[48] PROGMEM = {
	0x2A,0xB7,0x00,0x28,0x01,0x2A,0x2A,0xB5,0x00,0x1D,0x22,
	/* offset: 0, 64*/
	(uint8)(((uint16)((offsetof(struct _java_lang_VirtualMachineError_c, cause_f) - sizeof(Object)) << 3)) >> 8), (uint8)(((uint16)((offsetof(struct _java_lang_VirtualMachineError_c, cause_f) - sizeof(Object)) << 3)) & 0xff),
	0x2A,0xB2,0x00,
	0x1D,0x22,
	/* offset: 6, 72*/
	(uint8)(((uint16)(offsetof(struct _staticClassFields_c, UNASSIGNED_STACK_f) << 3)) >> 8), (uint8)(((uint16)(offsetof(struct _staticClassFields_c, UNASSIGNED_STACK_f) << 3)) & 0xff),
	0xB5,0x00,0x1D,0x22,
	/* offset: 0, 96*/
	(uint8)(((uint16)((offsetof(struct _java_lang_VirtualMachineError_c, stackTrace_f) - sizeof(Object)) << 3)) >> 8), (uint8)(((uint16)((offsetof(struct _java_lang_VirtualMachineError_c, stackTrace_f) - sizeof(Object)) << 3)) & 0xff),
	0x2A,0xB2,0x00,0x1D,0x22,
	/* offset: 6, 104*/
	(uint8)(((uint16)(offsetof(struct _staticClassFields_c, SUPPRESSED_SENTINEL_f) << 3)) >> 8), (uint8)(((uint16)(offsetof(struct _staticClassFields_c, SUPPRESSED_SENTINEL_f) << 3)) & 0xff),
	0xB5,0x00,0x1D,0x22,
	/* offset: 0, -128*/
	(uint8)(((uint16)((offsetof(struct _java_lang_VirtualMachineError_c, suppressedExceptions_f) - sizeof(Object)) << 3)) >> 8), (uint8)(((uint16)((offsetof(struct _java_lang_VirtualMachineError_c, suppressedExceptions_f) - sizeof(Object)) << 3)) & 0xff),
	0x2A,0xB7,0x00,0x3D,0x07,0x57,0xB1,0x01,0x01
};

/* Class: java.lang.Throwable */
/* Method: <init> */
RANGE const unsigned char java_lang_Throwable_init__[56] PROGMEM = {
	0x2A,0xB7,0x00,0x28,0x01,0x2A,0x2A,0xB5,0x00,0x1D,0x22,
	/* offset: 0, 64*/
	(uint8)(((uint16)((offsetof(struct _java_lang_VirtualMachineError_c, cause_f) - sizeof(Object)) << 3)) >> 8), (uint8)(((uint16)((offsetof(struct _java_lang_VirtualMachineError_c, cause_f) - sizeof(Object)) << 3)) & 0xff),
	0x2A,0xB2,0x00,
	0x1D,0x22,
	/* offset: 6, 72*/
	(uint8)(((uint16)(offsetof(struct _staticClassFields_c, UNASSIGNED_STACK_f) << 3)) >> 8), (uint8)(((uint16)(offsetof(struct _staticClassFields_c, UNASSIGNED_STACK_f) << 3)) & 0xff),
	0xB5,0x00,0x1D,0x22,
	/* offset: 0, 96*/
	(uint8)(((uint16)((offsetof(struct _java_lang_VirtualMachineError_c, stackTrace_f) - sizeof(Object)) << 3)) >> 8), (uint8)(((uint16)((offsetof(struct _java_lang_VirtualMachineError_c, stackTrace_f) - sizeof(Object)) << 3)) & 0xff),
	0x2A,0xB2,0x00,0x1D,0x22,
	/* offset: 6, 104*/
	(uint8)(((uint16)(offsetof(struct _staticClassFields_c, SUPPRESSED_SENTINEL_f) << 3)) >> 8), (uint8)(((uint16)(offsetof(struct _staticClassFields_c, SUPPRESSED_SENTINEL_f) << 3)) & 0xff),
	0xB5,0x00,0x1D,0x22,
	/* offset: 0, -128*/
	(uint8)(((uint16)((offsetof(struct _java_lang_VirtualMachineError_c, suppressedExceptions_f) - sizeof(Object)) << 3)) >> 8), (uint8)(((uint16)((offsetof(struct _java_lang_VirtualMachineError_c, suppressedExceptions_f) - sizeof(Object)) << 3)) & 0xff),
	0x2A,0xB7,0x00,0x3D,0x07,0x57,0x2A,0x2B,0xB5,
	0x00,0x1D,0x22,
	/* offset: 0, 32*/
	(uint8)(((uint16)((offsetof(struct _java_lang_VirtualMachineError_c, detailMessage_f) - sizeof(Object)) << 3)) >> 8), (uint8)(((uint16)((offsetof(struct _java_lang_VirtualMachineError_c, detailMessage_f) - sizeof(Object)) << 3)) & 0xff),
	0xB1,0x01,0x03
};

/* Class: java.lang.Throwable */
/* Method: fillInStackTrace */
RANGE const unsigned char java_lang_Throwable_fillInStackTrace[44] PROGMEM = {
	0x2A,0xB4,0x00,0x1D,0x22,
	/* offset: 0, 96*/
	(uint8)(((uint16)((offsetof(struct _java_lang_VirtualMachineError_c, stackTrace_f) - sizeof(Object)) << 3)) >> 8), (uint8)(((uint16)((offsetof(struct _java_lang_VirtualMachineError_c, stackTrace_f) - sizeof(Object)) << 3)) & 0xff),
	0xC7,0x00,0x0D,0x2A,0xB4,0x00,0x1D,0x22,
	/* offset: 0, 0*/
	(uint8)(((uint16)((offsetof(struct _java_lang_VirtualMachineError_c, backtrace_f) - sizeof(Object)) << 3)) >> 8), (uint8)(((uint16)((offsetof(struct _java_lang_VirtualMachineError_c, backtrace_f) - sizeof(Object)) << 3)) & 0xff),
	0xC6,0x00,0x17,0x2A,0x03,0xB7,0x00,0x3E,0x3F,0x57,0x2A,0xB2,0x00,0x1D,0x22,
	/* offset: 6, 72*/
	(uint8)(((uint16)(offsetof(struct _staticClassFields_c, UNASSIGNED_STACK_f) << 3)) >> 8), (uint8)(((uint16)(offsetof(struct _staticClassFields_c, UNASSIGNED_STACK_f) << 3)) & 0xff),
	0xB5,0x00,0x1D,0x22,
	/* offset: 0, 96*/
	(uint8)(((uint16)((offsetof(struct _java_lang_VirtualMachineError_c, stackTrace_f) - sizeof(Object)) << 3)) >> 8), (uint8)(((uint16)((offsetof(struct _java_lang_VirtualMachineError_c, stackTrace_f) - sizeof(Object)) << 3)) & 0xff),
	0x2A,0xB0,0x01,0x03
};

/* Class: java.lang.Throwable */
/* Method: fillInStackTrace */
/* Class: java.lang.VirtualMachineError */
/* Method: <init> */
RANGE const unsigned char java_lang_VirtualMachineError_init_[8] PROGMEM = {
	0x2A,0xB7,0x00,0x16,0x01,0xB1,0x01,0x01
};

/* Class: java.util.Arrays */
/* Method: <clinit> */
RANGE const unsigned char java_util_Arrays_clinit_[23] PROGMEM = {
	0x12,0x00,0x14,0xB7,0x00,0x11,0xC5,0x9A,0x00,0x07,0x04,0xA7,0x00,0x04,0x03,0xB3,
	0x00,0x1F,0x08,
	/* offset: 6, -120*/
	(uint8)(((uint16)(offsetof(struct _staticClassFields_c, _assertionsDisabled_f) << 3)) >> 8), (uint8)(((uint16)(offsetof(struct _staticClassFields_c, _assertionsDisabled_f) << 3)) & 0xff),
	0xB1,0x00
};

/* Class: java.util.Arrays */
/* Method: <init> */
RANGE const unsigned char java_util_Arrays_init_[8] PROGMEM = {
	0x2A,0xB7,0x00,0x28,0x01,0xB1,0x01,0x01
};

/* Class: java.util.Arrays */
/* Method: copyOf */
RANGE const unsigned char java_util_Arrays_copyOf[24] PROGMEM = {
	0x1B,0xBC,0x00,0x01,0x4D,0x2A,0x03,0x2C,0x03,0x2A,0xBE,0x1B,0xB8,0x00,0x24,0x64,
	0xB8,0x00,0x38,0x41,0x2C,0xB0,0x01,0x0D
};

/* Class: java.util.Arrays */
/* Method: copyOfRange */
RANGE const unsigned char java_util_Arrays_copyOfRange[75] PROGMEM = {
	0x1C,0x1B,0x64,0x3E,0x1D,0x9C,0x00,0x29,0xBB,0x00,0x1C,0x59,0xBB,0x00,0x34,0x59,
	0xB7,0x00,0x31,0x04,0x1B,0xB7,0x00,0x32,0x07,0x12,0x00,0x15,0xB7,0x00,0x34,0x06,
	0x1C,0xB7,0x00,0x32,0x07,0xB7,0x00,0x35,0x0A,0xB7,0x00,0x1B,0x0B,0xBF,0x1D,0xBC,
	0x00,0x01,0x3A,0x04,0x2A,0x1B,0x19,0x04,0x03,0x2A,0xBE,0x1B,0x64,0x1D,0xB8,0x00,
	0x24,0x64,0xB8,0x00,0x38,0x41,0x19,0x04,0xB0,0x01,0x31
};

/* Class: scjhelloworld.Delay */
/* Method: <init> */
RANGE const unsigned char scjhelloworld_Delay_init_[16] PROGMEM = {
	0x2A,0xB7,0x00,0x28,0x0A,0x2A,0x1B,0xB5,0x00,0x20,0x20,
	/* offset: 0, 0*/
	(uint8)(((uint16)((offsetof(struct _scjhelloworld_Delay_c, delayTime_f) - sizeof(Object)) << 3)) >> 8), (uint8)(((uint16)((offsetof(struct _scjhelloworld_Delay_c, delayTime_f) - sizeof(Object)) << 3)) & 0xff),
	0xB1,0x01,0x01
};

/* Class: scjhelloworld.Delay */
/* Method: delay */
RANGE const unsigned char scjhelloworld_Delay_delay[15] PROGMEM = {
	0x2A,0x2A,0xB4,0x00,0x20,0x20,
	/* offset: 0, 0*/
	(uint8)(((uint16)((offsetof(struct _scjhelloworld_Delay_c, delayTime_f) - sizeof(Object)) << 3)) >> 8), (uint8)(((uint16)((offsetof(struct _scjhelloworld_Delay_c, delayTime_f) - sizeof(Object)) << 3)) & 0xff),
	0xB7,0x00,0x46,0x16,0xB1,0x01,0x01
};

/* Class: scjhelloworld.Delay */
/* Method: delayTicks */
/* Class: scjhelloworld.Led */
/* Method: <init> */
RANGE const unsigned char scjhelloworld_Led_init_[16] PROGMEM = {
	0x2A,0xB7,0x00,0x28,0x0A,0x2A,0x1B,0xB5,0x00,0x21,0x20,
	/* offset: 0, 0*/
	(uint8)(((uint16)((offsetof(struct _scjhelloworld_Led_c, ledNumber_f) - sizeof(Object)) << 3)) >> 8), (uint8)(((uint16)((offsetof(struct _scjhelloworld_Led_c, ledNumber_f) - sizeof(Object)) << 3)) & 0xff),
	0xB1,0x01,0x01
};

/* Class: scjhelloworld.Led */
/* Method: ledStatus */
/* Class: scjhelloworld.Led */
/* Method: off */
RANGE const unsigned char scjhelloworld_Led_off[16] PROGMEM = {
	0x2A,0x2A,0xB4,0x00,0x21,0x20,
	/* offset: 0, 0*/
	(uint8)(((uint16)((offsetof(struct _scjhelloworld_Led_c, ledNumber_f) - sizeof(Object)) << 3)) >> 8), (uint8)(((uint16)((offsetof(struct _scjhelloworld_Led_c, ledNumber_f) - sizeof(Object)) << 3)) & 0xff),
	0x03,0xB7,0x00,0x48,0x17,0xB1,0x01,0x01
};

/* Class: scjhelloworld.Led */
/* Method: on */
RANGE const unsigned char scjhelloworld_Led_on[16] PROGMEM = {
	0x2A,0x2A,0xB4,0x00,0x21,0x20,
	/* offset: 0, 0*/
	(uint8)(((uint16)((offsetof(struct _scjhelloworld_Led_c, ledNumber_f) - sizeof(Object)) << 3)) >> 8), (uint8)(((uint16)((offsetof(struct _scjhelloworld_Led_c, ledNumber_f) - sizeof(Object)) << 3)) & 0xff),
	0x04,0xB7,0x00,0x48,0x17,0xB1,0x01,0x01
};

/* Class: scjhelloworld.TestProcess$P1 */
/* Method: <init> */
RANGE const unsigned char scjhelloworld_TestProcess_P1_init_[8] PROGMEM = {
	0x2A,0xB7,0x00,0x28,0x0A,0xB1,0x01,0x01
};

/* Class: scjhelloworld.TestProcess$P1 */
/* Method: <init> */
RANGE const unsigned char scjhelloworld_TestProcess_P1_init__[8] PROGMEM = {
	0x2A,0xB7,0x00,0x4B,0x49,0xB1,0x01,0x03
};

/* Class: scjhelloworld.TestProcess$P1 */
/* Method: catchError */
RANGE const unsigned char scjhelloworld_TestProcess_P1_catchError[74] PROGMEM = {
	0xBB,0x00,0x42,0x59,0x05,0xB7,0x00,0x47,0x15,0x4D,0xBB,0x00,0x42,0x59,0x06,0xB7,
	0x00,0x47,0x15,0x4E,0xBB,0x00,0x42,0x59,0x07,0xB7,0x00,0x47,0x15,0x3A,0x04,0xBB,
	0x00,0x42,0x59,0x08,0xB7,0x00,0x47,0x15,0x3A,0x05,0x2C,0xB7,0x00,0x49,0x1B,0x2D,
	0xB7,0x00,0x4A,0x18,0x19,0x04,0xB7,0x00,0x49,0x1B,0x19,0x05,0xB7,0x00,0x49,0x1B,
	0x12,0x00,0x16,0xB8,0x00,0x02,0x26,0xB1,0x01,0x3F
};

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
	int16 excep;
	unsigned short handler_pc;
	unsigned short pc;
	Object* i_obj;
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
	*sp = (int32) i_val2;
	sp++;
	*sp = (int32) i_val1;
	sp++;
	sp -= 2;
	rval_m_5 = enterMethodInterpreter(SCJHELLOWORLD_LED_INIT_, sp);
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
	*sp = (int32) i_val2;
	sp++;
	*sp = (int32) i_val1;
	sp++;
	sp -= 2;
	rval_m_15 = enterMethodInterpreter(SCJHELLOWORLD_LED_INIT_, sp);
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
	*sp = (int32) i_val2;
	sp++;
	*sp = (int32) i_val1;
	sp++;
	sp -= 2;
	rval_m_25 = enterMethodInterpreter(SCJHELLOWORLD_LED_INIT_, sp);
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
	*sp = (int32) i_val2;
	sp++;
	*sp = (int32) i_val1;
	sp++;
	sp -= 2;
	rval_m_35 = enterMethodInterpreter(SCJHELLOWORLD_LED_INIT_, sp);
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
	*sp = (int32) i_val2;
	sp++;
	sp -= 1;
	rval_m_42 = enterMethodInterpreter(SCJHELLOWORLD_LED_ON, sp);
	if (rval_m_42 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_42;
	}
	/*         led1.off(); */
	i_val2 = led1;
	/*         led1.off(); */
	*sp = (int32) i_val2;
	sp++;
	sp -= 1;
	rval_m_47 = enterMethodInterpreter(SCJHELLOWORLD_LED_OFF, sp);
	if (rval_m_47 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_47;
	}
	/*         led2.off(); */
	i_val2 = led2;
	/*         led2.off(); */
	*sp = (int32) i_val2;
	sp++;
	sp -= 1;
	rval_m_52 = enterMethodInterpreter(SCJHELLOWORLD_LED_OFF, sp);
	if (rval_m_52 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_52;
	}
	/*         led3.off(); */
	i_val2 = led3;
	/*         led3.off(); */
	*sp = (int32) i_val2;
	sp++;
	sp -= 1;
	rval_m_58 = enterMethodInterpreter(SCJHELLOWORLD_LED_OFF, sp);
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
	*sp = (int32) i_val2;
	sp++;
	*sp = (int32) i_val1;
	sp++;
	sp -= 2;
	rval_m_69 = enterMethodInterpreter(SCJHELLOWORLD_DELAY_INIT_, sp);
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
	*sp = (int32) i_val2;
	sp++;
	sp -= 1;
	rval_m_77 = enterMethodInterpreter(SCJHELLOWORLD_DELAY_DELAY, sp);
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
	*sp = (int32) i_val2;
	sp++;
	sp -= 1;
	rval_m_84 = enterMethodInterpreter(DEVICES_CONSOLE_PRINTLN, sp);
	if (rval_m_84 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_84;
	}
	/*    	 p1.transferTo(p2); */
	sp -= 0;
	rval_m_88 = enterMethodInterpreter(SCJHELLOWORLD_TESTPROCESS_ACCESS_0, sp);
	if (rval_m_88 == -1) {
		sp += 1;
	} else {
		fp[0] = *sp;
		return rval_m_88;
	}
	/*    	 p1.transferTo(p2); */
	sp -= 0;
	rval_m_92 = enterMethodInterpreter(SCJHELLOWORLD_TESTPROCESS_ACCESS_1, sp);
	if (rval_m_92 == -1) {
		sp += 1;
	} else {
		fp[0] = *sp;
		return rval_m_92;
	}
	/*    	 p1.transferTo(p2); */
	sp -= 2;
	i_obj = (Object*) (pointer) * sp;
	if (i_obj == 0) {
		pc = 96;
		goto throwNullPointer;
	}
	rval_m_96 = vm_Process_transferTo(sp);
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
RANGE const unsigned char scjhelloworld_TestProcess_P2_init_[8] PROGMEM = {
	0x2A,0xB7,0x00,0x28,0x0A,0xB1,0x01,0x01
};

/* Class: scjhelloworld.TestProcess$P2 */
/* Method: <init> */
RANGE const unsigned char scjhelloworld_TestProcess_P2_init__[8] PROGMEM = {
	0x2A,0xB7,0x00,0x4F,0x49,0xB1,0x01,0x03
};

/* Class: scjhelloworld.TestProcess$P2 */
/* Method: catchError */
RANGE const unsigned char scjhelloworld_TestProcess_P2_catchError[74] PROGMEM = {
	0xBB,0x00,0x42,0x59,0x05,0xB7,0x00,0x47,0x15,0x4D,0xBB,0x00,0x42,0x59,0x06,0xB7,
	0x00,0x47,0x15,0x4E,0xBB,0x00,0x42,0x59,0x07,0xB7,0x00,0x47,0x15,0x3A,0x04,0xBB,
	0x00,0x42,0x59,0x08,0xB7,0x00,0x47,0x15,0x3A,0x05,0x2C,0xB7,0x00,0x49,0x18,0x2D,
	0xB7,0x00,0x49,0x18,0x19,0x04,0xB7,0x00,0x49,0x18,0x19,0x05,0xB7,0x00,0x4A,0x1B,
	0x12,0x00,0x18,0xB8,0x00,0x02,0x26,0xB1,0x01,0x3F
};

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
	int16 excep;
	unsigned short handler_pc;
	unsigned short pc;
	Object* i_obj;
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
	*sp = (int32) i_val2;
	sp++;
	*sp = (int32) i_val1;
	sp++;
	sp -= 2;
	rval_m_5 = enterMethodInterpreter(SCJHELLOWORLD_LED_INIT_, sp);
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
	*sp = (int32) i_val2;
	sp++;
	*sp = (int32) i_val1;
	sp++;
	sp -= 2;
	rval_m_15 = enterMethodInterpreter(SCJHELLOWORLD_LED_INIT_, sp);
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
	*sp = (int32) i_val2;
	sp++;
	*sp = (int32) i_val1;
	sp++;
	sp -= 2;
	rval_m_25 = enterMethodInterpreter(SCJHELLOWORLD_LED_INIT_, sp);
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
	*sp = (int32) i_val2;
	sp++;
	*sp = (int32) i_val1;
	sp++;
	sp -= 2;
	rval_m_35 = enterMethodInterpreter(SCJHELLOWORLD_LED_INIT_, sp);
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
	*sp = (int32) i_val2;
	sp++;
	sp -= 1;
	rval_m_42 = enterMethodInterpreter(SCJHELLOWORLD_LED_OFF, sp);
	if (rval_m_42 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_42;
	}
	/*         led1.off(); */
	i_val2 = led1;
	/*         led1.off(); */
	*sp = (int32) i_val2;
	sp++;
	sp -= 1;
	rval_m_47 = enterMethodInterpreter(SCJHELLOWORLD_LED_OFF, sp);
	if (rval_m_47 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_47;
	}
	/*         led2.on(); */
	i_val2 = led2;
	/*         led2.on(); */
	*sp = (int32) i_val2;
	sp++;
	sp -= 1;
	rval_m_52 = enterMethodInterpreter(SCJHELLOWORLD_LED_ON, sp);
	if (rval_m_52 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_52;
	}
	/*         led3.off(); */
	i_val2 = led3;
	/*         led3.off(); */
	*sp = (int32) i_val2;
	sp++;
	sp -= 1;
	rval_m_58 = enterMethodInterpreter(SCJHELLOWORLD_LED_OFF, sp);
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
	*sp = (int32) i_val2;
	sp++;
	*sp = (int32) i_val1;
	sp++;
	sp -= 2;
	rval_m_69 = enterMethodInterpreter(SCJHELLOWORLD_DELAY_INIT_, sp);
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
	*sp = (int32) i_val2;
	sp++;
	sp -= 1;
	rval_m_77 = enterMethodInterpreter(SCJHELLOWORLD_DELAY_DELAY, sp);
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
	*sp = (int32) i_val2;
	sp++;
	sp -= 1;
	rval_m_84 = enterMethodInterpreter(DEVICES_CONSOLE_PRINTLN, sp);
	if (rval_m_84 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_84;
	}
	/*         p2.transferTo(mainProcess); */
	sp -= 0;
	rval_m_88 = enterMethodInterpreter(SCJHELLOWORLD_TESTPROCESS_ACCESS_1, sp);
	if (rval_m_88 == -1) {
		sp += 1;
	} else {
		fp[0] = *sp;
		return rval_m_88;
	}
	/*         p2.transferTo(mainProcess); */
	sp -= 0;
	rval_m_92 = enterMethodInterpreter(SCJHELLOWORLD_TESTPROCESS_ACCESS_2, sp);
	if (rval_m_92 == -1) {
		sp += 1;
	} else {
		fp[0] = *sp;
		return rval_m_92;
	}
	/*         p2.transferTo(mainProcess); */
	sp -= 2;
	i_obj = (Object*) (pointer) * sp;
	if (i_obj == 0) {
		pc = 96;
		goto throwNullPointer;
	}
	rval_m_96 = vm_Process_transferTo(sp);
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
RANGE const unsigned char scjhelloworld_TestProcess_access_0[9] PROGMEM = {
	0xB2,0x00,0x22,0x22,
	/* offset: 6, -112*/
	(uint8)(((uint16)(offsetof(struct _staticClassFields_c, p1_f) << 3)) >> 8), (uint8)(((uint16)(offsetof(struct _staticClassFields_c, p1_f) << 3)) & 0xff),
	0xB0,0x01,0x01
};

/* Class: scjhelloworld.TestProcess */
/* Method: access$1 */
RANGE const unsigned char scjhelloworld_TestProcess_access_1[9] PROGMEM = {
	0xB2,0x00,0x22,0x22,
	/* offset: 6, -80*/
	(uint8)(((uint16)(offsetof(struct _staticClassFields_c, p2_f) << 3)) >> 8), (uint8)(((uint16)(offsetof(struct _staticClassFields_c, p2_f) << 3)) & 0xff),
	0xB0,0x01,0x01
};

/* Class: scjhelloworld.TestProcess */
/* Method: access$2 */
RANGE const unsigned char scjhelloworld_TestProcess_access_2[9] PROGMEM = {
	0xB2,0x00,0x22,0x22,
	/* offset: 6, -48*/
	(uint8)(((uint16)(offsetof(struct _staticClassFields_c, mainProcess_f) << 3)) >> 8), (uint8)(((uint16)(offsetof(struct _staticClassFields_c, mainProcess_f) << 3)) & 0xff),
	0xB0,0x01,0x01
};

/* Class: scjhelloworld.TestProcess */
/* Method: main */
RANGE const unsigned char scjhelloworld_TestProcess_main[229] PROGMEM = {
	0x12,0x00,0x1A,0xB8,0x00,0x02,0x16,0xBB,0x00,0x4E,0x59,0xBB,0x00,0x46,0x59,0x01,
	0xB7,0x00,0x4C,0x20,0x11,0x02,0x00,0xBC,0x00,0x02,0xB7,0x00,0x60,0x23,0xB3,0x00,
	0x22,0x22,
	/* offset: 6, -112*/
	(uint8)(((uint16)(offsetof(struct _staticClassFields_c, p1_f) << 3)) >> 8), (uint8)(((uint16)(offsetof(struct _staticClassFields_c, p1_f) << 3)) & 0xff),
	0xBB,0x00,0x4E,0x59,0xBB,0x00,0x48,0x59,0x01,0xB7,0x00,0x50,
	0x2A,0x11,0x02,0x00,0xBC,0x00,0x02,0xB7,0x00,0x60,0x23,0xB3,0x00,0x22,0x22,
	/* offset: 6, -80*/
	(uint8)(((uint16)(offsetof(struct _staticClassFields_c, p2_f) << 3)) >> 8), (uint8)(((uint16)(offsetof(struct _staticClassFields_c, p2_f) << 3)) & 0xff),
	0xBB,0x00,0x42,0x59,0x05,0xB7,0x00,0x47,0x31,0x4C,0xBB,0x00,0x42,0x59,0x06,
	0xB7,0x00,0x47,0x31,0x4D,0xBB,0x00,0x42,0x59,0x07,0xB7,0x00,0x47,0x31,0x4E,0xBB,
	0x00,0x42,0x59,0x08,0xB7,0x00,0x47,0x31,0x3A,0x04,0x2B,0xB7,0x00,0x4A,0x34,0x2C,
	0xB7,0x00,0x4A,0x34,0x2D,0xB7,0x00,0x4A,0x34,0x19,0x04,0xB7,0x00,0x4A,0x34,0xBB,
	0x00,0x40,0x59,0x11,0x03,0xE8,0xB7,0x00,0x44,0x39,0x3A,0x05,0x19,0x05,0xB7,0x00,
	0x45,0x3A,0xBB,0x00,0x4E,0x59,0x01,0x01,0xB7,0x00,0x60,0x23,0xB3,0x00,0x22,0x22,
	/* offset: 6, -48*/
	(uint8)(((uint16)(offsetof(struct _staticClassFields_c, mainProcess_f) << 3)) >> 8), (uint8)(((uint16)(offsetof(struct _staticClassFields_c, mainProcess_f) << 3)) & 0xff),
	0xB2,0x00,0x22,0x22,
	/* offset: 6, -112*/
	(uint8)(((uint16)(offsetof(struct _staticClassFields_c, p1_f) << 3)) >> 8), (uint8)(((uint16)(offsetof(struct _staticClassFields_c, p1_f) << 3)) & 0xff),
	0xB7,0x00,0x64,0x3F,0xB2,0x00,0x22,0x22,
	/* offset: 6, -80*/
	(uint8)(((uint16)(offsetof(struct _staticClassFields_c, p2_f) << 3)) >> 8), (uint8)(((uint16)(offsetof(struct _staticClassFields_c, p2_f) << 3)) & 0xff),
	0xB7,0x00,0x64,0x3F,0xB2,0x00,0x22,0x22,
	/* offset: 6, -48*/
	(uint8)(((uint16)(offsetof(struct _staticClassFields_c, mainProcess_f) << 3)) >> 8), (uint8)(((uint16)(offsetof(struct _staticClassFields_c, mainProcess_f) << 3)) & 0xff),
	0xB2,0x00,0x22,0x22,
	/* offset: 6, -112*/
	(uint8)(((uint16)(offsetof(struct _staticClassFields_c, p1_f) << 3)) >> 8), (uint8)(((uint16)(offsetof(struct _staticClassFields_c, p1_f) << 3)) & 0xff),
	0xB7,0x00,0x66,0x42,0x12,0x00,0x1B,0xB8,0x00,0x02,0x16,0x2B,0xB7,0x00,
	0x49,0x48,0x2C,0xB7,0x00,0x49,0x48,0x2D,0xB7,0x00,0x49,0x48,0x19,0x04,0xB7,0x00,
	0x49,0x48,0xA7,0x00,0x00
};

/* Class: vm.ClockInterruptHandler */
/* Method: yield */
RANGE const unsigned char vm_ClockInterruptHandler_yield[5] PROGMEM = {
	0x2A,0xB6,0x00,0x6A,0xB1
};

/* Class: vm.Process$ProcessExecutor */
/* Method: <init> */
RANGE const unsigned char vm_Process_ProcessExecutor_init_[16] PROGMEM = {
	0x2A,0xB7,0x00,0x28,0x0E,0x2A,0x2B,0xB5,0x00,0x28,0x22,
	/* offset: 0, 0*/
	(uint8)(((uint16)((offsetof(struct _vm_Process_ProcessExecutor_c, thisProcess_f) - sizeof(Object)) << 3)) >> 8), (uint8)(((uint16)((offsetof(struct _vm_Process_ProcessExecutor_c, thisProcess_f) - sizeof(Object)) << 3)) & 0xff),
	0xB1,0x01,0x03
};

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
	Object* i_obj;
	int16 rval_m_22;
	int8 b_val1;
	int16 rval_m_54;
	unsigned short classIndex;
	unsigned short methodIndex;
	unsigned char methodVtableIndex;
	int16 rval_m_58;
	int16 rval_m_83;
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
	*sp = (int32) i_val1;
	sp++;
	*sp = (int32) i_val0;
	sp++;
	sp -= 2;
	i_obj = (Object*) (pointer) * sp;
	if (i_obj == 0) {
		pc = 22;
		goto throwNullPointer;
	}
	rval_m_22 = vm_Process_transferTo(sp);
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
	rval_m_54 = enterMethodInterpreter(VM_PROCESS_ACCESS_0, sp);
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
	rval_m_83 = enterMethodInterpreter(VM_PROCESS_ACCESS_0, sp);
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
	*sp = (int32) i_val1;
	sp++;
	sp -= 2;
	i_obj = (Object*) (pointer) * sp;
	if (i_obj == 0) {
		pc = 88;
		goto throwNullPointer;
	}
	classIndex = getClassIndex(i_obj);
	methodIndex = (unsigned short) -1;
	while (methodIndex == (unsigned short) -1) {
		switch (classIndex) {
		case 35:
			methodIndex = 77;
			continue;
		case 36:
			methodIndex = 81;
			continue;
		}
		classIndex = pgm_read_word(&classes[classIndex].superClass);
	}
	rval_m_88 = dispatchInterface(methodIndex, &methodVtableIndex, sp);
	if (rval_m_88 == -1) {
		sp += methodVtableIndex;
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
	i_val0 = 1;
	/* */
	*sp = (int32) i_val1;
	sp++;
	*sp = (int32) i_val0;
	sp++;
	sp -= 2;
	rval_m_121 = enterMethodInterpreter(VM_PROCESS_ACCESS_1, sp);
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
RANGE const unsigned char vm_Process_SP_init_[8] PROGMEM = {
	0x2A,0xB7,0x00,0x28,0x08,0xB1,0x01,0x01
};

/* Class: vm.Process$SP */
/* Method: <init> */
RANGE const unsigned char vm_Process_SP_init__[8] PROGMEM = {
	0x2A,0xB7,0x00,0x5A,0x12,0xB1,0x01,0x03
};

/* Class: vm.Process$X86_32SP */
/* Method: <init> */
RANGE const unsigned char vm_Process_X86_32SP_init_[9] PROGMEM = {
	0x2A,0x01,0xB7,0x00,0x5B,0x0B,0xB1,0x01,0x01
};

/* Class: vm.Process$X86_32SP */
/* Method: <init> */
RANGE const unsigned char vm_Process_X86_32SP_init__[8] PROGMEM = {
	0x2A,0xB7,0x00,0x5C,0x1A,0xB1,0x01,0x03
};

/* Class: vm.Process$X86_64SP */
/* Method: <init> */
RANGE const unsigned char vm_Process_X86_64SP_init_[9] PROGMEM = {
	0x2A,0x01,0xB7,0x00,0x5B,0x0B,0xB1,0x01,0x01
};

/* Class: vm.Process$X86_64SP */
/* Method: <init> */
RANGE const unsigned char vm_Process_X86_64SP_init__[8] PROGMEM = {
	0x2A,0xB7,0x00,0x5E,0x1A,0xB1,0x01,0x03
};

/* Class: vm.Process */
/* Method: <init> */
/* <init>
 * param : vm.ProcessLogic, int[]
 * return: void
 */
int16 vm_Process_init_(int32 *fp) {
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
	int32
	this;
	int32 logic;
	int32 stack;
	this = (int32)(*(fp + 0));
	logic = (int32)(*(fp + 1));
	stack = (int32)(*(fp + 2));
	sp = &fp[5]; /* make room for local VM state on the stack */
	/* */
	i_val3 = this;
	/* */
	*sp = (int32) i_val3;
	sp++;
	sp -= 1;
	rval_m_1 = enterMethodInterpreter(JAVA_LANG_OBJECT_INIT_, sp);
	if (rval_m_1 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_1;
	}
	/* */
	i_val3 = this;
	/* */
	i_val2 = logic;
	/* */
	lsb_int32 = i_val2;
	cobj = (unsigned char *) (pointer) i_val3;
	((struct _vm_Process_c *)HEAP_REF(cobj, unsigned char*)) -> logic_f = lsb_int32;
	/* */
	i_val3 = this;
	/* */
	i_val2 = stack;
	/* */
	lsb_int32 = i_val2;
	cobj = (unsigned char *) (pointer) i_val3;
	((struct _vm_Process_c *)HEAP_REF(cobj, unsigned char*)) -> stack_f = lsb_int32;
	/* */
	i_val3 = this;
	/* */
	b_val2 = 0;
	/* */
	lsb_int8 = b_val2;
	cobj = (unsigned char *) (pointer) i_val3;
	((struct _vm_Process_c *)HEAP_REF(cobj, unsigned char*)) -> isFinished_f = lsb_int8;
	/* */
	i_val3 = this;
	/* */
	*sp = (int32) i_val3;
	sp++;
	if (handleNewClassIndex(sp, 40) == 0) {
		fp[0] = *sp;
		return getClassIndex((Object*) (pointer) * sp);
	}
	sp++;
	/* */
	i_val3 = *(sp - 1);
	/* */
	i_val2 = this;
	/* */
	*sp = (int32) i_val3;
	sp++;
	*sp = (int32) i_val2;
	sp++;
	sp -= 2;
	rval_m_35 = enterMethodInterpreter(VM_PROCESS_PROCESSEXECUTOR_INIT_, sp);
	if (rval_m_35 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_35;
	}
	/* */
	sp--;
	lsb_int32 = (int32)(*sp);
	sp--;
	cobj = (unsigned char *) (pointer) * sp;
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
	L79: i_val3 = this;
	/* */
	*sp = (int32) i_val3;
	sp++;
	if (handleNewClassIndex(sp, 43) == 0) {
		fp[0] = *sp;
		return getClassIndex((Object*) (pointer) * sp);
	}
	sp++;
	/* */
	i_val3 = *(sp - 1);
	/* */
	i_val2 = 0;
	/* */
	*sp = (int32) i_val3;
	sp++;
	*sp = (int32) i_val2;
	sp++;
	sp -= 2;
	rval_m_85 = enterMethodInterpreter(VM_PROCESS_X86_64SP_INIT__, sp);
	if (rval_m_85 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_85;
	}
	/* */
	sp--;
	lsb_int32 = (int32)(*sp);
	sp--;
	cobj = (unsigned char *) (pointer) * sp;
	((struct _vm_Process_c *)HEAP_REF(cobj, unsigned char*)) -> sp_f = lsb_int32;
	/* */
	goto L114;
	/* */
	L98: i_val3 = this;
	/* */
	*sp = (int32) i_val3;
	sp++;
	if (handleNewClassIndex(sp, 42) == 0) {
		fp[0] = *sp;
		return getClassIndex((Object*) (pointer) * sp);
	}
	sp++;
	/* */
	i_val3 = *(sp - 1);
	/* */
	i_val2 = 0;
	/* */
	*sp = (int32) i_val3;
	sp++;
	*sp = (int32) i_val2;
	sp++;
	sp -= 2;
	rval_m_104 = enterMethodInterpreter(VM_PROCESS_X86_32SP_INIT__, sp);
	if (rval_m_104 == -1) {
		;
	} else {
		fp[0] = *sp;
		return rval_m_104;
	}
	/* */
	sp--;
	lsb_int32 = (int32)(*sp);
	sp--;
	cobj = (unsigned char *) (pointer) * sp;
	((struct _vm_Process_c *)HEAP_REF(cobj, unsigned char*)) -> sp_f = lsb_int32;
	/* */
	L114: return -1;
}

/* Class: vm.Process */
/* Method: access$0 */
RANGE const unsigned char vm_Process_access_0[10] PROGMEM = {
	0x2A,0xB4,0x00,0x27,0x22,
	/* offset: 0, 0*/
	(uint8)(((uint16)((offsetof(struct _vm_Process_c, logic_f) - sizeof(Object)) << 3)) >> 8), (uint8)(((uint16)((offsetof(struct _vm_Process_c, logic_f) - sizeof(Object)) << 3)) & 0xff),
	0xB0,0x01,0x03
};

/* Class: vm.Process */
/* Method: access$1 */
RANGE const unsigned char vm_Process_access_1[11] PROGMEM = {
	0x2A,0x1B,0xB5,0x00,0x27,0x08,
	/* offset: 0, -96*/
	(uint8)(((uint16)((offsetof(struct _vm_Process_c, isFinished_f) - sizeof(Object)) << 3)) >> 8), (uint8)(((uint16)((offsetof(struct _vm_Process_c, isFinished_f) - sizeof(Object)) << 3)) & 0xff),
	0xB1,0x01,0x01
};

/* Class: vm.Process */
/* Method: executeWithStack */
/* Class: vm.Process */
/* Method: initialize */
RANGE const unsigned char vm_Process_initialize[21] PROGMEM = {
	0x2A,0xB4,0x00,0x27,0x22,
	/* offset: 0, 64*/
	(uint8)(((uint16)((offsetof(struct _vm_Process_c, processExecuter_f) - sizeof(Object)) << 3)) >> 8), (uint8)(((uint16)((offsetof(struct _vm_Process_c, processExecuter_f) - sizeof(Object)) << 3)) & 0xff),
	0x2A,0xB4,0x00,0x27,0x22,
	/* offset: 0, 32*/
	(uint8)(((uint16)((offsetof(struct _vm_Process_c, stack_f) - sizeof(Object)) << 3)) >> 8), (uint8)(((uint16)((offsetof(struct _vm_Process_c, stack_f) - sizeof(Object)) << 3)) & 0xff),
	0xB8,0x00,
	0x63,0x48,0xB1,0x01,0x01
};

/* Class: vm.Process */
/* Method: transfer */
/* Class: vm.Process */
/* Method: transferTo */
/* transferTo
 * param : vm.Process
 * return: void
 */
int16 vm_Process_transferTo(int32 *fp) {
	int32* sp;
	int32 i_val1;
	int32 i_val0;
	int16 rval_m_2;
	int32
	this;
	int32 nextProcess;
	this = (int32)(*(fp + 0));
	nextProcess = (int32)(*(fp + 1));
	sp = &fp[4]; /* make room for local VM state on the stack */
	/* */
	i_val1 = this;
	/* */
	i_val0 = nextProcess;
	/* */
	*sp = (int32) i_val1;
	sp++;
	*sp = (int32) i_val0;
	sp++;
	sp -= 2;
	rval_m_2 = n_vm_Process_transfer(sp);
	if (rval_m_2 == -1) {
		;
	} else {
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
	{	3, 2, 1, 0, 32, 0, 0, 28, devices_Console_clinit_, 0, methodName0},
	{	3, 4, 4, 2, 33, 0, 0, 64, devices_Console_getBytes, 0, methodName1},
	{	3, 2, 1, 1, 32, 0, 0, 9, devices_Console_println, 0, methodName2},
	{	3, 3, 3, 2, 32, 0, 0, 49, devices_Console_println_, 0, methodName3},
	{	4, 1, 1, 0, 64, 0, 0, 8, devices_X86Writer_init_, 0, methodName4},
	{	4, 0, 0, 2, 32, 0, 0, 0, 0, n_devices_X86Writer_nwrite, methodName5},
	{	4, 2, 3, 2, 32, 0, 0, 9, devices_X86Writer_write, 0, methodName6},
	{	5, 2, 2, 1, 64, 0, 0, 19, java_lang_AbstractStringBuilder_init_, 0, methodName7},
	{	5, 3, 4, 1, 33, 0, 0, 82, java_lang_AbstractStringBuilder_append, 0, methodName8},
	{	5, 5, 3, 1, 33, 0, 0, 73, java_lang_AbstractStringBuilder_append_, 0, methodName9},
	{	5, 3, 3, 0, 33, 0, 0, 68, java_lang_AbstractStringBuilder_appendNull, 0, methodName10},
	{	5, 2, 2, 1, 32, 0, 0, 22, java_lang_AbstractStringBuilder_ensureCapacityInternal, 0, methodName11},
	{	5, 3, 3, 1, 32, 0, 0, 64, java_lang_AbstractStringBuilder_expandCapacity, 0, methodName12},
	{	6, 1, 1, 0, 64, 0, 0, 8, java_lang_ArithmeticException_init_, 0, methodName13},
	{	7, 1, 1, 0, 64, 0, 0, 8, java_lang_ArrayIndexOutOfBoundsException_init_, 0, methodName14},
	{	8, 1, 1, 0, 64, 0, 0, 8, java_lang_AssertionError_init_, 0, methodName15},
	{	9, 0, 0, 0, 32, 0, 0, 0, 0, n_java_lang_Class_clinit_, methodName16},
	{	9, 0, 0, 0, 1, 0, 0, 0, 0, n_java_lang_Class_desiredAssertionStatus, methodName17},
	{	9, 0, 0, 1, 33, 0, 0, 0, 0, n_java_lang_Class_getPrimitiveClass, methodName18},
	{	10, 1, 1, 0, 32, 0, 0, 15, java_lang_Double_clinit_, 0, methodName19},
	{	10, 0, 0, 2, 22, 0, 0, 0, 0, n_java_lang_Double_doubleToRawLongBits, methodName20},
	{	10, 0, 0, 2, 26, 0, 0, 0, 0, n_java_lang_Double_longBitsToDouble, methodName21},
	{	11, 1, 1, 0, 64, 0, 0, 8, java_lang_Error_init_, 0, methodName22},
	{	12, 1, 1, 0, 64, 0, 0, 8, java_lang_Exception_init_, 0, methodName23},
	{	12, 2, 2, 1, 64, 0, 0, 9, java_lang_Exception_init__, 0, methodName24},
	{	13, 1, 1, 0, 32, 0, 0, 15, java_lang_Float_clinit_, 0, methodName25},
	{	13, 0, 0, 1, 17, 0, 0, 0, 0, n_java_lang_Float_floatToRawIntBits, methodName26},
	{	14, 2, 2, 1, 64, 0, 0, 9, java_lang_IllegalArgumentException_init_, 0, methodName27},
	{	15, 1, 1, 0, 64, 0, 0, 8, java_lang_IllegalMonitorStateException_init_, 0, methodName28},
	{	16, 1, 1, 0, 64, 0, 0, 8, java_lang_IndexOutOfBoundsException_init_, 0, methodName29},
	{	16, 2, 2, 1, 64, 0, 0, 9, java_lang_IndexOutOfBoundsException_init__, 0, methodName30},
	{	17, 4, 1, 0, 32, 0, 0, 1519, java_lang_Integer_clinit_, 0, methodName31},
	{	17, 4, 7, 3, 32, 0, 0, 144, java_lang_Integer_getChars, 0, methodName32},
	{	17, 3, 2, 1, 17, 0, 0, 26, java_lang_Integer_stringSize, 0, methodName33},
	{	18, 2, 1, 0, 32, 0, 0, 76, java_lang_Math_clinit_, 0, methodName34},
	{	18, 1, 1, 0, 64, 0, 0, 8, java_lang_Math_init_, 0, methodName35},
	{	18, 2, 2, 2, 17, 0, 0, 13, java_lang_Math_min, 0, methodName36},
	{	18, 4, 1, 1, 26, 0, 0, 52, java_lang_Math_powerOfTwoD, 0, methodName37},
	{	19, 1, 1, 0, 64, 0, 0, 8, java_lang_NegativeArraySizeException_init_, 0, methodName38},
	{	20, 1, 1, 0, 64, 0, 0, 8, java_lang_NullPointerException_init_, 0, methodName39},
	{	22, 0, 1, 0, 64, 0, 0, 3, java_lang_Object_init_, 0, methodName40},
	{	23, 1, 1, 0, 64, 0, 0, 8, java_lang_OutOfMemoryError_init_, 0, methodName41},
	{	24, 1, 1, 0, 64, 0, 0, 8, java_lang_RuntimeException_init_, 0, methodName42},
	{	24, 2, 2, 1, 64, 0, 0, 9, java_lang_RuntimeException_init__, 0, methodName43},
	{	25, 3, 2, 1, 64, 0, 0, 22, java_lang_String_initFromCharArray, 0, methodName44},
	{	25, 5, 4, 3, 64, 0, 0, 101, java_lang_String_init__, 0, methodName45},
	{	25, 3, 2, 1, 13, 0, 0, 38, java_lang_String_charAt, 0, methodName46},
	{	25, 6, 5, 4, 32, 0, 0, 74, java_lang_String_getChars, 0, methodName47},
	{	25, 1, 1, 0, 17, 0, 0, 11, java_lang_String_length, 0, methodName48},
	{	26, 2, 1, 0, 64, 0, 0, 10, java_lang_StringBuilder_init_, 0, methodName49},
	{	26, 2, 2, 1, 33, 0, 0, 11, java_lang_StringBuilder_append_, 0, methodName50},
	{	26, 2, 2, 1, 33, 0, 0, 9, java_lang_StringBuilder_append__, 0, methodName51},
	{	26, 2, 2, 1, 33, 0, 0, 11, java_lang_StringBuilder_append___, 0, methodName52},
	{	26, 5, 1, 0, 33, 0, 0, 26, java_lang_StringBuilder_toString, 0, methodName53},
	{	27, 3, 2, 1, 64, 0, 0, 32, java_lang_StringIndexOutOfBoundsException_init_, 0, methodName54},
	{	28, 1, 1, 0, 32, 0, 0, 41, java_lang_System_clinit_, 0, methodName55},
	{	28, 0, 0, 5, 32, 0, 0, 0, 0, n_java_lang_System_arraycopy, methodName56},
	{	28, 0, 0, 0, 32, 0, 0, 0, 0, n_java_lang_System_registerNatives, methodName57},
	{	29, 0, 0, 0, 32, 0, 0, 0, 0, n_java_lang_Throwable_clinit_, methodName58},
	{	29, 2, 1, 0, 64, 0, 0, 48, java_lang_Throwable_init_, 0, methodName59},
	{	29, 2, 2, 1, 64, 0, 0, 56, java_lang_Throwable_init__, 0, methodName60},
	{	29, 2, 1, 0, 161, 0, 0, 44, java_lang_Throwable_fillInStackTrace, 0, methodName61},
	{	29, 0, 0, 1, 33, 0, 0, 0, 0, n_java_lang_Throwable_fillInStackTrace_, methodName62},
	{	30, 1, 1, 0, 64, 0, 0, 8, java_lang_VirtualMachineError_init_, 0, methodName63},
	{	31, 1, 1, 0, 32, 0, 0, 23, java_util_Arrays_clinit_, 0, methodName64},
	{	31, 1, 1, 0, 64, 0, 0, 8, java_util_Arrays_init_, 0, methodName65},
	{	31, 6, 3, 2, 33, 0, 0, 24, java_util_Arrays_copyOf, 0, methodName66},
	{	31, 6, 5, 3, 33, 0, 0, 75, java_util_Arrays_copyOfRange, 0, methodName67},
	{	32, 2, 2, 1, 64, 0, 0, 16, scjhelloworld_Delay_init_, 0, methodName68},
	{	32, 2, 1, 0, 32, 0, 0, 15, scjhelloworld_Delay_delay, 0, methodName69},
	{	32, 0, 0, 1, 32, 0, 0, 0, 0, n_scjhelloworld_Delay_delayTicks, methodName70},
	{	33, 2, 2, 1, 64, 0, 0, 16, scjhelloworld_Led_init_, 0, methodName71},
	{	33, 0, 0, 2, 32, 0, 0, 0, 0, n_scjhelloworld_Led_ledStatus, methodName72},
	{	33, 3, 1, 0, 32, 0, 0, 16, scjhelloworld_Led_off, 0, methodName73},
	{	33, 3, 1, 0, 32, 0, 0, 16, scjhelloworld_Led_on, 0, methodName74},
	{	35, 1, 1, 0, 64, 0, 0, 8, scjhelloworld_TestProcess_P1_init_, 0, methodName75},
	{	35, 1, 2, 1, 64, 0, 0, 8, scjhelloworld_TestProcess_P1_init__, 0, methodName76},
	{	35, 3, 6, 1, 32, 0, 0, 74, scjhelloworld_TestProcess_P1_catchError, 0, methodName77},
	{	35, 3, 6, 0, 32, 0, 0, 0, 0, (int16 (*)(int32 *))scjhelloworld_TestProcess_P1_run, methodName78},
	{	36, 1, 1, 0, 64, 0, 0, 8, scjhelloworld_TestProcess_P2_init_, 0, methodName79},
	{	36, 1, 2, 1, 64, 0, 0, 8, scjhelloworld_TestProcess_P2_init__, 0, methodName80},
	{	36, 3, 6, 1, 32, 0, 0, 74, scjhelloworld_TestProcess_P2_catchError, 0, methodName81},
	{	36, 3, 6, 0, 32, 0, 0, 0, 0, (int16 (*)(int32 *))scjhelloworld_TestProcess_P2_run, methodName82},
	{	34, 1, 1, 0, 33, 0, 0, 9, scjhelloworld_TestProcess_access_0, 0, methodName83},
	{	34, 1, 1, 0, 33, 0, 0, 9, scjhelloworld_TestProcess_access_1, 0, methodName84},
	{	34, 1, 1, 0, 33, 0, 0, 9, scjhelloworld_TestProcess_access_2, 0, methodName85},
	{	34, 5, 6, 1, 32, 0, 0, 229, scjhelloworld_TestProcess_main, 0, methodName86},
	{	38, 1, 1, 0, 32, 0, 0, 5, vm_ClockInterruptHandler_yield, 0, methodName87},
	{	40, 2, 2, 1, 64, 0, 0, 16, vm_Process_ProcessExecutor_init_, 0, methodName88},
	{	40, 2, 2, 0, 32, 1, ex_vm_Process_ProcessExecutor_run, 0, 0, (int16 (*)(int32 *))vm_Process_ProcessExecutor_run, methodName89},
	{	41, 1, 1, 0, 64, 0, 0, 8, vm_Process_SP_init_, 0, methodName90},
	{	41, 1, 2, 1, 64, 0, 0, 8, vm_Process_SP_init__, 0, methodName91},
	{	42, 2, 1, 0, 64, 0, 0, 9, vm_Process_X86_32SP_init_, 0, methodName92},
	{	42, 1, 2, 1, 64, 0, 0, 8, vm_Process_X86_32SP_init__, 0, methodName93},
	{	43, 2, 1, 0, 64, 0, 0, 9, vm_Process_X86_64SP_init_, 0, methodName94},
	{	43, 1, 2, 1, 64, 0, 0, 8, vm_Process_X86_64SP_init__, 0, methodName95},
	{	39, 4, 3, 2, 64, 0, 0, 0, 0, (int16 (*)(int32 *))vm_Process_init_, methodName96},
	{	39, 1, 1, 1, 33, 0, 0, 10, vm_Process_access_0, 0, methodName97},
	{	39, 2, 2, 2, 32, 0, 0, 11, vm_Process_access_1, 0, methodName98},
	{	39, 0, 0, 2, 32, 0, 0, 0, 0, n_vm_Process_executeWithStack, methodName99},
	{	39, 2, 1, 0, 32, 0, 0, 21, vm_Process_initialize, 0, methodName100},
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

