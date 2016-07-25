package hvmforciaa.makefile;

import hvmforciaa.config.HvmForCIAAProperties;

public class ArchMakefileColaborator extends AbstractMakefileColaborator{

	@Override
	public String preference() {
		return HvmForCIAAProperties.ARCH;
	}

	@Override
	public String defaultValue() {
		return HvmForCIAAProperties.ARCH_DEFAULT;
	}

}
