package hvmforciaa.makefile;

import hvmforciaa.Activator;
import hvmforciaa.config.HvmForCIAAProperties;
import icecapspluginlib.AbstractFileWithAlternativeColaborator;

public abstract class AbstractMakefileColaborator extends AbstractFileWithAlternativeColaborator{

	@Override
	protected boolean useAlternativeFileDefault() {
		return HvmForCIAAProperties.USE_ALTERNATIVE_MAKEFILE_DEFAULT;
	}

	@Override
	protected String useAlternativeFileProperty() {
		return HvmForCIAAProperties.ALTERNATIVE_MAKEFILE;
	}

	@Override
	protected String getPluginId() {
		return Activator.PLUGIN_ID;
	}

	@Override
	public String token() {
		return "# if you define the BOARD the others parameters are optional.";
	}

	@Override
	public abstract String preference();

	@Override
	public abstract String defaultValue();
	
	@Override
	protected String buildCode() {
		if(this.getValue() != null && !this.getValue().trim().equals("") ){
			return "\n" + this.preference() + "\t?=\t" + this.getValue();
		}
		return "";
	}
	
	@Override
	protected String fileName() {
		return "Makefile.mine";
	}

}
