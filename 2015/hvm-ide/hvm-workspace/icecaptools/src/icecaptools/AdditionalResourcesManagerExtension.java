package icecaptools;

import icecaptools.extensions.ExtensionManager;
import extensions.ResourceManager;

public class AdditionalResourcesManagerExtension extends ExtensionManager<ResourceManager> {

	@Override
	protected String getCodeGeneratorExtensionPoint() {
		return Activator.PLUGIN_ID + ".ResourceManager";
	}

	@Override
	protected String getCodeGeneratorExtensionElement() {
		return "class";
	}

}
