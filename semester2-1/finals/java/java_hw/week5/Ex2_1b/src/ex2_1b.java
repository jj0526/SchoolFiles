/**
 * 
 * file ex2_1b.java
 * 
 * author : Jeon Sihyeon (wjstlgus13@gachon.ac.kr)
 * 
 * Date : 04/01/2022
 * 
 */

import java.util.Scanner;
/**
 * 
 * Summary of the ex2_1b :
 * 		This class reads a temperature in Fahrenheit and compute a temperature in celsius and prints it.
 *
 */
public class ex2_1b {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		double fahrenit = sc.nextDouble();
		
		double celsius = 5*(fahrenit-32)/9; 
		System.out.println(celsius);
		}
}
