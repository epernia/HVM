package hvmforstm32;

import icecapspluginlib.AbstractArmCortexMOsTypes;

import java.io.IOException;
import java.io.OutputStream;

import org.eclipse.core.resources.IProject;

import extensions.ArchitectureDependentCodeGenerator;

public class STMOsTypes extends AbstractArmCortexMOsTypes {

	@Override
	protected String getArchToken() {
		return Activator.ARCHTOKEN;
	}
}
