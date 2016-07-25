package icecaptools.views;

import icecaptools.MethodOrFieldDesc;

import java.util.Arrays;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map.Entry;
import java.util.Set;

public class UsedClasses {

    private static class ClassesComparator implements Comparator<UsedClass> {
        @Override
        public int compare(UsedClass arg0, UsedClass arg1) {
            return arg0.getClassName().compareTo(arg1.getClassName());
        }
    }

    private HashMap<String, UsedClass> usedClasses;
    
    public UsedClasses()
    {
        usedClasses = new HashMap<String, UsedClass>();
    }
    
    public void add(String className, String targetMethodName, String targetMethodSignature) {
        UsedClass usedClass = usedClasses.get(className);
        if (usedClass == null)
        {
            usedClass = new UsedClass(className);
            usedClasses.put(className, usedClass);
        }
        usedClass.add(targetMethodName, targetMethodSignature);
    }

    public Object[] toArray() {
        UsedClass[] classes = new UsedClass[usedClasses.size()];
        Set<Entry<String, UsedClass>> entries = usedClasses.entrySet();
        Iterator<Entry<String, UsedClass>> iterator = entries.iterator();
        int i = 0;
        while (iterator.hasNext())
        {
            Entry<String, UsedClass> next = iterator.next();
            classes[i++] = next.getValue();
        }
        Arrays.sort(classes, new ClassesComparator());
        return classes;
    }

    public UsedClass getUsedClass(MethodOrFieldDesc element) {
        return usedClasses.get(element.getClassName());
    }

    public int getSize() {
        return usedClasses.size();
    }
}
