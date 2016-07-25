package icecapspluginlib;


import java.io.IOException;
import java.io.OutputStream;

import org.eclipse.core.resources.IProject;
import org.eclipse.core.resources.ProjectScope;
import org.eclipse.core.runtime.preferences.IEclipsePreferences;

import extensions.ArchitectureDependentCodeGenerator;

public abstract class AbstractFileColaborator implements
		ArchitectureDependentCodeGenerator {

	private IEclipsePreferences node;
	private String value;

	@Override
	public void tokenDetected(IProject project, String file, OutputStream stream)
			throws IOException {

		if (mustProcess(project, file)) {
			process(project, file, stream);
		}
	}

	protected void process(IProject project, String file, OutputStream stream) throws IOException {
		String code = buildCode();
		stream.write(code.getBytes(), 0, code.getBytes().length);
	}
	
	protected String buildCode() {
		return this.getValue();
	}

	protected boolean mustProcess(IProject project, String file) {
		if (node == null) {
			readConfig(project);
		}

		return isForFile(file);
	}

	protected void readConfig(IProject project) {
		this.setPreferences(new ProjectScope(project).getNode(getPluginId()));
		this.setValue(readValue());
	}
	
	public String getValue() {
		return value;
	}

	protected void setPreferences(IEclipsePreferences node) {
		this.node = node;
	}
	
	protected void setValue(String value) {
		this.value = value;
	}
	

	protected boolean isForFile(String file) {
		return file.contains(fileName());
	}

	protected String fileName() {
		return null;
	};
	
	protected abstract String getPluginId();

	
	protected String readValue() {
		return getPreferences().get(this.preference(), this.defaultValue());
	}
	
	protected IEclipsePreferences getPreferences() {
		return this.node;
	}

	@Override
	public abstract String token();

	public abstract String preference();

	public abstract String defaultValue();

}
