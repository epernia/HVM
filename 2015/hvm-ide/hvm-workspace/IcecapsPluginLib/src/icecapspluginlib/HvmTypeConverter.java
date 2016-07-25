package icecapspluginlib;

import org.apache.bcel.generic.Type;

public enum HvmTypeConverter {

	BOOLEAN {

		@Override
		public Type getJavaType() {
			return Type.BOOLEAN;
		}

		@Override
		public String getHvmType() {
			return "int8";
		}
	},
	BYTE {
		@Override
		public Type getJavaType() {
			return Type.BYTE;
		}

		@Override
		public String getHvmType() {
			return "int8";
		}
	},
	CHAR {
		@Override
		public Type getJavaType() {
			return Type.CHAR;
		}

		@Override
		public String getHvmType() {
			return "int8";
		}
	},
	DOUBLE {
		@Override
		public Type getJavaType() {
			return Type.DOUBLE;
		}

		@Override
		public String getHvmType() {
			return "double";
		}
	},
	FLOAT {
		@Override
		public Type getJavaType() {
			return Type.FLOAT;
		}

		@Override
		public String getHvmType() {
			return "float";
		}
	},
	INT {
		@Override
		public Type getJavaType() {
			return Type.INT;
		}

		@Override
		public String getHvmType() {
			return "int32";
		}

		public String retriveFromSp(int index) {
			return "sp[" + index + "];";
		}

	},
	LONG {
		@Override
		public Type getJavaType() {
			return Type.LONG;
		}

		@Override
		public String getHvmType() {
			return "int64";
		}
	},
	OBJECT {
		@Override
		public Type getJavaType() {
			return Type.OBJECT;
		}

		@Override
		public String getHvmType() {
			return "pointer";
		}
	}

	,
	SHORT {
		@Override
		public Type getJavaType() {
			return Type.SHORT;
		}

		@Override
		public String getHvmType() {
			return "int16";
		}
	},
	VOID {
		@Override
		public Type getJavaType() {
			return Type.VOID;
		}

		@Override
		public String getHvmType() {
			return "void";
		}
		
		@Override
		public String asBody() {
			return "/* method body */";
		}
	};

	public abstract Type getJavaType();

	public abstract String getHvmType();

	public String retriveFromSp(int index) {
		return "(" + this.getHvmType() + ") sp[" + index + "];";
	}

	public static HvmTypeConverter forJavaType(Type type) {
		for (HvmTypeConverter t : HvmTypeConverter.values()) {
			if (t.getJavaType().equals(type)) {
				return t;
			}
		}
		// Default
		return OBJECT;
	}

	public String asBody() {
		return this.getHvmType() 
				+ " returnValue;\n/*method body has to set returnValue variable */\n\n" 
				+ "sp[0] = (" + this.getHvmType() + ") returnValue;";
	}
}
