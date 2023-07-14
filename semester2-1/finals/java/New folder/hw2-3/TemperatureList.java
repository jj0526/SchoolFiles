import java.util.Scanner;

public class TemperatureList {
	double[] temperature = new double[7];
	public void getData() {
		System.out.println("Input 7 temperatures");
		Scanner sc = new Scanner(System.in);
		
		for (int i = 0; i<7; i++) {
			temperature[i] = sc.nextDouble();
		}
		sc.close();
	}
	double highest;
	double lowest;
	double average = 0;
	public void MaxAndMin() {
		highest = temperature[0];
		lowest = temperature[0];
		for(int i = 0; i<7; i++) {
			if(highest<temperature[i]) {
				highest = temperature[i];
			}
			if(lowest>temperature[i]) {
				lowest = temperature[i];
			}
			average += temperature[i];
		}
		average/=7;
	}
	public void printResult() {
		System.out.println("Highest temperature is " + highest);
		System.out.println("Lowest temperature is " + lowest);
		System.out.println("Average temperature is " + average);
	}
	
}
