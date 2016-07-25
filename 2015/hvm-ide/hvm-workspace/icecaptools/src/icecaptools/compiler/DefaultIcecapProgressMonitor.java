package icecaptools.compiler;

import icecaptools.IcecapProgressMonitor;

public class DefaultIcecapProgressMonitor implements IcecapProgressMonitor {

    @Override
    public void worked(String item) {
        System.out.println(item);
    }

    @Override
    public boolean isCanceled() {
        return false;
    }
 
}
