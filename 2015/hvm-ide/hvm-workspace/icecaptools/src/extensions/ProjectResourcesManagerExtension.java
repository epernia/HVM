package extensions;

import icecaptools.Activator;
import icecaptools.extensions.ExtensionManager;

public class ProjectResourcesManagerExtension extends
		ExtensionManager<ProjectResourcesManagerDescriptor> {

	@Override
	protected String getCodeGeneratorExtensionPoint() {
		return Activator.PLUGIN_ID + ".ProjectResourceManager";
	}

	@Override
	protected String getCodeGeneratorExtensionElement() {
		return "class";
	}

}
