package icecapspluginlib;


import org.eclipse.core.resources.IProject;

public abstract class AbstractFileWithAlternativeColaborator extends AbstractFileColaborator {

	private boolean useAlternativeFile;


	@Override
	protected void readConfig(IProject project) {
		super.readConfig(project);
		useAlternativeFile = useAlternativeFile();
	}
	

	protected boolean mustProcess(IProject project, String file) {
		return !useAlternativeFile && super.mustProcess(project, file);
	}

	protected boolean useAlternativeFile() {
		return getPreferences()
				.getBoolean(
						useAlternativeFileProperty(),
						useAlternativeFileDefault());
	}

	protected abstract boolean useAlternativeFileDefault();

	protected abstract String useAlternativeFileProperty();


}
