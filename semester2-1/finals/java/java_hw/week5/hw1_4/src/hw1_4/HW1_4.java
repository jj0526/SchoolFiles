/**
 * 
 * file HW1_4.java
 * 
 * author : Jeon Sihyeon (wjstlgus13@gachon.ac.kr)
 * 
 * Date : 04/01/2022
 * 
 */

package hw1_4;
import java.util.Scanner;
/**
 * 
 * Summary of the HW1_4 :
 * 		This class asks the user to enter his roll number, name, address, and the course he studies.
 * 		The program prints them.
 *
 */
public class HW1_4 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		System.out.println("What is your roll number?");
		int roll = sc.nextInt();	//roll number
		
		System.out.println("What's your name?");
		String name = sc.nextLine();	//name
		name = sc.nextLine();
		
		System.out.println("What's your address?");
		String address = sc.nextLine();	//address
		
		System.out.println("What's your major");
		String major = sc.nextLine();	//major
		
		System.out.println(name + " has roll no." + roll);
		System.out.println("his address is " + address + " and the course he studies is " + major);
		//prints
	}

}
