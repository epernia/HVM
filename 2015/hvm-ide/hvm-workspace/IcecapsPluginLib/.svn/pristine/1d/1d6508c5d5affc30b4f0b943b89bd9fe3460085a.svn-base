package icecapspluginlib;

import java.io.IOException;
import java.io.OutputStream;

import org.eclipse.core.resources.IProject;

import extensions.ArchitectureDependentCodeGenerator;

public abstract class AbstractArmCortexMOsTypes implements ArchitectureDependentCodeGenerator {

	/**
	 * Return token for #if defined
	 * @return
	 */
	protected abstract String getArchToken();
	
	@Override
	public void tokenDetected(IProject project, String file, OutputStream stream)
			throws IOException {
		if (file.equals("ostypes.h")) {
			stream.write(("\n#if defined(" + getArchToken() + ")\n").getBytes());
			stream.write("#undef PACKED\n".getBytes());
			stream.write("#define PACKED\n".getBytes());
			stream.write("#define DATAMEM __attribute__ ((section (\".data\")))\n"
					.getBytes());
			stream.write("#define PROGMEM\n".getBytes());
			stream.write("#define RANGE\n".getBytes());
			stream.write("#define pgm_read_byte(x) *((unsigned char*)x)\n"
					.getBytes());
			stream.write("#define pgm_read_word(x) *((unsigned short*)x)\n"
					.getBytes());
			stream.write("#define pgm_read_pointer(x, typeofx) *((typeofx)x)\n"
					.getBytes());
			stream.write("#define pgm_read_dword(x) pgm_read_pointer(x, uint32*)\n"
					.getBytes());
			stream.write("typedef int int32;\n".getBytes());
			stream.write("typedef unsigned int uint32;\n".getBytes());
			stream.write("typedef unsigned int pointer;\n".getBytes());
			stream.write("#endif\n".getBytes());

		}

	}

	@Override
	public String token() {
		return "/* Insert architecture dependent code here */";
	}

}
