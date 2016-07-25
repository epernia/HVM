package hvmforciaa.resourcemanagers;

import hvmforciaa.Activator;
import hvmforciaa.config.HvmForCIAAProperties;

import java.io.IOException;
import java.io.InputStream;
import java.io.PrintStream;
import java.net.URL;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

import org.eclipse.core.resources.IProject;
import org.eclipse.core.resources.ProjectScope;
import org.eclipse.core.runtime.Platform;
import org.eclipse.core.runtime.preferences.IEclipsePreferences;
import org.osgi.framework.Bundle;

import extensions.ResourceManager;

public class HVMProjectResourceManager implements ResourceManager {

	private Map<IProject, IEclipsePreferences> preferences = new HashMap<IProject, IEclipsePreferences>();

	private Map<String, String> nameMap;

	@Override
	public void defineResources(IProject project, PrintStream out,
			List<String> resourcesNames) {

		nameMap = new HashMap<>();

		String projectName = getProjectName(project);

		registerFile(resourcesNames, "PROJECT_NAME/etc/PROJECT_NAME.oil",
				getBundleFolder() + "/" + projectName + "/etc/" + projectName
						+ ".oil");

		registerFile(resourcesNames, "PROJECT_NAME/inc/PROJECT_NAME.h", getBundleFolder() + "/" + projectName + "/inc/" + projectName
				+ ".h");
		
		
//		registerFile(resourcesNames, "PROJECT_NAME/src/.readme", getBundleFolder() + "/" + projectName + "/src/.readme");
		registerFile(resourcesNames, "PROJECT_NAME/src/natives_CIAA_NXP.c", getBundleFolder() + "/" + projectName + "/src/natives_CIAA_NXP.c");

		
		if(useAlternativeWorkspace(project)) {
			registerFile(resourcesNames, "PROJECT_NAME/mak/.readme", getBundleFolder() + "/" + projectName + "/mak/.readme");
		}
		else {
			registerFile(resourcesNames, "PROJECT_NAME/mak/Makefile", getBundleFolder() + "/" + projectName + "/mak/Makefile");			
		}
		
		

	}

	private boolean useAlternativeWorkspace(IProject project) {
		return getPreferences(project).getBoolean(HvmForCIAAProperties.USE_ALTERNATIVE_MAKEFILE, HvmForCIAAProperties.USE_ALTERNATIVE_MAKEFILE_DEFAULT);
	}

	protected void registerFile(List<String> resourcesNames,
			String templateLocation, String finalLocation) {
		resourcesNames.add(finalLocation);
		nameMap.put(finalLocation, templateLocation);
	}

	private String getProjectName(IProject project) {
		return getPreferences(project).get(HvmForCIAAProperties.CIAA_PROJECT_NAME,
				HvmForCIAAProperties.CIAA_PROJECT_NAME_DEFAULT);
	}

	public IEclipsePreferences getPreferences(IProject project) {
		IEclipsePreferences pref = this.preferences.get(project);
		if (pref == null) {
			ProjectScope projectScope = new ProjectScope(project);
			pref = projectScope.getNode(getPluginId());
			;
			this.preferences.put(project, pref);
		}
		return pref;
	}

	protected String getPluginId() {
		return Activator.PLUGIN_ID;
	}

	@Override
	public InputStream openStream(IProject project, String resourceName,
			PrintStream out) {

		// TODO REFACTORME: If openStream is invoked before defineResources, it
		// is necesary initialize nameMap
		if (nameMap == null) {
			this.defineResources(project, out, new ArrayList<String>());
		}

		String template = this.nameMap.get(resourceName);
		Bundle bundle = Platform.getBundle(this.getPluginId());
		URL resource = bundle.getResource("resources/" + template);
		try {
			return resource.openStream();
		} catch (IOException e) {
			out.println("No se pudo abrir " + resourceName + "."
					+ e.getMessage());
			throw new RuntimeException(e);
		}
	}

	protected String getBundleFolder() {
		return Activator.FOLDER;
	}

}
