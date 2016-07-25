package icecaptools.compiler;

import java.util.ArrayList;
import java.util.Iterator;

public class ClassFieldsManager {

    public static final String classDataVariable = "_classData";
    private ArrayList<FieldInfo> referenceFields;

    private int classDataLength;

    ClassFieldsManager() {
        classDataLength = 0;
        referenceFields = new ArrayList<FieldInfo>();
    }

    public void addClassFields(ArrayList<FieldInfo> fieldSet) throws ClassNotFoundException {
        if (fieldSet.size() > 0) {
            Iterator<FieldInfo> itField = fieldSet.iterator();
            while (itField.hasNext()) {
                FieldInfo currentField = itField.next();
                int fieldSize = currentField.getSize() & 0xfc;
                int currentEnd = currentField.getOffset() + fieldSize;
                if (currentEnd > classDataLength) {
                    classDataLength = currentEnd;
                }

                if (currentField.isReference) {
                    referenceFields.add(currentField);
                }
            }
        }
    }

    public void finalizeClassfieldDeclarations(MemorySegment buffer) {
        while (classDataLength % 8 > 0) {
            classDataLength++;
        }

        int numberOfBytes = classDataLength >> 3;

        if (numberOfBytes > 0) {
            buffer.appendData("static unsigned char " + classDataVariable + "[" + numberOfBytes + "] = {", 0);
            while (numberOfBytes > 0) {
                buffer.appendData(" 0", 1);
                numberOfBytes--;
                if (numberOfBytes > 0) {
                    buffer.appendData(",", 0);
                }
            }
            buffer.print("};\n\n");
        }

            buffer.appendData("RANGE static const uint32 _staticReferenceOffsets[" + (referenceFields.size() + 1) + "] PROGMEM = { ", 0);

            buffer.appendData(referenceFields.size() + "", 0);
            Iterator<FieldInfo> staticReferenceFieldsIterator = referenceFields.iterator();
            while (staticReferenceFieldsIterator.hasNext()) {
                FieldInfo next = staticReferenceFieldsIterator.next();
                StringBuffer offsetof = new StringBuffer();
                offsetof.append("offsetof(struct ").append(next.getStructName()).append(", ");
                offsetof.append(next.getStructMemberName()).append(")");
                buffer.appendData(", ", 0);
                buffer.appendData(offsetof.toString(), 0);
            }
            buffer.appendData("};\n", 0);
    }

    public boolean hasClassFields() {
        return classDataLength > 0;
    }
}
