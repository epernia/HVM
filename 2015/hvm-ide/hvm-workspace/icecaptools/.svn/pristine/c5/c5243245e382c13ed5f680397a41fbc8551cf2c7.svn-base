package extensions;

import org.apache.bcel.classfile.Method;
import org.eclipse.core.resources.IProject;

public interface NativeMethodCodeGenerator {

	public void startNativeFunctionAnalysis(IProject project);

	public void newUserNativeFunction(int methodNumber,
										String uniqueMethodIdentifier,
										Method method);

	public void endNativeFunctionAnalysis();

}
