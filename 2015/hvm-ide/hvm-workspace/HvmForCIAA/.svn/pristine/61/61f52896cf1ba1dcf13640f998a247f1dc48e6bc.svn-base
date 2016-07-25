package hvmforciaa.resourcemanagers;

import hvmforciaa.Activator;
import hvmforciaa.config.HvmForCIAAProperties;
import icecapspluginlib.MakefileBasedResourceManagerDescriptor;

import java.util.Map;

import org.eclipse.core.resources.IProject;

import extensions.BundleResourceManagerDescriptor;

public class DefaultMakefileMineResourceManager extends MakefileBasedResourceManagerDescriptor {

	@Override
	public String getBundleName() {
		return Activator.PLUGIN_ID;
	}

	@Override
	protected String[] getBoardFiles() {
		return new String[]{getBoardFolder()};
	}

	@Override
	protected boolean useAlternativeMakefileDefault() {
		return HvmForCIAAProperties.USE_ALTERNATIVE_MAKEFILE_DEFAULT;
	}

	@Override
	protected String useAlternativeMakefileProperty() {
		return HvmForCIAAProperties.USE_ALTERNATIVE_MAKEFILE;
	}

	@Override
	protected String getBoardFolder() {
		return Activator.FOLDER;
	}

	@Override
	protected String getDefaultMakeFilePath() {
		return "defaultMakefile/Makefile.mine";
	}
	
	@Override
	protected String getFinalMakefilePath() {
		return getBoardFolder() + "/Makefile.mine";
	}
	

		
}
