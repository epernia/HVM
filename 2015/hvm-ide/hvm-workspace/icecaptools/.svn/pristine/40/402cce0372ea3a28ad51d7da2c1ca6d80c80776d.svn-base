package icecaptools.compiler;

import icecaptools.Activator;
import icecaptools.ConverterJob.IcecapEclipseProgressMonitor;
import icecaptools.IcecapProgressMonitor;
import icecaptools.IcecapTool;
import icecaptools.PluginResourceManager;
import icecaptools.conversion.ConversionConfiguration;
import icecaptools.extensions.ExtensionManager;

import java.io.IOException;
import java.io.OutputStream;
import java.util.ArrayList;
import java.util.List;

import org.apache.bcel.classfile.Method;
import org.eclipse.core.resources.IProject;
import org.eclipse.core.resources.ResourcesPlugin;
import org.eclipse.core.runtime.CoreException;
import org.eclipse.core.runtime.IConfigurationElement;
import org.eclipse.core.runtime.IExtensionPoint;
import org.eclipse.core.runtime.IPath;
import org.eclipse.core.runtime.IProgressMonitor;
import org.eclipse.core.runtime.NullProgressMonitor;
import org.eclipse.core.runtime.Path;
import org.eclipse.core.runtime.Platform;
import org.eclipse.ui.actions.WorkspaceAction;

import com.oracle.xmlns.internal.webservices.jaxws_databinding.JavaMethod;

import extensions.ArchitectureDependentCodeGenerator;

public class ArchitectureDependentCodeDetector extends ExtensionManager<ArchitectureDependentCodeGenerator>{

	private String currentFile;
	private OutputStream stream;
	int counter;
	private List<TokenDetecter> detecters = new ArrayList<>();
	private IProject project;

	public ArchitectureDependentCodeDetector(IProject project) {
		super();
		this.project = project;
		for(ArchitectureDependentCodeGenerator g : this.getExtensions()) {
			this.detecters.add(new TokenDetecter(g));
		}
	}

	public void fileStart(String file, OutputStream stream) {
		currentFile = file;
		this.stream = stream;
		for(TokenDetecter detecter : this.detecters) {
			detecter.counter = 0;
		}
	}

	public void newRead(char character) {
		for(TokenDetecter detecter : this.detecters) {
			detecter.newRead(character);
		}
	}

	@Override
	protected String getCodeGeneratorExtensionPoint() {
		return Activator.PLUGIN_ID
		+ ".ArchitectureDependentCodeGenerator";
	}

	@Override
	protected String getCodeGeneratorExtensionElement() {
		return "class";
	}
	
	
	private class TokenDetecter {
		private ArchitectureDependentCodeGenerator extension;
		private int counter;
		private String token ;

		private TokenDetecter(ArchitectureDependentCodeGenerator extension) {
			this.extension = extension;
			this.token = extension.token();
		}

		public void newRead(char character) {
			counter = token.charAt(counter) == character ? counter + 1 : 0;
			if (counter == token.length()) {
				dispatchTokenDetectedEvent();
				counter = 0;
			}			
		}
		
		private void dispatchTokenDetectedEvent() {
				try {
					extension.tokenDetected(project, currentFile, stream);
				} catch (IOException e) {
					throw new RuntimeException(e);
				}
		}

		
	}
}
