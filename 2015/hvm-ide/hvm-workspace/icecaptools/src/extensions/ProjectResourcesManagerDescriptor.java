package extensions;

import java.util.Map;

import org.eclipse.core.resources.IProject;

public interface ProjectResourcesManagerDescriptor {

	/**	 
	 * @param project
	 * @return A table with source fileName and target fileName. 
	 */
	public Map<String, String> getResourceNames(IProject project);
}
