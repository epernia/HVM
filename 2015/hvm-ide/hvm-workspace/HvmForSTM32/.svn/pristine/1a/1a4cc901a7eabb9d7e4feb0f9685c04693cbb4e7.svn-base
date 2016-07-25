package hvmforstm32;

import hvmforarmstm32.ui.HvmForArmCortexArmProperties;
import icecapspluginlib.AlternativeMakefileResourceManagerDescriptor;

import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;

import org.eclipse.core.resources.IProject;
import org.eclipse.core.resources.ProjectScope;
import org.eclipse.core.runtime.preferences.IEclipsePreferences;

import extensions.ProjectResourcesManagerDescriptor;

public class STMProjectResourceManagerDescriptor extends AlternativeMakefileResourceManagerDescriptor {

	protected String outputFolder() {
		return Activator.FOLDER;
	}

	protected String alternativeMakefileDefaultValue() {
		return HvmForArmCortexArmProperties.ALTERNATIVE_MAKEFILE_DEFAULT;
	}

	protected String alternativeMakefileProperty() {
		return HvmForArmCortexArmProperties.ALTERNATIVE_MAKEFILE;
	}

	protected boolean useAlternativeMakefileDefaultValue() {
		return HvmForArmCortexArmProperties.USE_ALTERNATIVE_MAKEFILE_DEFAULT;
	}

	protected String useAlternativeMakefileProperty() {
		return HvmForArmCortexArmProperties.USE_ALTERNATIVE_MAKEFILE;
	}

	protected String getPluginId() {
		return Activator.PLUGIN_ID;
	}
}
