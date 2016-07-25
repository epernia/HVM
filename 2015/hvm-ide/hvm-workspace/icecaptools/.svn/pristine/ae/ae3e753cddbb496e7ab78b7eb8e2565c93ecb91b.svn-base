package test.icecaptools.compiler;

import java.util.ArrayList;
import java.util.Iterator;

import icecaptools.conversion.ConversionConfiguration;

public  class TestConversionConfiguration extends ConversionConfiguration
{
    ArrayList<String> includes;
    
    public TestConversionConfiguration()
    {
        includes = new ArrayList<String>();
        includes.add("test.icecapvm.minitests.TestReflectForName$Number");
    }
    
    @Override
    public Iterator<String> getForcedIncludes() {
        
        if (inputClass.contains("TestReflectForName"))
        {
            return includes.iterator();
        }
        else
        {
            return super.getForcedIncludes();
        }
    }    
}