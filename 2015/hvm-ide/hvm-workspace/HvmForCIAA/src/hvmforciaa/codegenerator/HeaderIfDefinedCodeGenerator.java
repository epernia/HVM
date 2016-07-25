package hvmforciaa.codegenerator;

import hvmforciaa.Activator;
import hvmforciaa.config.HvmForCIAAProperties;
import icecapspluginlib.AbstractFileColaborator;

public class HeaderIfDefinedCodeGenerator extends AbstractFileColaborator {


	@Override
	protected String fileName() {
		return getValue() + ".h";
	}

	@Override
	protected String buildCode() {
		String headerCode = "_" + getValue().toUpperCase() + "_H_";
		return "#ifndef " + headerCode + "\n#define " + headerCode;
	}

	@Override
	protected String getPluginId() {
		return Activator.PLUGIN_ID;
	}

	@Override
	public String preference() {
		return HvmForCIAAProperties.CIAA_PROJECT_NAME;
	}

	@Override
	public String defaultValue() {
		return HvmForCIAAProperties.CIAA_PROJECT_NAME_DEFAULT;
	}

	public String token() {
		return "/*INCLUDE_DEF*/\n";
	}

	
}
