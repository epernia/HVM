package hvmforstm32.makefile;

import hvmforarmstm32.ui.HvmForArmCortexArmProperties;

public class CompilerFlagMakeFile extends MakeFileColaborator{

	@Override
	public String token() {
		return "CFLAGS=";
	}

	@Override
	public String preference() {
		return HvmForArmCortexArmProperties.COMPILERFLAGS;
	}

	@Override
	public String defaultValue() {
		return HvmForArmCortexArmProperties.COMPILERFLAGS_DEFAULT;
	}

}
