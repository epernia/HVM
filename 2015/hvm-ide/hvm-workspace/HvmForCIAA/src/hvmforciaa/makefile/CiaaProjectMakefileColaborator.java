package hvmforciaa.makefile;

import hvmforciaa.config.HvmForCIAAProperties;

public class CiaaProjectMakefileColaborator extends PreferenceValueMakeFileColaborator {

	@Override
	public String preference() {
		return HvmForCIAAProperties.CIAA_PROJECT_NAME;
	}

	@Override
	public String defaultValue() {
		return HvmForCIAAProperties.CIAA_PROJECT_NAME_DEFAULT;
	}

	@Override
	public String token() {
		return "PROJECT_PATH ?=";
	}

}
