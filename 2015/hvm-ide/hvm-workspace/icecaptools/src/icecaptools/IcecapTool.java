package icecaptools;

import org.eclipse.jdt.core.IJavaProject;

import icecaptools.compiler.IcecapCodeFormatter;
import icecaptools.compiler.IcecapSourceCodeLinker;

public interface IcecapTool {
    HVMProperties getProperties() throws Exception;
    IcecapCodeFormatter getCodeFormatter();
    IcecapSourceCodeLinker getSourceCodeLinker();
    IJavaProject getProjectResource();
}
