package icecaptools;

import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.PrintStream;
import java.net.URI;
import java.net.URL;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;

import org.eclipse.core.runtime.FileLocator;
import org.eclipse.core.runtime.Platform;
import org.osgi.framework.Bundle;

public class PluginResourceManager extends ResourceManager {

	private String pluginName;
	private Map<String, String> alias;

	public PluginResourceManager(String pluginName, String[] resources, Map<String, String> alias) {
		this.pluginName = pluginName;
		this.setResourcesToLoad(resources);
		this.alias = alias;
	}

	public PluginResourceManager() {
		this.pluginName = Activator.PLUGIN_ID;
		this.alias = new HashMap<>();
	}

	@Override
	protected void setResourcesToLoad(String[] resources) {
		List<String> list = new ArrayList<String>();

		for (String res : resources) {
			Bundle bundle = Platform.getBundle(pluginName);
			addFiles(list, res, bundle);
		}
		
		String[] processedResources = new String[list.size()];
		for(int i = 0; i<list.size();i++){
			processedResources[i] = list.get(i);
		}

		super.setResourcesToLoad(processedResources);
	}

	private void addFiles(List<String> list, String res, Bundle bundle) {
		URL resource = null;
		try {
			resource = bundle.getResource("resources/" + res);
			resource = FileLocator.resolve(resource);
			URI resolvedUri = new URI(resource.getProtocol(), resource.getPath(), null);
			File file = new File(resolvedUri);
			
			if (file.isFile()) {
				list.add(res);
			} else {
				for (String f : file.list()) {
					addFiles(list, res + "/" + f, bundle);
				}
			}
		} catch (Exception e) {
			System.err.println("Problem with: " + res + " url: " + resource);
			throw new RuntimeException(e);
		}
		

	}

	public class PluginResourceIterator implements Iterator<StreamResource> {
		private int top;
		private Bundle bundle;
		private PrintStream out;

		public PluginResourceIterator(PrintStream out) {
			bundle = Platform.getBundle(pluginName);
			this.out = out;
			if (bundle == null) {
				top = getResourcesToLoad().length;
			} else {
				top = 0;
			}
		}

		@Override
		public boolean hasNext() {
			return top < getResourcesToLoad().length;
		}

		@Override
		public StreamResource next() {
			String resourceName = getResourcesToLoad()[top++];
			URL resource = bundle.getResource("resources/" + resourceName);

			InputStream stream;
			try {
				resource = FileLocator.resolve(resource);
				URI resolvedUri = new URI(resource.getProtocol(), resource.getPath(), null);
				File file = new File(resolvedUri);
				stream = new FileInputStream(file);//resource.openStream();
				StreamResource streamResource = buildStreamResource(stream, resourceName);
				return streamResource;
			} catch (Exception e) {
				e.printStackTrace(out);
			}
			return null;
		}

		
		@Override
		public void remove() {
		}
	}

	@Override
	public Iterator<StreamResource> getResources(PrintStream out) {
		return new PluginResourceIterator(out);
	}

	@Override
	public StreamResource getResource(PrintStream out, String resourceName) {
		Bundle bundle = Platform.getBundle(this.pluginName);
		URL resource = bundle.getResource("resources/" + resourceName);
		InputStream stream;
		try {
			stream = resource.openStream();
			StreamResource streamResource = buildStreamResource(stream,resourceName);
			return streamResource;
		} catch (IOException e) {
			e.printStackTrace(out);
		}
		return null;
	}

	private String getFinalResourceName(String resourceName) {
		String alias = this.alias.get(resourceName);
		return alias != null ? alias : resourceName; 
	}
	
	private StreamResource buildStreamResource(InputStream stream,
			String resourceName) {
		return new StreamResource(stream,
				getFinalResourceName(resourceName));
	}

}
