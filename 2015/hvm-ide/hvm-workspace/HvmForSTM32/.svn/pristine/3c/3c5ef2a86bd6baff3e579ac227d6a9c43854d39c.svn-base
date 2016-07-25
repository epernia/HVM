package hvmforstm32.makefile;

import hvmforarmstm32.ui.HvmForArmCortexArmProperties;
import hvmforstm32.Activator;
import icecapspluginlib.AbstractFileWithAlternativeColaborator;

import java.io.IOException;
import java.io.OutputStream;

import org.eclipse.core.resources.IProject;
import org.eclipse.core.resources.ProjectScope;
import org.eclipse.core.runtime.preferences.IEclipsePreferences;

import extensions.ArchitectureDependentCodeGenerator;

public abstract class MakeFileColaborator extends AbstractFileWithAlternativeColaborator {

	protected boolean useAlternativeFileDefault() {
		return HvmForArmCortexArmProperties.USE_ALTERNATIVE_MAKEFILE_DEFAULT;
	}

	protected String useAlternativeFileProperty() {
		return HvmForArmCortexArmProperties.USE_ALTERNATIVE_MAKEFILE;
	}

	protected String getPluginId() {
		return Activator.PLUGIN_ID;
	}

	@Override
	protected String fileName() {
		return "Workspace";
	}
}
