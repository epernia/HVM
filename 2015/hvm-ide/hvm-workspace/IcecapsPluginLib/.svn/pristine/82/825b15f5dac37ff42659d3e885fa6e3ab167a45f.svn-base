package icecapspluginlib;


import java.util.HashMap;
import java.util.Map;

import org.eclipse.core.resources.IProject;
import org.eclipse.core.resources.ProjectScope;
import org.eclipse.core.runtime.preferences.IEclipsePreferences;

import extensions.ProjectResourcesManagerDescriptor;

public abstract class AlternativeMakefileResourceManagerDescriptor implements
		ProjectResourcesManagerDescriptor {

	@Override
	public Map<String, String> getResourceNames(IProject project) {
		IEclipsePreferences node = new ProjectScope(project)
				.getNode(getPluginId());

		boolean useAlternativeMakeFile = node.getBoolean(
				useAlternativeMakefileProperty(),
				useAlternativeMakefileDefaultValue());

		Map<String, String> resources = new HashMap<String, String>();
		if (useAlternativeMakeFile) {
			resources.put(node.get(
					alternativeMakefileProperty(),
					alternativeMakefileDefaultValue()),
					outputFolder() + "/" + makefileName());

		}
		return resources;

	}

	protected String makefileName() {
		return "Makefile";
	}

	protected abstract String outputFolder();

	protected abstract String alternativeMakefileDefaultValue();

	protected abstract String alternativeMakefileProperty();

	protected abstract boolean useAlternativeMakefileDefaultValue();

	protected abstract String useAlternativeMakefileProperty();

	protected abstract String getPluginId();
}
