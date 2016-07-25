package icecaptools;

import java.io.PrintStream;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

import org.eclipse.core.resources.IProject;

import extensions.ResourceManager;

public class ResourceManagerAdapter extends icecaptools.ResourceManager {

	private IProject project;
	private ResourceManager inner;
	
	public ResourceManagerAdapter(IProject project,
			extensions.ResourceManager extension) {
	
		this.project = project;
		inner = extension;
	}
	@Override
	public Iterator<StreamResource> getResources(PrintStream out) {
		List<String> resourcesNames = new ArrayList<String>();
		inner.defineResources(project, out, resourcesNames);
		return new ResourceManagerAdapterIterator(out, resourcesNames);
	}
	
	@Override
	public StreamResource getResource(PrintStream out, String resourceName) {
		return new StreamResource(inner.openStream(project, resourceName, out ), resourceName);
	}
	
	private class ResourceManagerAdapterIterator implements Iterator<StreamResource> {

		Iterator<String> resources;
		private PrintStream out;
		
		private ResourceManagerAdapterIterator(PrintStream out, List<String> resourcesNames) {
			this.out = out;
			this.resources = resourcesNames.iterator();
		}
		
		@Override
		public boolean hasNext() {
			return resources.hasNext();
		}
		
		@Override
		public StreamResource next() {
			return getResource(out, resources.next());
		}
		
	}	
}

