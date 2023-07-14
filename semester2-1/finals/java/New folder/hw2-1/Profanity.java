import java.util.Scanner;

public class Profanity {
	String str;
	public void getData() {
		Scanner sc = new Scanner(System.in);
		System.out.println("Please enter a line to be checked for profanity");
		str = sc.nextLine();
		sc.close();
	}
	public void checkString() {

		String str1 = str.toLowerCase();
		int index1 = str1.indexOf("cat");
		if (index1 == -1) {
			System.out.println("does not contain cat");
		}
		else {
			System.out.println("contains cat");
		}
		int index2 = str1.indexOf("dog");
		if (index2 == -1) {
			System.out.println("does not contain dog");
		}
		else {
			System.out.println("contains dog");
		}
		int index3 = str1.indexOf("llama");
		if (index3 == -1) {
			System.out.println("does not contain llama");
		}
		else {
			System.out.println("contains llama");
		}
		
	}
	
}
