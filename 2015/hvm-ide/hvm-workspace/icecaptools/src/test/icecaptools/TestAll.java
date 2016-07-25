package test.icecaptools;

import icecaptools.CompilationSequence;
import icecaptools.MethodOrFieldDesc;
import icecaptools.TestResourceManager;
import icecaptools.compiler.DefaultIcecapCodeFormatter;
import icecaptools.compiler.DefaultIcecapProgressMonitor;
import icecaptools.compiler.DefaultIcecapSourceCodeLinker;
import icecaptools.compiler.DefaultMethodObserver;
import icecaptools.compiler.ICompilationRegistry;
import icecaptools.conversion.ConversionConfiguration;
import icecaptools.launching.ShellCommand;

import java.io.File;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.StringTokenizer;

import org.eclipse.core.runtime.IProgressMonitor;

import test.icecaptools.compiler.TestConversionConfiguration;

/*
 * To run the automated tests make sure that gcc is installed and can be 
 * started from a normal command prompt.
 * 
 * If you run cygwin, include the path to gcc in your path environment 
 * variable (usually C:\cygwin\bin). Test that it works by starting gcc from
 * a CMD prompt (not a cygwin prompt). After changing environment variables, it may
 * be necessary to restart eclipse.
 * 
 * Then select your gcc compile command from one of the predefined commands below 
 * (look at the beginning of the 'compileAndExecute' method
 * 
 */
public class TestAll {

    private static String icecapvmSrcPath;
    
    public static void main(String[] args) throws Throwable {
        File testsDirectory;
        String cwd = new File(".").getAbsolutePath();
        StringTokenizer strt = new StringTokenizer(cwd, File.separatorChar + "");
        StringBuffer path = new StringBuffer();
        path.append(File.separatorChar);
        String nextToken = strt.nextToken();

        while (strt.hasMoreTokens()) {
            path.append(nextToken);
            path.append(File.separatorChar);
            nextToken = strt.nextToken();
        }
        
        icecapvmSrcPath = path.toString().replace("icecaptools", "icecapvm");
        icecapvmSrcPath =  icecapvmSrcPath + "src";
        
        String inputFolder = path.toString() + "bin" + path.append(File.separatorChar);
        path.append("src");
        path.append(File.separatorChar);
        path.append("test");
        path.append(File.separatorChar);
        path.append("icecapvm");
        path.append(File.separatorChar);
        path.append("minitests");
        path.append(File.separatorChar);

        StringBuffer outputFolderPath = new StringBuffer(System.getProperty("java.io.tmpdir"));
        outputFolderPath.append(File.separatorChar);
        outputFolderPath.append("hvm");

        File outputFolder = new File(outputFolderPath.toString());
        outputFolder.mkdir();

        File[] files = outputFolder.listFiles();
        for (File file : files) {
            if (file.isDirectory()) {
                File[] loaderFiles = file.listFiles();
                for (File lfile : loaderFiles) {
                    lfile.delete();
                    if (lfile.exists()) {
                        throw new Exception("Cannot delete: " + lfile.getAbsolutePath());
                    }
                }
            }
            file.delete();
            if (file.exists()) {
                throw new Exception("Cannot delete: " + file.getAbsolutePath());
            }
        }

        testsDirectory = new File(path.toString());
        if (testsDirectory.isDirectory()) {
            String[] tests = testsDirectory.list();
            Arrays.sort(tests);

            ArrayList<String> testlist = new ArrayList<String>();
            for (int i = 0; i < tests.length; i++) {
                testlist.add((String) tests[i]);
            }
            
            /*testlist = new ArrayList<String>();
            testlist.add("TestFloat.java");
            testlist.add("TestReturn.java"); 
            testlist.add("ANTTestMethodCall.java");
            testlist.add("TestBug3.java");
            testlist.add("ANTTestInvokeVirtual.java");*/
            
            int testNo = 0;
            for (String test : testlist) {
                if (test.endsWith(".java")) {
                    if (!skipIt(test)) {
                        System.out.println("------------------ " + test + " ------------------");
                        testIt(test, inputFolder, outputFolder, testNo++);
                    }
                }
            }
            System.out.println("------------------ done ------------------");
        }
    }
    
    
    private static String[] skippedClasses = { /*"TestNewFloat.java", "TestCalculator.java",*//*"TestStackScan1.java", "TestReflectClasses2.java", "TestObjectTraversal.java", */ "TestReflectMethod1.java", "TestReflectMethod2.java", "TestLong.java", "TestMiniTests.java", "TestCAS.java", "TestReflectMethod3.java", "TestReflectConstructor.java" /*"TestArrayList.java", "TestHashMap.java", "TestHashSet.java", "TestIntegerCache.java"*/ };
    
    // private static String[] skippedClasses = { /*"TestStackScan1.java", "TestReflectClasses2.java", "TestObjectTraversal.java", */ "TestReflectMethod.java", "TestLong.java", "TestMiniTests.java", "TestCAS.java", "TestCalculator.java", "TestNewFloat.java" /*"TestArrayList.java", "TestHashMap.java", "TestHashSet.java", "TestIntegerCache.java"*/ };

    private static boolean skipIt(String test) {
        for (int i = 0; i < skippedClasses.length; i++) {
            if (test.contains(skippedClasses[i])) {
                return true;
            }
        }
        return false;
    }

    private static class CompileAllRegistry extends TestCompilationRegistry {

        @Override
        public boolean isMethodCompiled(MethodOrFieldDesc mdesc) {
            if (mdesc.getName().contains("main")) {
                return false;
            }
            return true;
        }
    }
    
    private static class TestCompilationRegistry extends DefaultCompilationRegistry
    {

        @Override
        public boolean isMethodExcluded(String clazz, String targetMethodName, String targetMethodSignature) {
            if (clazz.startsWith("java.lang.reflect"))
            {
                return false;
            }
            return super.isMethodExcluded(clazz, targetMethodName, targetMethodSignature);
        }
    }
    
    private static void testIt(String testClass, String inputFolder, File outputFolder, int testNo) throws Throwable {
        ConversionConfiguration config = new TestConversionConfiguration();

        config.setInputSourceFileName(null);
        config.setClassPath(inputFolder);
        config.setInputPackage("test.icecapvm.minitests");
        config.setInputClass(testClass);
        config.setCodeFormatter(new DefaultIcecapCodeFormatter());
        config.setSourceCodeLinker(new DefaultIcecapSourceCodeLinker());

        config.setResourceManager(new TestResourceManager(icecapvmSrcPath));

        ICompilationRegistry cregistry;

        cregistry = new TestCompilationRegistry();

        //cregistry = new CompileAllRegistry();

        CompilationSequence sequencer = new CompilationSequence();

        sequencer.startCompilation(System.out, new DefaultMethodObserver(), config, new DefaultIcecapProgressMonitor(), cregistry, outputFolder.toString(), true);

        compileAndExecute(outputFolder, testClass, testNo);
    }

    private static void compileAndExecute(File outputFolder, String testClass, int testNo) throws Exception {
        String exe = "a" + testNo + ".exe";
        String prefix = "";
        /* for 64 bit Linux */
        String gccCommand = "gcc -Wall -pedantic -Werror -Os -DPC64 -DREF_OFFSET -DPRINTFSUPPORT -DSUPPORTGC -DJAVA_HEAP_SIZE=10240000 -L/usr/lib64 classes.c  icecapvm.c  methodinterpreter.c  methods.c gc.c natives_allOS.c natives_i86.c rom_heap.c allocation_point.c rom_access.c native_scj.c print.c x86_64_interrupt.s -lpthread -lrt -lm -o "  + exe;
       
        /* for 32 bit Linux */
        //String gccCommand = "gcc -Wall -pedantic -Os -DPC32 -DPRINTFSUPPORT -DSUPPORTGC -DJAVA_HEAP_SIZE=10240000 classes.c  icecapvm.c  methodinterpreter.c  methods.c gc.c natives_allOS.c natives_i86.c rom_heap.c allocation_point.c rom_access.c native_scj.c print.c x86_32_interrupt.s -lpthread -lrt -lm -o "  + exe;
       
        /* for 64 bit Windows using cygwin */
        //String gccCommand = "gcc -Wall -pedantic -Werror -Os -DPC64 -DREF_OFFSET -DPRINTFSUPPORT -DSUPPORTGC -DJAVA_HEAP_SIZE=10240000 -L/usr/lib64 classes.c  icecapvm.c  methodinterpreter.c  methods.c gc.c natives_allOS.c natives_i86.c rom_heap.c allocation_point.c rom_access.c native_scj.c print.c x86_64_cygwin_interrupt.s -lpthread -lrt -lm -o " + exe;
        
        /* for 32 bit Windows using cygwin */
         // String gccCommand = "gcc -Wall -pedantic -Os -DPC32 -DPRINTFSUPPORT -DSUPPORTGC -DJAVA_HEAP_SIZE=10240000 classes.c  icecapvm.c  methodinterpreter.c  methods.c gc.c natives_allOS.c natives_i86.c rom_heap.c allocation_point.c rom_access.c native_scj.c print.c x86_32_cygwin_interrupt.s -lpthread -lrt -lm -o " + exe;

        /* Patmos, fails at TestCVar1.java */
        //String gccCommand = "patmos-clang -DPACKED= -Wall -pedantic -Os -DPC32 -DPRINTFSUPPORT -DSUPPORTGC -DJAVA_HEAP_SIZE=1024000 classes.c  icecapvm.c  methodinterpreter.c  methods.c gc.c natives_allOS.c natives_i86.c rom_heap.c allocation_point.c rom_access.c print.c -o "  + exe;
        //prefix = "pasim "; 
                
        String executablePath = outputFolder.getAbsolutePath() + File.separatorChar + exe;
        File executable = new File(executablePath);

        deleteIfExists(outputFolder, exe);

        ShellCommand.executeCommand(gccCommand, System.out, true, outputFolder.getAbsolutePath(), null, 0, new IProgressMonitor() {

            @Override
            public void beginTask(String name, int totalWork) {
            }

            @Override
            public void done() {
            }

            @Override
            public void internalWorked(double work) {

            }

            @Override
            public boolean isCanceled() {
                return false;
            }

            @Override
            public void setCanceled(boolean value) {
            }

            @Override
            public void setTaskName(String name) {
            }

            @Override
            public void subTask(String name) {
            }

            @Override
            public void worked(int work) {
            }
        });
        if (!executable.exists()) {

            throw new Exception("Compilation failed " + executable.getAbsolutePath());
        }

        int returnValue = ShellCommand.executeCommand(prefix + executablePath, System.out, true, outputFolder.getAbsolutePath(), null, 0, new IProgressMonitor() {

            @Override
            public void beginTask(String name, int totalWork) {
            }

            @Override
            public void done() {
            }

            @Override
            public void internalWorked(double work) {

            }

            @Override
            public boolean isCanceled() {
                return false;
            }

            @Override
            public void setCanceled(boolean value) {
            }

            @Override
            public void setTaskName(String name) {
            }

            @Override
            public void subTask(String name) {
            }

            @Override
            public void worked(int work) {
            }
        });
        if (returnValue != 0) {
            throw new Exception("Test failed [" + testClass + "]");
        }
    }

    private static void deleteIfExists(File outputFolder, String name) throws Exception {
        File file = new File(outputFolder.getAbsolutePath() + File.separatorChar + name);
        if (file.exists()) {
            if (!file.delete()) {
                throw new Exception("Unable to delete " + file.getAbsolutePath());
            }
        }

    }
}
