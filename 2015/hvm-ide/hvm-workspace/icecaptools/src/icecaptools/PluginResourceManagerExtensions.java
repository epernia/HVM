package icecaptools;

import extensions.BundleResourceManagerDescriptor;
import icecaptools.extensions.ExtensionManager;

public class PluginResourceManagerExtensions extends ExtensionManager<BundleResourceManagerDescriptor>{

	@Override
	protected String getCodeGeneratorExtensionPoint() {
		return Activator.PLUGIN_ID + ".BundleResourceManager";
	}

	@Override
	protected String getCodeGeneratorExtensionElement() {
		return "class";
	}

}
