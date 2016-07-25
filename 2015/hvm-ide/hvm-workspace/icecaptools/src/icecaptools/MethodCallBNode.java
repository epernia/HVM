package icecaptools;

import java.util.ArrayList;

public abstract class MethodCallBNode extends BNode {
    protected String className;
    protected String methodName;
    protected String methodSig;

    protected ArrayList<String> targetClasses;
    private int numArgs;
    
    private MethodOrFieldDesc calleeDescriptor;
   
    public MethodCallBNode(int address, String className, String methodName, String methodSig, String locationClass, String locationMethod, String locationMethodSignature) {
        super(address, locationClass, locationMethod, locationMethodSignature);
        this.className = className;
        this.methodName = methodName;
        this.methodSig = methodSig;
        targetClasses = new ArrayList<String>();
        numArgs = -1;
    }

    public String getClassName() {
        return className;
    }

    public String getMethodName() {
        return methodName;
    }

    public String getMethodSig() {
        return methodSig;
    }
    
    @Override
    public int extend() throws Exception {
        if (this.rawBytes.length == 3)
        {
            int extendedLength = getExtendedLength();
            byte[] newRawBytes = new byte[extendedLength];

            newRawBytes[0] = this.rawBytes[0];
            
            for (int i = 1; i < this.rawBytes.length; i++)
            {
                newRawBytes[i + 1] = this.rawBytes[i];
            }
            this.rawBytes = newRawBytes;
            return extendedLength - 3;
        }
        else
        {
            return super.extend();
        }
    }
    
    protected int getExtendedLength() {
        return 4;
    }

    @Override
    public void relocateForward(int address, int extension) {
    }

    @Override
    public void relocateBackward(int address, int extension) {
    }
    
    @Override
    public boolean requiresExtension() {
        return false;
    }
    
    @Override
    protected String print() {
        return "call " + className + "." + methodName;
    }

    public void addTarget(String targetClassName) {
        if (!targetClasses.contains(targetClassName))
        {
            targetClasses.add(targetClassName);
        }
    }

    public int getNumberOfTargets() {
        return targetClasses.size();
    }

    public String getTargetClassName() {
        return targetClasses.get(0);
    }

    public void setNumArgs(int numArgs) {
       this.numArgs = numArgs;
    }

    public int getNumArgs() {
        return numArgs;
    }
    
    public void setMethodDescriptor(MethodOrFieldDesc callee) {
        this.calleeDescriptor = callee;
    }

    public MethodOrFieldDesc getMethodDescriptor() {
        return calleeDescriptor;
    }
}
