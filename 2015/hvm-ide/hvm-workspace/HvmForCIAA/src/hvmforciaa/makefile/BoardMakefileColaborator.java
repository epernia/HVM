package hvmforciaa.makefile;

import hvmforciaa.config.HvmForCIAAProperties;

public class BoardMakefileColaborator extends AbstractMakefileColaborator{

	@Override
	public String preference() {
		return HvmForCIAAProperties.BOARD;
	}

	@Override
	public String defaultValue() {
		return HvmForCIAAProperties.BOARD_DEFAULT;
	}

}
