package hvmforciaa.config;

import hvmforciaa.Activator;
import uqbarpropertypagecontrib.DynamicPropertyPage;
import uqbarpropertypagecontrib.PreferenceObservableValue;

public class HvmForCiaaPropertyPage extends DynamicPropertyPage {

	@Override
	protected String getPluginId() {
		return Activator.PLUGIN_ID;
	}

	/**
	 * Opciones de configuracion
	 */
	public HvmForCiaaPropertyPage() {
		PreferenceObservableValue useAlternativeMake = this.addBoolean(HvmForCIAAProperties.USE_ALTERNATIVE_MAKEFILE, "Use Alternative Makefile. This options disables Makefile.mine and Makefile creation", HvmForCIAAProperties.USE_ALTERNATIVE_MAKEFILE_DEFAULT);
		this.addString(HvmForCIAAProperties.ALTERNATIVE_MAKEFILE, "Alternative Makefile.mine", HvmForCIAAProperties.ALTERNATIVE_MAKEFILE_DEFAULT).enableWhen(useAlternativeMake);
		this.addString(HvmForCIAAProperties.CIAA_PROJECT_NAME, "Project name", HvmForCIAAProperties.CIAA_PROJECT_NAME_DEFAULT);
		this.addString(HvmForCIAAProperties.BOARD, "Makefile option: " + HvmForCIAAProperties.BOARD, HvmForCIAAProperties.BOARD_DEFAULT).disableWhen(useAlternativeMake);
		this.addString(HvmForCIAAProperties.COMPILER, "Makefile option: " + HvmForCIAAProperties.COMPILER, HvmForCIAAProperties.COMPILER_DEFAULT).disableWhen(useAlternativeMake);
		this.addString(HvmForCIAAProperties.ARCH, "Makefile option: " + HvmForCIAAProperties.ARCH, HvmForCIAAProperties.ARCH_DEFAULT).disableWhen(useAlternativeMake);
		this.addString(HvmForCIAAProperties.CPU, "Makefile option: " + HvmForCIAAProperties.CPU, HvmForCIAAProperties.CPU_DEFAULT).disableWhen(useAlternativeMake);
		this.addString(HvmForCIAAProperties.CPUTYPE, "Makefile option: " + HvmForCIAAProperties.CPUTYPE, HvmForCIAAProperties.CPUTYPE_DEFAULT).disableWhen(useAlternativeMake);
		this.addString(HvmForCIAAProperties.MODULES, "Modules List (Separated by space). some options: ciaak drivers libs modbus plc posix rtos systests template tools update ", HvmForCIAAProperties.MODULES_DEFAULT).disableWhen(useAlternativeMake);
		this.addString(HvmForCIAAProperties.EXTERNALS, "External List (Separated by space). some options: ceedling lcov drivers", HvmForCIAAProperties.EXTERNALS_DEFAULT).disableWhen(useAlternativeMake);
		this.addString(HvmForCIAAProperties.JAVA_HEAP_SIZE, "Java Heap Size", HvmForCIAAProperties.JAVA_HEAP_SIZE_DEFAULT).disableWhen(useAlternativeMake);
		this.addString(HvmForCIAAProperties.JAVA_STACK_SIZE, "Java Stack Size", HvmForCIAAProperties.JAVA_STACK_SIZE_DEFAULT).disableWhen(useAlternativeMake);
		this.addString(HvmForCIAAProperties.ADDITIONAL_FLAGS, "Additional compiler flags", HvmForCIAAProperties.ADDITIONAL_FLAGS_DEFAULT).disableWhen(useAlternativeMake);
			

		
	}
	

}
