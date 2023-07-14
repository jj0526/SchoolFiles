/**
 * 
 * file HW1_8.java
 * 
 * author : Jeon Sihyeon (wjstlgus13@gachon.ac.kr)
 * 
 * Date : 04/01/2022
 * 
 */
package hw1_8;

import java.util.Scanner;
/**
 * 
 * Summary of the HW1_8 :
 * 		This class allows the user to input their weight in pounds, height in inches,
 * 		 and age in years.  The program outputs the number of chocolate bars 
 * 		that should be consumed to maintain one’s weight for both a woman and a man
 * 		 of the input weight, height, and age. (a typical chocolate bar contains around 230 calories)
 *
 */
public class HW1_8 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		double BMR;
		Scanner sc = new Scanner(System.in);
	
		System.out.println("What's your weight in pounds?");
		double weight = sc.nextDouble();		//saves weight
		
		System.out.println("What's your height?");
		double height = sc.nextDouble();		//saves height
		
		System.out.println("How old are you?");
		int age = sc.nextInt();					//saves age
		
		BMR = 655 + (4.3*weight) + (4.7*height)-(4.7*age);	//bmr for a woman
		
		System.out.println(BMR/230 + " chocolate bars for woman");
		
		BMR = 66 + (6.3*weight) + (12.9 * height) - (6.8*age);	//bmr for a man
		
		System.out.println(BMR/230 + " chocolate bars for men");
	}

}
