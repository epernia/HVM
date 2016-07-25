package hvmforciaa.resourcemanagers;

import hvmforciaa.Activator;
import hvmforciaa.config.HvmForCIAAProperties;
import icecapspluginlib.AlternativeMakefileResourceManagerDescriptor;

import java.util.Map;

import org.eclipse.core.resources.IProject;

import extensions.ProjectResourcesManagerDescriptor;

public class CiaaAlternativeMakefileResourceManagerDescriptor extends AlternativeMakefileResourceManagerDescriptor {

	@Override
	protected String outputFolder() {
		return Activator.FOLDER;
	}

	@Override
	protected String alternativeMakefileDefaultValue() {
		return HvmForCIAAProperties.ALTERNATIVE_MAKEFILE_DEFAULT;
	}

	@Override
	protected String alternativeMakefileProperty() {
		return HvmForCIAAProperties.ALTERNATIVE_MAKEFILE;
	}

	@Override
	protected boolean useAlternativeMakefileDefaultValue() {
		return HvmForCIAAProperties.USE_ALTERNATIVE_MAKEFILE_DEFAULT;
	}

	@Override
	protected String useAlternativeMakefileProperty() {
		return HvmForCIAAProperties.USE_ALTERNATIVE_MAKEFILE;
	}

	@Override
	protected String getPluginId() {
		return Activator.PLUGIN_ID;
	}
	
	@Override
	protected String makefileName() {
		return "Makefile.mine";
	}


}
