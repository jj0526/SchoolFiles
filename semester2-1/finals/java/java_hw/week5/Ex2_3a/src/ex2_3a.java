/**
 * 
 * file ex2_3a.java
 * 
 * author : Jeon Sihyeon (wjstlgus13@gachon.ac.kr)
 * 
 * Date : 04/01/2022
 * 
 */
import java.util.Scanner;

/**
 * 
 * Summary of the ex2_3a :
 * 		This class reads the price of an item in cents(a multiple of 5 between 25 and 100).
 * 		Assume you paid a dollar, and prints the number of quarter, dime, and nickel coins 
 * 		for the change.
 *
 */

public class ex2_3a {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		
		int cent = sc.nextInt();
		System.out.print("for an item of " + cent + " cents, the change is ");
		System.out.print(100-cent + "cents, which is given by ");
		cent = 100 - cent;	//change
		System.out.print(cent/25 + " quarters, ");	//the number of quarters
		cent %= 25;
		System.out.print(cent/10 + " dimes, and ");	//the number of dimes
		cent %= 10;
		System.out.println(cent/5 + " nickels");	//the number of nickels
	}

}
