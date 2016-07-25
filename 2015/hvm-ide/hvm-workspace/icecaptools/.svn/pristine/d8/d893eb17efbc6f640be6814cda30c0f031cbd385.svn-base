package icecaptools;

import java.io.PrintStream;
import java.util.Iterator;

public class DefaultResourceManager extends ResourceManager {

    private static class EmptyIterator implements Iterator<StreamResource>
    {
        @Override
        public boolean hasNext() {
            return false;
        }

        @Override
        public StreamResource next() {
            return null;
        }

        @Override
        public void remove() {
        }        
    }
    
    @Override
    public Iterator<StreamResource> getResources(PrintStream out) {
        return new EmptyIterator();
    }

    @Override
    public StreamResource getResource(PrintStream out, String resourceName) {
        return null;
    }

}
