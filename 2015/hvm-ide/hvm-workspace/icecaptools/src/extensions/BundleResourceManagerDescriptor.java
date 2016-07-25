package extensions;

import java.util.Map;

import org.eclipse.core.resources.IProject;


public interface BundleResourceManagerDescriptor {

	public String getBundleName();

	public String[] getResourceNames(IProject project);

	/**
	 * Let change the final resource name.
	 * @param project 
	 * @return map from resourceName (returned by getResourceNames method) to final resource name
	 * 
	 * If getResourceName return a folder name to include children, this alias are not supported. You must
	 * define file-to-file and alias to work. Example: getResourceName return "folder/file/" and create alias 
	 * "folder/file"-> "aliasFolder/file". 
	 * You cannot define getResourceName with "folder" and alias "folder"->"folderAlias".
	 * 
	 * If you wish resolve this limitation, you must modify PluginResourceManager.setResourcesToLoad() method
	 * 
	 * 
	 */
	public Map<String, String> getAlias(IProject project);

}