package icecaptools;

import icecaptools.compiler.FieldInfo;

import java.util.ArrayList;
import java.util.Iterator;

public interface AnalysisObserver extends MethodObserver {

    void classUsed(String newType);

    void classFieldUsed(String className, String fieldName);
    
    void interfaceUsed(String className);

    void byteCodeUsed(byte opCode);
    
    void reportVtableSize(int s);
    
    int getMaxVtableSize();
    
    boolean isMethodUsed(String className, String targetMethodName, String targetMethodSignature);

    boolean isClassFieldUsed(String className, String fieldName);
    
    boolean isInterfaceUsed(String className);

    Iterator<MethodOrFieldDesc> getUsedMethods();

    Iterator<MethodOrFieldDesc> getUsedMethods(String nextClass);

    Iterator<String> getUsedClasses();

    void setProgressMonitor(IcecapProgressMonitor progressMonitor);

    boolean isClassUsed(String className);
    
    public void registerLockingTypes(ArrayList<String> types);
    
    public void registerLockingType(String type);

    boolean isLockingType(String className);

    boolean isBytecodeUsed(int i);

    void registerNativeField(String containingClass, int fieldOffset, FieldInfo field, IcecapCVar cvar);

    NativeFieldInfo isNativeField(String containingClass, int foffset);

    void classInitializerUsed(String className);

    Iterator<String> getUsedClassInitializers();
}
