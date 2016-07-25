package hvmforciaa.codegenerator;

import hvmforciaa.Activator;
import icecapspluginlib.AbstractArmCortexMOsTypes;

public class CiaaOsTypes extends AbstractArmCortexMOsTypes {

	@Override
	protected String getArchToken() {
		return Activator.ARCH_TOKEN;
	}

}
