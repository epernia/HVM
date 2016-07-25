package icecaptools;

public interface IcecapProgressMonitor {
    public void worked(String string);
    
    public boolean isCanceled();
}
