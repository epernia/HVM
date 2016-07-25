package icecaptools.compiler;

import icecaptools.Activator;
import icecaptools.extensions.ExtensionManager;

import org.apache.bcel.classfile.Method;
import org.eclipse.core.resources.IProject;

import extensions.NativeMethodCodeGenerator;

public class NativeMethodDetector extends ExtensionManager<NativeMethodCodeGenerator> {

	public void startAnalysis(IProject project) {
		for (NativeMethodCodeGenerator extension : this.getExtensions()) {
			extension.startNativeFunctionAnalysis(project);
		}
	}
	
	public void endAnalysis() {
		for (NativeMethodCodeGenerator extension : this.getExtensions()) {
			extension.endNativeFunctionAnalysis();
		}
	}

	public void newUserDefinedNativeMehtod(int methodNumber,
			String uniqueMethodIdentifier, Method javaMethod) {

		for (NativeMethodCodeGenerator extension : this.getExtensions()) {
			extension.newUserNativeFunction(methodNumber,
					uniqueMethodIdentifier, javaMethod);
		}

	}

	@Override
	protected String getCodeGeneratorExtensionPoint() {
		return Activator.PLUGIN_ID + ".NativeMethodCodeGenerator";
	}

	@Override
	protected String getCodeGeneratorExtensionElement() {
		return "class";
	}


}

