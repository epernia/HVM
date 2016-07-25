package hvmforciaa.makefile;

import hvmforciaa.Activator;
import hvmforciaa.config.HvmForCIAAProperties;
import icecapspluginlib.AbstractFileWithAlternativeColaborator;

public class ModulesMakefileColaborator extends AbstractFileWithAlternativeColaborator {

	@Override
	protected String getPluginId() {
		return Activator.PLUGIN_ID;
	}

	@Override
	public String token() {
		return "MODS ?= ";
	}

	@Override
	public String preference() {
		return HvmForCIAAProperties.MODULES;
	}

	@Override
	public String defaultValue() {
		return HvmForCIAAProperties.MODULES_DEFAULT;
	}
	
	@Override
	protected boolean isForFile(String file) {
		String projectName = this.getPreferences().get(HvmForCIAAProperties.CIAA_PROJECT_NAME, HvmForCIAAProperties.CIAA_PROJECT_NAME);
		return file.contains(projectName + "/mak/Makefile");
	}
	
	@Override
	protected String buildCode() {
		String out = "";
		String modules = getValue();
		if(modules != null && !modules.trim().equals("")) {
			for(String module : modules.split(" ")) {
				out +=" modules$(DS)" + module;  
			};
		}
		String externals = getPreferences().get(HvmForCIAAProperties.EXTERNALS, HvmForCIAAProperties.EXTERNALS_DEFAULT);
		if(externals != null && !externals.trim().equals("")) {
			for(String external : externals.split(" ")) {
				out +=" externals$(DS)" + external;  
			};
		}

		return out;
	
	}

	@Override
	protected boolean useAlternativeFileDefault() {
		return HvmForCIAAProperties.USE_ALTERNATIVE_MAKEFILE_DEFAULT;
	}

	@Override
	protected String useAlternativeFileProperty() {
		return HvmForCIAAProperties.USE_ALTERNATIVE_MAKEFILE;
	}

}
