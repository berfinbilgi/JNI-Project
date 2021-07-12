package project;

public class JNIproject {

	static {
		System.loadLibrary("libJNIProjectCpp");
	}

	public native int Sum(int n1, int n2);

	public native int Subtract(int n1, int n2);

	public native int Multiply(int n1, int n2);

	public native int Divide(int n1, int n2);

	public static void main(String[] args) {

		JNIproject project = new JNIproject();
		int result1 = project.Sum(20, 10);
		int result2 = project.Subtract(20, 10);
		int result3 = project.Multiply(20, 10);
		int result4 = project.Divide(20, 10);

		System.out.println(result1);
		System.out.println(result2);
		System.out.println(result3);
		System.out.println(result4);

	}

}
