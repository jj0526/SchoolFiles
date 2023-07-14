
public class PurchaseMain {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Purchase[] ps = new Purchase[5];
		for (int i = 0; i<5; i++) {
			ps[i] = new Purchase();
		}
		ps[0].readInput();
		ps[0].writeOutput();
		
		ps[1].readInput();
		ps[1].writeOutput();
		
		ps[2].readInput();
		ps[2].writeOutput();
		
		ps[3].readInput();
		ps[3].writeOutput();
		
		ps[4].readInput();
		ps[4].writeOutput();
		
	}

}
