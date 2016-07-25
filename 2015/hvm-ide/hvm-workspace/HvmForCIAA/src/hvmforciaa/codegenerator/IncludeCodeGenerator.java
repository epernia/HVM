package hvmforciaa.codegenerator;

import org.eclipse.core.resources.IProject;

import hvmforciaa.Activator;
import hvmforciaa.config.HvmForCIAAProperties;
import icecapspluginlib.AbstractFileColaborator;

public class IncludeCodeGenerator extends AbstractFileColaborator {

	@Override
	protected boolean isForFile(String file) {
		return file.endsWith(".c") || file.endsWith(".h");
	}
	
	@Override
	protected boolean mustProcess(IProject project, String file) {
		// TODO Auto-generated method stub
		return super.mustProcess(project, file);
	}
	
	@Override
	protected String getPluginId() {
		return Activator.PLUGIN_ID;
	}

	@Override
	public String token() {
		return "/* INCLUDE_PROJECT_HEADER */";
	}

	@Override
	public String preference() {
		return HvmForCIAAProperties.CIAA_PROJECT_NAME;
	}

	@Override
	public String defaultValue() {
		return HvmForCIAAProperties.CIAA_PROJECT_NAME_DEFAULT;
	}
	
	@Override
	protected String buildCode() {
		return "\n#include \"" + this.getValue() + ".h\"\n";
	}

}
