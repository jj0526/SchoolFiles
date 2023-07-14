import java.util.Scanner;

public class Date {
	int month, day, year;
	public void getData() {
		String date;
		Scanner sc = new Scanner(System.in);
		date = sc.next();
		int index1 = date.indexOf("/");
		month = Integer.parseInt((date.substring(0, index1)));
		int index2 = date.lastIndexOf("/");
		day = Integer.parseInt((date.substring(index1+1, index2)));
		year = Integer.parseInt((date.substring(index2+1, date.length())));
		
		sc.close();
	}
	public void validmonth() {
		System.out.println("Date is " + month +" month "+ day + " day " + year + " year");
		if(month>=1 && month<=12) {
			if(month==9||month==4||month==6||month==11) {
				if(day<=30&&day>=1) {
					System.out.println("valid date");
				}
				else {
					System.out.println("It is not a valid date");
					System.out.println("The reason it is invalid : The day value is not from 1 to 30");
				}
			}
			else if(month==2) {
				if(year%4==0 && year%100!=0 || year%4==0 && year%100==0 && year%400==0) {
					//leap year
					if(day>=1 && 29>=day) {
						System.out.println("valid date");
					}
					else {
						System.out.println("It is not a valid date");
						System.out.println("The reason it is invalid : The day value is not from 1 to 29");
					}
				}
				else {
					//not a leap year
					if(day>=1 && day<=28) {
						System.out.println("valid date");
					}
					else {
						System.out.println("It is not a valid date");
						System.out.println("The reason it is invalid : The day value is not from 1 to 28");
					}
				}
			}
			else {
				if(day>=1 && day<=31) {
					System.out.println("valid date");
				}
				else {
					System.out.println("It is not a valid date");
					System.out.println("The reason it is invalid : The day value is not from 1 to 31");
				}
			}
			
		}
		else {
			System.out.println("It is not a valid date.");
			System.out.println("The reason it is invalid : The month value is not from 1 to 12.");
		}
	}

}
