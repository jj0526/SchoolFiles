/**
 * 
 * file ex2_2.java
 * 
 * author : Jeon Sihyeon (wjstlgus13@gachon.ac.kr)
 * 
 * Date : 04/01/2022
 * 
 */

import java.util.Scanner;
/**
 * 
 * Summary of the ex2_2 :
 * 		This class moves the first word to the end and capitalize the first character, and then print it.
 *
 */
public class ex2_2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Scanner sc = new Scanner(System.in);
		
		String sentence = sc.nextLine();
		
		int position = sentence.indexOf(" ");	//index of the first " "
		
		int lenstr = sentence.length();			//length of the sentence
		
		sentence = sentence.substring(position+1, position+2).toUpperCase() + sentence.substring(position+2, lenstr) + " " + sentence.substring(0, position) +"?";
		//moves the first word to the end and capitalize the first character
		System.out.println(sentence);
		
	}

}
