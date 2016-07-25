package hvmforciaa.resourcemanagers;

import hvmforciaa.Activator;
import hvmforciaa.config.HvmForCIAAProperties;
import icecapspluginlib.ArmCortexMPluginResourceManagerDescriptor;

import java.util.Map;
import java.util.Map.Entry;

import org.eclipse.core.resources.IProject;
import org.eclipse.core.resources.ProjectScope;

public class CIAAArmResourceManagerDescriptor extends
		ArmCortexMPluginResourceManagerDescriptor {

	private String ciaaProjectName;
	
	
	protected String getCiaaProjectName(IProject project) {
		if(ciaaProjectName == null) {
		//Esta linea quedó repetida en mil lados.
			ciaaProjectName = new ProjectScope(project).getNode(Activator.PLUGIN_ID).get(HvmForCIAAProperties.CIAA_PROJECT_NAME, HvmForCIAAProperties.CIAA_PROJECT_NAME_DEFAULT);
		}
		return ciaaProjectName;
	}
	
	protected String getSrcFolder(IProject project) {
		return Activator.FOLDER + "/" + getCiaaProjectName(project) + "/src";
	}

	protected String getIncFolder(IProject project) {
		return Activator.FOLDER + "/" + getCiaaProjectName(project) + "/inc";
	}

	
	
	@Override
	protected String getBoardFolder(IProject project) {
		return getSrcFolder(project);
	}
	
	
	@Override
	public Map<String, String> getAlias(IProject project) {
		Map<String, String> alias = super.getAlias(project);
		for(Entry<String, String> entry : alias.entrySet()) {
			if(entry.getKey().endsWith(".h")) {
				entry.setValue(entry.getValue().replace("/src/", "/inc/"));
			}
	/*		//TODO No se por que no logro hacer que el .s compile (linkee) en el src
			if(entry.getKey().endsWith(".s")) {
				entry.setValue(entry.getValue().replace("/src/", "/"));				
			}*/
		}
		return alias;
	}

}
