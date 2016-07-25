/**************************************************************************
 * File name  : MemoryArea.java
 * 
 * This file is part a SCJ Level 0 and Level 1 implementation, 
 * based on SCJ Draft, Version 0.94 25 June 2013.
 *
 * It is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as  
 * published by the Free Software Foundation, either version 3 of the 
 * License, or (at your option) any later version.
 *
 * This SCJ Level 0 and Level 1 implementation is distributed in the hope 
 * that it will be useful, but WITHOUT ANY WARRANTY; without even the  
 * implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  
 * See the GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this SCJ Level 0 and Level 1 implementation.  
 * If not, see <http://www.gnu.org/licenses/>.
 *
 * Copyright 2012 
 * @authors  Anders P. Ravn, Aalborg University, DK
 *           Stephan E. Korsholm and Hans S&oslash;ndergaard, 
 *             VIA University College, DK
 *************************************************************************/

package javax.realtime;

import javax.safetycritical.annotate.Level;
import javax.safetycritical.annotate.SCJAllowed;
import javax.scj.util.Const;

import reflect.ObjectInfo;
import vm.Memory;

/**
 * All allocation contexts are implemented by memory areas. This is the
 * base-level class for all memory areas.
 * 
 * @version 1.2; - December 2013
 * 
 * @author Anders P. Ravn, Aalborg University, <A
 *         HREF="mailto:apr@cs.aau.dk">apr@cs.aau.dk</A>, <br>
 *         Hans S&oslash;ndergaard, VIA University College, Denmark, <A
 *         HREF="mailto:hso@viauc.dk">hso@via.dk</A>
 */

@SCJAllowed(Level.INFRASTRUCTURE)
public abstract class MemoryArea {
	/** Singleton reference for the first allocated memory area. */
	private static MemoryArea head;

	protected static int backingStoreBase;
	protected static int backingStoreEnd;
	protected static int backingStoreMax;

	/**
	 * link for an open list of allocated areas. The list head is <code>head</code>.
	 */
	protected MemoryArea next;

	protected Memory delegate;

	/**
	 * Dummy constructor for ImmortalMemory
	 */
	MemoryArea() {
	}

	/**
	 * Creates a new memory area.
	 * 
	 * @param size
	 *    The size of this new memory area.
	 */
	/*@ 
	  behavior    
	    requires size > 0;   
	    ensures size() == size && memoryConsumed() == 0;
	@*/
	protected MemoryArea(int size, String label) {
		int base = getBase();
		int end = base + size;

		if (end < backingStoreEnd) {
			if (Memory.memoryAreaTrackingEnabled) {
				if (label == null) {
					label = getClass().getName();
				}
			} else {
				if (label == null) {
					label = "";
				}
			}
			delegate = new Memory(base, size, label);
			next = null;
			if (end > backingStoreMax) {
				backingStoreMax = end;
				Memory.updateBackingStoreMax(backingStoreMax);
			}
		} else {
			base = base - head.delegate.getBase();
			throw new OutOfMemoryError(
					Const.reporter.processOutOfBackingStoreError(base, base
							+ size, backingStoreEnd - head.delegate.getBase()));
		}
		linkMemoryArea(this);
	}

	/**
	 * Finds the base for a new allocation
	 * 
	 * @return the base for a further allocation 
	 */
	private static int getBase() {
		MemoryArea current = head;
		int base = backingStoreBase;
		while (current != null) {
			int currentEnd = current.delegate.getBase()
					+ current.delegate.getSize();
			if (currentEnd > base) {
				base = currentEnd;
			}
			current = current.next;
		}
		return base;
	}

	/**
	 * Appends an area to the end of the open list with head <code>head</code>.
	 * 
	 * @param memoryArea is the area to be appended to the list.
	 */
	private static void linkMemoryArea(MemoryArea memoryArea) {
		if (head == null) {
			head = memoryArea;
		} else {
			MemoryArea current = head;
			while (current.next != null) {
				current = current.next;
			}
			current.next = memoryArea;
		}
	}

	/**
	 * Removes <code>this</code> area from the open list with head <code>head</code>.
	 * The head is ImmortalMemory and is never removed.
	 */
	protected void removeMemArea() {
		if (this != head) {
			MemoryArea current = head;
			while (current.next != this) {
				current = current.next;
			}
			current.next = next;
		}
	}

	/**
	 * @param object An object.
	 * @return The memory area in which <code>object</code> is allocated.
	 */
	/*@  
	   public behavior    
	     requires object != null;  
	     ensures  \result != null;  // is tested elsewhere, see javax.realtime.test.TestMemoryArea
	  @*/
	@SCJAllowed
	public static MemoryArea getMemoryArea(Object object) {
		int ref = ObjectInfo.getAddress(object);
		MemoryArea current = head;
		while (current != null) {
			if ((current.delegate.getBase() <= ref)
					&& (ref < current.delegate.getBase()
							+ current.delegate.getSize())) {
				return current;
			}
			current = current.next;
		}
		return null;
	}

	/**
	 * @return The memory consumed (in bytes) in this memory area.
	 */
	/*@ 
	public behaviour
	  requires true;
	  assignable \nothing;
	  ensures \result >= 0;
	@*/
	@SCJAllowed
	public long memoryConsumed() {
		return (long) delegate.consumedMemory();
	}

	/**
	 * @return The memory remaining (in bytes) in this memory area.
	 */
	/*@ 
	public behaviour
	  requires true;
	  assignable \nothing;
	  ensures \result == size() + memoryConsumed();
	@*/
	@SCJAllowed
	public long memoryRemaining() {
		return size() - memoryConsumed();
	}

	/**
	 * @return The size of the current memory area in bytes.
	 */
	@SCJAllowed
	/*@ 
	public behaviour
	  requires true;
	  assignable \nothing;
	  ensures \result >= 0;
	@*/
	public long size() {
		return this.delegate.getSize();
	}

	@Override
	public String toString() {
		return delegate.toString();
	}
}
