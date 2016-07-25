package extensions;

import java.io.IOException;
import java.io.OutputStream;

import org.eclipse.core.resources.IProject;


public interface ArchitectureDependentCodeGenerator {

	public void tokenDetected(IProject project, 
								String file,
								OutputStream Stream) throws IOException;
	public String token();

}
