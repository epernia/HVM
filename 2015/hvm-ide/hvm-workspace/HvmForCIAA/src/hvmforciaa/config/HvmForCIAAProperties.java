package hvmforciaa.config;

public class HvmForCIAAProperties {

	public static final String USE_ALTERNATIVE_MAKEFILE = "useAlternativeMakefile";
	public static final boolean USE_ALTERNATIVE_MAKEFILE_DEFAULT = false; 

	public static final String ALTERNATIVE_MAKEFILE = "alternativeMakefile";
	public static final String ALTERNATIVE_MAKEFILE_DEFAULT = ""; 
	
	public static final String CIAA_PROJECT_NAME = "CiaaProjectName";
	public static final String CIAA_PROJECT_NAME_DEFAULT = "myCIAAProject"; 

	public static final String ARCH = "ARCH";
	public static final String ARCH_DEFAULT = "";

	public static final String CPUTYPE = "CPUTYPE";
	public static final String CPUTYPE_DEFAULT = "";

	public static final String CPU = "CPU";
	public static final String CPU_DEFAULT = "";

	public static final String BOARD = "BOARD";
	public static final String BOARD_DEFAULT = "edu_ciaa_nxp";

	public static final String COMPILER = "COMPILER";
	public static final String COMPILER_DEFAULT = "";
		
	public static final String MODULES = "modules";
	public static final String MODULES_DEFAULT = "";
	
	public static final String EXTERNALS = "externals";
	public static final String EXTERNALS_DEFAULT = "drivers_board";

	public static final String JAVA_HEAP_SIZE = "JAVA_HEAP_SIZE";
	public static final String JAVA_HEAP_SIZE_DEFAULT = "16384";

	public static final String JAVA_STACK_SIZE = "JAVA_STACK_SIZE";
	public static final String JAVA_STACK_SIZE_DEFAULT = "1024";

	public static final String ADDITIONAL_FLAGS = "ADDITIONAL_FLAGS";
	public static final String ADDITIONAL_FLAGS_DEFAULT = "-g -Os -DCIAA -I..";

	
}
