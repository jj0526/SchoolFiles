/**
 * 
 * file HW1_6.java
 * 
 * author : Jeon Sihyeon (wjstlgus13@gachon.ac.kr)
 * 
 * Date : 04/01/2022
 * 
 */

package hw1_6;
/**
 * 
 * Summary of the HW1_6 :
 * 		This class reads a octal number from the keyboard as a string and then converts it into decimal.
 *
 */
import java.util.Scanner;
public class HW1_6 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		String oct = sc.next();
		
		String first = oct.substring(0, 1);
		String second = oct.substring(1, 2);
		String third = oct.substring(2, 3);	//saves each number
		
		int b1 = first.charAt(0) - 48;
		int b2 = second.charAt(0) - 48;
		int b3 = third.charAt(0) - 48;	//a number is a number in char - 48 according to ascii table
		
		System.out.println(64*b1 + 8*b2 + b3);	//computes decimal
	}

}
