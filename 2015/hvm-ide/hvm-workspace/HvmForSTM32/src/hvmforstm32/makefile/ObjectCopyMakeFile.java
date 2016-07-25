package hvmforstm32.makefile;

import hvmforarmstm32.ui.HvmForArmCortexArmProperties;

public class ObjectCopyMakeFile extends MakeFileColaborator {

	@Override
	public String token() {
		return "OBJCOPY=";
	}

	@Override
	public String preference() {
		return HvmForArmCortexArmProperties.OBJCOPY;
	}

	@Override
	public String defaultValue() {
		return HvmForArmCortexArmProperties.OBJCOPY_DEFAULT;
	}

}
