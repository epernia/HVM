package hvmforstm32.makefile;

import hvmforarmstm32.ui.HvmForArmCortexArmProperties;

public class AdditionalSourcesMakeFile extends MakeFileColaborator{

	@Override
	public String token() {
		return "ADDITIONAL_SRCS=";
	}

	@Override
	public String preference() {
		return HvmForArmCortexArmProperties.SOURCE_FILES;
	}

	@Override
	public String defaultValue() {
		return HvmForArmCortexArmProperties.SOURCE_FILES_DEFAULT;
	}

}
