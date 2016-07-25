package hvmforciaa.makefile;

public abstract class PreferenceValueMakeFileColaborator extends
		AbstractMakefileColaborator {

	@Override
	protected String buildCode() {
		return " " + this.getValue() + "\n";
	}

	@Override
	public String token() {
		return preference() + " ?=";
	}

}
