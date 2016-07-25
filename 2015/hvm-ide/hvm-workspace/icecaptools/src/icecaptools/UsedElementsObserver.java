package icecaptools;

import icecaptools.compiler.FieldInfo;
import icecaptools.compiler.utils.MethodMap;

import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Set;

public class UsedElementsObserver implements AnalysisObserver {
    private MethodMap<MethodOrFieldDesc> usedClasses;
    private HashSet<String> usedInterfaces;
    private HashSet<MethodOrFieldDesc> usedMethodDescriptors;
    private HashSet<MethodOrFieldDesc> usedClassFields;
    private IcecapProgressMonitor progressMonitor;
    private HashSet<String> lockingTypes;
    private ArrayList<String> classInitializationSequence;
    private HashMap<String, NativeFieldInfo> nativeFields;
    private boolean[] usedByteCodes;
    private Set<MethodOrFieldDesc> nativeMethods; 

    private ArrayList<MethodOrFieldDesc> sortedMethodDescriptors;
    private int maxVTableSize;

    public UsedElementsObserver() {
        usedClasses = new MethodMap<MethodOrFieldDesc>();
        usedInterfaces = new HashSet<String>();
        usedMethodDescriptors = new HashSet<MethodOrFieldDesc>();
        usedClassFields = new HashSet<MethodOrFieldDesc>();
        lockingTypes = new HashSet<String>();
        usedByteCodes = new boolean[255];
        nativeFields = new HashMap<String, NativeFieldInfo>();
        sortedMethodDescriptors = null;
        classInitializationSequence = new ArrayList<String>();
        nativeMethods = new HashSet<MethodOrFieldDesc>();
    }

    @Override
    public void classUsed(String newType) {
        if (!usedClasses.contains(newType)) {
            usedClasses.put(newType);
        }
    }

    @Override
    public void methodCodeUsed(String className, String targetMethodName, String targetMethodSignature, boolean report) throws CanceledByUserException {
       if (!usedClasses.contains(className, targetMethodName, targetMethodSignature)) {
            MethodOrFieldDesc methodDesc = new MethodOrFieldDesc(className, targetMethodName, targetMethodSignature);

            usedMethodDescriptors.add(methodDesc);
            usedClasses.put(className, targetMethodName, targetMethodSignature, methodDesc);
            sortedMethodDescriptors = null;
            if (report) {
                progressMonitor.worked(className + ": " + targetMethodName);
            }
            if (progressMonitor.isCanceled()) {
                throw new CanceledByUserException();
            }
        }
    }


	public Iterator<String> getUsedClasses() {
        return usedClasses.getClasses();
    }

    public boolean isMethodUsed(String className, String methodName, String methodSignature) {
        return usedClasses.contains(className, methodName, methodSignature);
    }

    public Iterator<MethodOrFieldDesc> getUsedMethods() {
        if (sortedMethodDescriptors == null) {
            sortedMethodDescriptors = new ArrayList<MethodOrFieldDesc>(usedMethodDescriptors);
            Collections.sort(sortedMethodDescriptors);
        }
        return sortedMethodDescriptors.iterator();
    }

    @Override
    public void interfaceUsed(String className) {

        usedInterfaces.add(className);
    }

    @Override
    public boolean isInterfaceUsed(String className) {

        return usedInterfaces.contains(className);
    }

    @Override
    public void setProgressMonitor(IcecapProgressMonitor progressMonitor) {
        this.progressMonitor = progressMonitor;
    }

    @Override
    public void classFieldUsed(String className, String fieldName) {

        if (!isClassFieldUsed(className, fieldName)) {
            usedClassFields.add(new MethodOrFieldDesc(className, fieldName, ""));
        }
    }

    @Override
    public boolean isClassFieldUsed(String className, String fieldName) {

        for (MethodOrFieldDesc m : usedClassFields) {
            if (m.getName().equals(fieldName) && m.getSignature().equals("") && m.getClassName().equals(className)) {
                return true;
            }
        }
        return false;
    }

    @Override
    public boolean isClassUsed(String className) {

        if (this.usedClasses.contains(className)) {
            return true;
        } else {
            return false;
        }
    }

    @Override
    public void registerLockingTypes(ArrayList<String> types) {
        for (String type : types) {
            if (!lockingTypes.contains(type)) {
                this.lockingTypes.add(type);
            }
        }
    }

    @Override
    public boolean isLockingType(String className) {
        while (!"java.lang.Object".equals(className)) {
            if (this.lockingTypes.contains(className)) {
                return true;
            }
            className = ClassfileUtils.getSuperClassName(className);
        }
        return false;
    }

    @Override
    public void registerLockingType(String type) {
        this.lockingTypes.add(type);
    }

    @Override
    public void byteCodeUsed(byte opCode) {
        int index = ((int) opCode) & 0xff;
        this.usedByteCodes[index] = true;
    }

    @Override
    public boolean isBytecodeUsed(int i) {
        return usedByteCodes[i];
    }

    protected String getNativeFieldKey(String containingClass, int fieldOffset) {
        StringBuffer key = new StringBuffer();
        key.append(containingClass);
        key.append(fieldOffset);
        return key.toString();
    }

    @Override
    public void registerNativeField(String containingClass, int fieldOffset, FieldInfo field, IcecapCVar cvar) {
        String key = getNativeFieldKey(containingClass, fieldOffset);
        nativeFields.put(key.toString(), new NativeFieldInfo(field, cvar));
    }

    @Override
    public NativeFieldInfo isNativeField(String containingClass, int fieldOffset) {
        String key = getNativeFieldKey(containingClass, fieldOffset);
        return nativeFields.get(key);
    }

    @Override
    public void classInitializerUsed(String className) {
        if (!classInitializationSequence.contains(className)) {
            classInitializationSequence.add(className);
        }
    }

    @Override
    public Iterator<String> getUsedClassInitializers() {
        return classInitializationSequence.iterator();
    }

    @Override
    public Iterator<MethodOrFieldDesc> getUsedMethods(String nextClass) {
        return usedClasses.getMethods(nextClass);
    }

    @Override
    public void reportVtableSize(int s) {
        if (maxVTableSize < s)
        {
            maxVTableSize = s;
        }
    }

    @Override
    public int getMaxVtableSize() {
        return maxVTableSize;
    }
}