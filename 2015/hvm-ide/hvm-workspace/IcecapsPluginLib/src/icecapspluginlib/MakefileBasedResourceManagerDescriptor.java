package icecapspluginlib;

import java.util.Arrays;
import java.util.Collections;
import java.util.HashMap;
import java.util.Map;

import org.eclipse.core.resources.IProject;
import org.eclipse.core.resources.ProjectScope;
import org.eclipse.core.runtime.preferences.IEclipsePreferences;

import extensions.BundleResourceManagerDescriptor;

public abstract class MakefileBasedResourceManagerDescriptor implements
		BundleResourceManagerDescriptor {

	public MakefileBasedResourceManagerDescriptor() {
	}

	@Override
	public abstract String getBundleName();

	@Override
	public String[] getResourceNames(IProject project) {
		IEclipsePreferences node = new ProjectScope(project)
				.getNode(getBundleName());

		String[] out = getBoardFiles();
		boolean useAlternativeMakeFile = useAlternativeWorkspace(node);


		if (!useAlternativeMakeFile) {
			out = Arrays.copyOf(out, out.length + 1);
			out[out.length - 1] = getDefaultMakeFilePath();
		}
		return out;
	}

	protected boolean useAlternativeWorkspace(IEclipsePreferences node) {
		return node.getBoolean(
				useAlternativeMakefileProperty(),
				useAlternativeMakefileDefault());
	}

	/**
	 * Location of default Makefile. This file is added if useAlternativeWorkspace is false
	 * @return
	 */
	protected String getDefaultMakeFilePath() {
		return getBoardFolder() + "/Makefile";
	}
	
	/**
	 * Fullpath of final Makefile. 
	 * @return
	 */
	protected String getFinalMakefilePath() {
		return getDefaultMakeFilePath();
	}


	protected abstract String[] getBoardFiles();

	protected abstract boolean useAlternativeMakefileDefault() ;

	protected abstract String useAlternativeMakefileProperty();

	protected abstract String getBoardFolder();


	@Override
	public Map<String, String> getAlias(IProject project) {
		Map<String, String> map = new HashMap<String, String>();
		map.put(getDefaultMakeFilePath(), getFinalMakefilePath());
		return map;
	}

}
