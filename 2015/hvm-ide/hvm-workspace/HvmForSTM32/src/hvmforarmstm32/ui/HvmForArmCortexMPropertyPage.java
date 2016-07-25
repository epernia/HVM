package hvmforarmstm32.ui;

import uqbarpropertypagecontrib.DynamicPropertyPage;
import uqbarpropertypagecontrib.PreferenceObservableValue;
import hvmforstm32.Activator;

public class HvmForArmCortexMPropertyPage extends DynamicPropertyPage {

	@Override
	protected String getPluginId() {
		return Activator.PLUGIN_ID;
	}
	
	public HvmForArmCortexMPropertyPage() {
		PreferenceObservableValue useAlternativeWorkspace = this.addBoolean(HvmForArmCortexArmProperties.USE_ALTERNATIVE_MAKEFILE, "Use Alternative MakeFile", HvmForArmCortexArmProperties.USE_ALTERNATIVE_MAKEFILE_DEFAULT);
		this.addString(HvmForArmCortexArmProperties.ALTERNATIVE_MAKEFILE, "Alternative MakeFile", HvmForArmCortexArmProperties.ALTERNATIVE_MAKEFILE_DEFAULT).enableWhen(useAlternativeWorkspace);;
		this.addString(HvmForArmCortexArmProperties.SOURCE_FILES, "Additional Source Files", HvmForArmCortexArmProperties.SOURCE_FILES_DEFAULT).disableWhen(useAlternativeWorkspace);
		this.addString(HvmForArmCortexArmProperties.COMPILERFLAGS, "Compiler flags", HvmForArmCortexArmProperties.COMPILERFLAGS_DEFAULT).disableWhen(useAlternativeWorkspace);
		this.addString(HvmForArmCortexArmProperties.LIBRARIES, "Additional C Libraries", HvmForArmCortexArmProperties.LIBRARIES_DEFAULT).disableWhen(useAlternativeWorkspace);
		this.addString(HvmForArmCortexArmProperties.COMPILER, "Compiler", HvmForArmCortexArmProperties.COMPILER_DEFAULT).disableWhen(useAlternativeWorkspace);
		this.addString(HvmForArmCortexArmProperties.OBJCOPY, "Object Copy Tool", HvmForArmCortexArmProperties.OBJCOPY_DEFAULT).disableWhen(useAlternativeWorkspace);
		this.addString(HvmForArmCortexArmProperties.BURN_TOOL, "Burn Tool", HvmForArmCortexArmProperties.BURN_TOOL_DEFAULT).disableWhen(useAlternativeWorkspace);
		this.addString(HvmForArmCortexArmProperties.OUTFILE, "Out File Name", HvmForArmCortexArmProperties.OUTFILE_DEFAULT).disableWhen(useAlternativeWorkspace);		
		
	}
	
}
