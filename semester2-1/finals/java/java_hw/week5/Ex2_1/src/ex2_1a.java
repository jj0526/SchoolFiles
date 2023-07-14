/**
 * 
 * file ex2_1a.java
 * 
 * author : Jeon Sihyeon (wjstlgus13@gachon.ac.kr)
 * 
 * Date : 04/01/2022
 * 
 */
import java.util.Scanner;

/**
 * 
 * Summary of the ex2_1a :
 * 		This class reads a four-digit integer and display one digit per line.
 *
 */
public class ex2_1a {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		
		int num = sc.nextInt();
		
		System.out.println(num/1000);	//first digit
		num%=1000;
		System.out.println(num/100);	//second digit
		num%=100;
		System.out.println(num/10);		//third digit
		num%=10;
		System.out.println(num);		//fourth digit
	}

}
