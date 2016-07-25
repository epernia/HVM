package icecaptools;

import java.io.InputStream;
import java.io.PrintStream;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Set;

import org.eclipse.core.resources.IProject;

public class ProjectResourceManager extends ResourceManager {

	private IProject project;
	private Map<String,String> resourcesMap;
	
	public ProjectResourceManager(IProject project, Map<String, String> resources) {
		this.project = project;
		Set<String> keySet = resources.keySet();
		String[] resourcesToLoad = new String[keySet.size()];
		int i = 0;
		for(String s : keySet) {
			resourcesToLoad[i++] = s;
		}
		this.setResourcesToLoad(resourcesToLoad);
		this.resourcesMap = resources;
	}
	
	
	@Override
	public Iterator<StreamResource> getResources(PrintStream out) {
		return new ResourceManagerIterator(out);
	}

	@Override
	public StreamResource getResource(PrintStream out, String resourceName) {
	        InputStream stream;
	        try {
	            stream = this.project.getFile(resourceName).getContents();
	            StreamResource streamResource = new StreamResource(stream, resourcesMap.get(resourceName));
	            return streamResource;
	        } catch (Exception e) {
	            e.printStackTrace(out);
	        }
	        return null;
	    
	}

	private class ResourceManagerIterator implements Iterator<StreamResource> {
		Iterator<String> inner;
		private PrintStream out;
		private ResourceManagerIterator(PrintStream out) {
			this.out = out;
			List<String> list = new ArrayList<String>();
			for(String s : getResourcesToLoad()) {
				list.add(s);
			}
			inner = list.iterator();
		}
		
		@Override
		public boolean hasNext() {
			return inner.hasNext();
		}

		@Override
		public StreamResource next() {
			return getResource(out,inner.next());
		}
		
	}

}
