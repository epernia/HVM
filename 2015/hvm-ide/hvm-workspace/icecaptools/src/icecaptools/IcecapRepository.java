package icecaptools;

import java.util.HashMap;

import org.apache.bcel.classfile.JavaClass;
import org.apache.bcel.util.ClassPath;
import org.apache.bcel.util.Repository;
import org.apache.bcel.util.SyntheticRepository;

public class IcecapRepository implements Repository {

    private static final long serialVersionUID = 1L;
    
    private org.apache.bcel.util.Repository delegate;
    
    private HashMap<String, JavaClass> cache;
    
    public IcecapRepository(SyntheticRepository delegate) {
        this.delegate = delegate;
        cache = new HashMap<String, JavaClass>();
    }

    public void storeClass(JavaClass clazz) {
        delegate.storeClass(clazz);
    }

    public void removeClass(JavaClass clazz) {
        delegate.removeClass(clazz);
    }

    public JavaClass findClass(String className) {
        return delegate.findClass(className);
    }

    public JavaClass loadClass(String className) throws ClassNotFoundException {
        if (cache.containsKey(className))
        {
            return cache.get(className);
        }
        
        if (!JavaArrayClass.isArrayClass(className))
        {
            return delegate.loadClass(className);
        }
        else
        {
            String elementClassName = className;
            int dimension = 0;
            while (JavaArrayClass.isArrayClass(elementClassName)) {
                elementClassName = JavaArrayClass.getElementType(elementClassName);
                dimension++;
            }
            if (JavaArrayClass.isReferenceClass(elementClassName)) {
                elementClassName = JavaArrayClass.getReferredType(elementClassName);
                JavaClass elementType = loadClass(elementClassName);
                JavaClass clazz = new JavaArrayClass(className, elementType, dimension);
                cache.put(className, clazz);
                return clazz;
            }
            else
            {
                elementClassName = "java/lang/Object";
                JavaClass elementType = delegate.loadClass(elementClassName);
                JavaArrayClass clazz = new JavaArrayClass(className, elementType, dimension);
                clazz.setIsBasicType();
                cache.put(className, clazz);
                return clazz;
            }
        }
    }

    @SuppressWarnings("rawtypes")
    public JavaClass loadClass(Class clazz) throws ClassNotFoundException {
        return delegate.loadClass(clazz);
    }

    public void clear() {
        delegate.clear();
    }

    public ClassPath getClassPath() {
        return delegate.getClassPath();
    }

}
