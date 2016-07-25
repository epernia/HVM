package hvmforciaa;

import org.eclipse.core.resources.IProject;
import org.eclipse.core.resources.ProjectScope;

import hvmforciaa.config.HvmForCIAAProperties;
import icecapspluginlib.AbstractNativeMethodGenerator;

public class CiaaNativeMethodGenerator extends AbstractNativeMethodGenerator {

	private String ciaaProjectName;

	@Override
	protected String getFolderName(IProject project) {
		if(ciaaProjectName == null) {
			ciaaProjectName = new ProjectScope(project).getNode(Activator.PLUGIN_ID).get(HvmForCIAAProperties.CIAA_PROJECT_NAME, HvmForCIAAProperties.CIAA_PROJECT_NAME_DEFAULT);
		}
		
		return Activator.FOLDER + "/" + ciaaProjectName + "/src";
	}
	

}
