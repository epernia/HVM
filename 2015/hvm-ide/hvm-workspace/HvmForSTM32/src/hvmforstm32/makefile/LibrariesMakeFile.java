package hvmforstm32.makefile;

import hvmforarmstm32.ui.HvmForArmCortexArmProperties;

public class LibrariesMakeFile extends MakeFileColaborator {

	@Override
	public String token() {
		return "LIBRARIES=";
	}

	@Override
	public String preference() {
		return HvmForArmCortexArmProperties.LIBRARIES;
	}

	@Override
	public String defaultValue() {
		return HvmForArmCortexArmProperties.LIBRARIES_DEFAULT;
	}

}
