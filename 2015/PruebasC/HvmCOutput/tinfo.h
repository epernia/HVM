/* Maximum stack depth: 
   vm.Process.initialize(()V)
   vm.Process$ProcessExecutor.run(()V)
   scjhelloworld.TestProcess$P1.run(()V)
   devices.Console.println((Ljava/lang/String;)V)
   devices.Console.println((Ljava/lang/String;Z)V)
   devices.Console.getBytes((Ljava/lang/String;Z)[B)
   java.lang.String.charAt((I)C)
   java.lang.StringIndexOutOfBoundsException.<init>((I)V)
   java.lang.StringBuilder.toString(()Ljava/lang/String;)
   java.lang.String.<init>(([CII)V)
   java.util.Arrays.copyOfRange(([CII)[C)
   java.lang.StringBuilder.append((I)Ljava/lang/StringBuilder;)
   java.lang.AbstractStringBuilder.append((I)Ljava/lang/AbstractStringBuilder;)
   java.lang.StringBuilder.append((Ljava/lang/String;)Ljava/lang/AbstractStringBuilder;)
   java.lang.StringBuilder.append((Ljava/lang/String;)Ljava/lang/StringBuilder;)
   java.lang.AbstractStringBuilder.append((Ljava/lang/String;)Ljava/lang/AbstractStringBuilder;)
   java.lang.AbstractStringBuilder.appendNull(()Ljava/lang/AbstractStringBuilder;)
   java.lang.AbstractStringBuilder.ensureCapacityInternal((I)V)
   java.lang.AbstractStringBuilder.expandCapacity((I)V)
   java.util.Arrays.copyOf(([CI)[C)
   java.lang.Math.<clinit>(()V)
   java.lang.Math.powerOfTwoD((I)D)
   java.lang.Double.<clinit>(()V)
   java.lang.OutOfMemoryError.<init>(()V)
   java.lang.VirtualMachineError.<init>(()V)
   java.lang.Error.<init>(()V)
   java.lang.Throwable.<init>(()V)
   java.lang.NullPointerException.<init>(()V)
   java.lang.IllegalMonitorStateException.<init>(()V)
   java.lang.RuntimeException.<init>(()V)
   java.lang.Exception.<init>(()V)
   java.lang.Throwable.<init>(()V)
   java.lang.Object.<init>(()V)
   java.lang.IllegalMonitorStateException.<init>(()V)
*/
#define MAX_APP_STACK 34
/* Maximum class heirarchy: 
   java.lang.ArrayIndexOutOfBoundsException
   java.lang.IndexOutOfBoundsException
   java.lang.RuntimeException
   java.lang.Exception
   java.lang.Throwable
   java.lang.Object
*/
#define MAX_CLASS_HEIRARCHY 6
/* Maximum lookup/tableswitch jump table size */
#define MAX_LOOKUPTABLE_SWITCH_SIZE 4
/* Maximum invokevirtual/interface jump table size */
#define MAX_INVOKE_TABLE_SIZE 2
