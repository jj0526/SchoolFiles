import java.util.Scanner;

public class encryption {
	String str;
	String str1;
	public void getData() {
		Scanner sc = new Scanner(System.in);
		str = sc.next();
		int temp = str.charAt(0);		
		if(temp + 10 > 127) {
			temp = temp + 10 - 127 + 32;
		}
		else {
			temp = temp + 10;
		}
		
		String temp1 =  String.valueOf((char)temp);
		str1 = temp1;
		
		for (int i = 1; i<str.length(); i++) {
			temp = str.charAt(i);
			if(temp + 10>127) {
				temp = temp + 10 - 127 + 32;
			}
			else {
				temp = temp + 10;
			}
			temp1 = String.valueOf((char)temp);
			str1 = str1.concat(temp1);
		}
		sc.close();
	}
	public void WriteOutput() {
		System.out.println(str1);
	}
}
