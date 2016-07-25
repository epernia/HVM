package hvmforciaa.makefile;

import hvmforciaa.config.HvmForCIAAProperties;

public class AdditionalFlagsMakefileColaborator extends PreferenceValueMakeFileColaborator {

	@Override
	public String preference() {
		return HvmForCIAAProperties.ADDITIONAL_FLAGS;
	}

	@Override
	public String defaultValue() {
		return HvmForCIAAProperties.ADDITIONAL_FLAGS_DEFAULT;
	}


}
