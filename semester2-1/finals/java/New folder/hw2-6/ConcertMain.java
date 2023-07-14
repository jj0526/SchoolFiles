import java.util.Scanner;

public class ConcertMain {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner kb = new Scanner(System.in);
		
		ConcertPromoter cp = new ConcertPromoter();
		
		System.out.println("---Before the day of the concert--- Only tickets are sold only over the phone");
		System.out.println("input 0 if there's no more tickets sold");
		int numOfTickets;
		cp.getData(kb);
		while(ConcertPromoter.change) {
			System.out.println("How many tickets would you like to buy?(by phone)");
			numOfTickets = kb.nextInt();
			if(numOfTickets>0) {
				cp.buyTicketByphone(numOfTickets);
			}
			else if (numOfTickets==0) {
				ConcertPromoter.change = false;
			}
		}
		System.out.println("---on the day of the concert--- Only tickets are sold only in person");
		System.out.println("input 0 if there's no more tickets sold");
		String temp;
		while(true) {
			System.out.println("How many tickets would you like to buy?(at the concert venue)");
			temp = kb.nextLine();
			numOfTickets = kb.nextInt();
			if(numOfTickets>0) {
				cp.buyTicketAtVenue(numOfTickets);
			}
			else if(numOfTickets==0) {
				break;
			}
		}
		int sold = cp.getTicketsSold();
		System.out.print(cp.getTicketsSold());
		System.out.println(" tickets were sold. total sales : " + cp.getTotalSales() + " $");
		kb.close();
	}

}
