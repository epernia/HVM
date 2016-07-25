package extensions;

import java.io.InputStream;
import java.io.PrintStream;
import java.util.List;

import org.eclipse.core.resources.IProject;

public interface ResourceManager {
	 
	/**
	 * Add to resourcesNames all resources names
	 * @param project
	 * @param out
	 * @param resourcesNames
	 */
	public void defineResources(IProject project, PrintStream out, List<String> resourcesNames);
	
	public InputStream openStream(IProject project, String resourceName, PrintStream out);
}
 