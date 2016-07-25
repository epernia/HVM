package hvmforstm32;

import icecapspluginlib.MakefileBasedResourceManagerDescriptor;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

import hvmforarmstm32.ui.HvmForArmCortexArmProperties;

import org.eclipse.core.resources.IProject;
import org.eclipse.core.resources.ProjectScope;
import org.eclipse.core.resources.ResourcesPlugin;
import org.eclipse.core.runtime.preferences.IEclipsePreferences;

import extensions.BundleResourceManagerDescriptor;

public class STMPluginResourceManagerDescriptor extends
		MakefileBasedResourceManagerDescriptor {

	public STMPluginResourceManagerDescriptor() {
	}

	@Override
	public String getBundleName() {
		return Activator.PLUGIN_ID;
	}

	protected boolean useAlternativeMakefileDefault() {
		return HvmForArmCortexArmProperties.USE_ALTERNATIVE_MAKEFILE_DEFAULT;
	}

	protected String useAlternativeMakefileProperty() {
		return HvmForArmCortexArmProperties.USE_ALTERNATIVE_MAKEFILE;
	}

	protected String getBoardFolder() {
		return Activator.FOLDER;
	}

	@Override
	protected String[] getBoardFiles() {

		return new String[] { 
				getBoardFolder() + "/natives_armCortexM.c",
				getBoardFolder() + "/stm32_flash.ld",
				getBoardFolder() + "/_initialize_hardware.c",
				getBoardFolder() + "/stm32f4xx_hal_conf.h",
				getBoardFolder() + "/lib", };

	}

}
