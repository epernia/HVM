package icecapspluginlib;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;

import org.eclipse.core.resources.IProject;

import extensions.BundleResourceManagerDescriptor;

public abstract class ArmCortexMPluginResourceManagerDescriptor implements
		BundleResourceManagerDescriptor {

	public ArmCortexMPluginResourceManagerDescriptor() {
	}

	@Override
	public String getBundleName() {
		return Activator.PLUGIN_ID;
	}

	@Override
	public String[] getResourceNames(IProject project) {

		ArrayList<String> files = new ArrayList<String>();
		this.addArmCortexFiles(files);
		String[] array = new String[files.size()];

		return files.toArray(array);
	}

	protected void addArmCortexFiles(ArrayList<String> files) {

		for (String st : armfiles()) {
			files.add(getArmFolder() + st);
		}
	}

	private String getArmFolder() {
		// TODO Auto-generated method stub
		return Activator.FOLDER;
	}

	protected String[] armfiles() {
		return new String[] { 
				"/armCortexM_interrupt.s", "/armCortexM_SystemTick.h" };
	}

	@Override
	public Map<String, String> getAlias(IProject project) {
		HashMap<String, String> map = new HashMap<String, String>();
		for (String st : armfiles()) {
			map.put(getArmFolder() + st, getBoardFolder(project) + st);
		}
		return map;
	}

	protected abstract String getBoardFolder(IProject project);

}
