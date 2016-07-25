package hvmforarmstm32.ui;

import hvmforstm32.Activator;

//TODO REFACTORME separate this file: ApplicationModel and DomainModel
//TODO REFACTORME raificar en objetitos opciones para evitar logica duplicada

public class HvmForArmCortexArmProperties  {

	public static String USE_ALTERNATIVE_MAKEFILE = "useAlternativeMakeFile";
	public static String ALTERNATIVE_MAKEFILE = "alternativeMakeFile";
	public static String SOURCE_FILES = "sourceFiles";
	public static String BURN_TOOL = "burnTool";
	public static String LIBRARIES = "libraries";
	public static String COMPILER = "compiler";
	public static String OUTFILE = "outFile";
	public static String OBJCOPY = "objCopy";
	public static String COMPILERFLAGS = "compilerFlags";
		
	
	public static boolean USE_ALTERNATIVE_MAKEFILE_DEFAULT = false;
	public static String ALTERNATIVE_MAKEFILE_DEFAULT = "";
	public static String SOURCE_FILES_DEFAULT = "";
	public static String BURN_TOOL_DEFAULT = "st-flash write $(PROJ_NAME).bin 0x8000000";
	public static String LIBRARIES_DEFAULT = "-I./lib/system/include -I./lib/system/include/cmsis -I./lib/system/include/stm32f4-hal";
	public static String COMPILER_DEFAULT = "arm-none-eabi-gcc";
	public static String OUTFILE_DEFAULT = "application";
	public static String OBJCOPY_DEFAULT = "arm-none-eabi-objcopy";
	public static String COMPILERFLAGS_DEFAULT = "-g -O2 -Wall -Wno-unused-variable -Tstm32_flash.ld -DJAVA_HEAP_SIZE=65536 -DTIMER_FREQUENCY_HZ=100u -DJAVA_STACK_SIZE=2048 -D" + Activator.ARCHTOKEN + " -mlittle-endian -mthumb -mcpu=cortex-m4 -mthumb-interwork -mfloat-abi=hard -mfpu=fpv4-sp-d16 -DSTM32F407xx -DUSE_HAL_DRIVER -DHSE_VALUE=8000000 -I.";
	
	
}
