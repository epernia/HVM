package hvmforciaa.makefile;

import hvmforciaa.config.HvmForCIAAProperties;

public class JavaStackSizeProjectMakefileColaborator extends PreferenceValueMakeFileColaborator {

	@Override
	public String preference() {
		return HvmForCIAAProperties.JAVA_STACK_SIZE;
	}

	@Override
	public String defaultValue() {
		return HvmForCIAAProperties.JAVA_STACK_SIZE_DEFAULT;
	}


}
