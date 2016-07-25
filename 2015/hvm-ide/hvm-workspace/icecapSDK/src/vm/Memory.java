package vm;

import icecaptools.IcecapCVar;
import icecaptools.IcecapCompileMe;

import java.util.ArrayList;

public class Memory {
	private int base;
	private int size;
	private int free;

	private String name;

	private MemoryInfo memoryInfo;

	private static class MemoryInfo {
		String name;
		int size;
		int maxUsed;
		private int instanceCount;

		public MemoryInfo(Memory m) {
			this.name = m.name;
			this.size = m.size;
			this.maxUsed = 0;
			instanceCount = 1;
		}

		@Override
		public String toString() {
			StringBuffer buffer = new StringBuffer();
			buffer.append(name);
			buffer.append("[" + instanceCount + "]");
			buffer.append(": size = ");
			buffer.append(size);
			buffer.append(", max used = " + maxUsed);
			return buffer.toString();
		}

		public void increaseInstanceCount() {
			instanceCount++;

		}
	}

	public static boolean memoryAreaTrackingEnabled;
	private static Memory areaToUseForTracking;

	private static ArrayList<MemoryInfo> createdMemories;

	private static int backingStoreMax;
	private static int backingStoreBase;

	@IcecapCompileMe
	private MemoryInfo addMemoryArea(Memory m) {

		Memory current = currentMemoryArea;
		if (areaToUseForTracking == null) {
			areaToUseForTracking = m;
		}
		currentMemoryArea.switchToArea(areaToUseForTracking);
		if (createdMemories == null) {
			createdMemories = new ArrayList<MemoryInfo>();
			heapArea.name = "HEAP";
			MemoryInfo memory = new MemoryInfo(heapArea);
			createdMemories.add(memory);
			heapArea.memoryInfo = memory;
		}
		for (MemoryInfo memory : createdMemories) {
			if (memory.name.compareTo(m.name) == 0) {
				memory.increaseInstanceCount();
				areaToUseForTracking.switchToArea(current);
				return memory;
			}
		}
		MemoryInfo memory = new MemoryInfo(m);
		createdMemories.add(memory);
		areaToUseForTracking.switchToArea(current);
		return memory;
	}

	@IcecapCompileMe
	public static void reportMemoryUsage() {
		if (memoryAreaTrackingEnabled) {

			if (createdMemories != null) {
				Memory current = currentMemoryArea;

				current.switchToArea(areaToUseForTracking);

				devices.Console.println("Created " + createdMemories.size()
						+ " memory area types:");
				for (MemoryInfo memory : createdMemories) {
					devices.Console.println(memory.toString());
				}
				devices.Console.println("Max backing store usage = "
						+ (backingStoreMax - backingStoreBase));
				areaToUseForTracking.switchToArea(current);
			} else {
				devices.Console.println("No created memories recorded");
			}
		} else {
			devices.Console.println("Memory tracking disabled");
		}
	}

	public Memory(int base, int size, String name) {
		this.base = base;
		this.size = size;
		this.free = 0;
		this.name = name;
		if (memoryAreaTrackingEnabled) {
			this.memoryInfo = addMemoryArea(this);
		}
	}

	@Override
	public String toString() {
		StringBuffer buffer = new StringBuffer();
		buffer.append(name);
		buffer.append(": size = ");
		buffer.append(size);
		buffer.append(", free = " + free);
		return buffer.toString();
	}

	@IcecapCompileMe
	public void switchToArea(Memory newScope) {
		Memory newScopeArea = (Memory) newScope;
		currentMemoryArea = newScopeArea;
	}

	@IcecapCompileMe
	public static int allocateBackingStore(int size) {

		if (heapArea.free + size >= heapArea.size) {
			throw new OutOfMemoryError();
		}

		int startPtr = heapArea.base + heapArea.free;
		backingStoreBase = startPtr;
		heapArea.free += size;

		return startPtr;
	}

	@IcecapCVar
	private static Memory currentMemoryArea;

	@IcecapCVar
	private static Memory heapArea;

	/*
	 * Returns the entire heap as a Memory object. This is used to allocate the
	 * backing store inside the heap.
	 * 
	 * The heap contains more than just the SCJ managed memories. It also
	 * contains everything loaded by the class initializers and all the
	 * constants.
	 */
	@IcecapCompileMe
	static public Memory getHeapArea() {
		return heapArea;
	}

	/**
	 * Resets the memory by setting free to the new free value newFree = 0
	 * means, that the whole memory is reset Precondition: 0 <= newFree < size
	 * 
	 * @param newFree
	 *            the new free value
	 */
	public void reset(int newFree) {
		free = newFree;
	}

	public int consumedMemory() {
		return free;
	}

	public int getBase() {
		return base;
	}

	public int getSize() {
		return size;
	}

	@IcecapCompileMe
	public static void startMemoryAreaTracking() {
		updateMaxUsed(heapArea);
		memoryAreaTrackingEnabled = true;
	}

	@IcecapCompileMe
	public static void updateMaxUsed(Memory m) {
		if (m.memoryInfo != null) {
			if (m.free > m.memoryInfo.maxUsed) {
				m.memoryInfo.maxUsed = m.free;
			}
		}
	}

	public static void updateBackingStoreMax(int max) {
		backingStoreMax = max;

	}
}
