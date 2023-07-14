import java.util.Scanner;
public class ConcertPromoter {
	
	String bandName;
	int capacity;
	int ticketsPhone=0;
	int ticketsVenue=0;
	int totalTicketsSold=0;
	double salesAmount = 0;
	double price;
	
	public void getData(Scanner sc) {
		System.out.println("What's the name of the band?");
		bandName = sc.nextLine();
		System.out.println("What's the capacity of the venue?");
		capacity = sc.nextInt();
		System.out.println("How much is the ticket each?");
		price = sc.nextDouble();
	}
	
	public void buyTicketByphone(int num) {
		if (checkAvailableToBuy(num)==1) {
			ticketsPhone+=num;
			totalTicketsSold = ticketsPhone + ticketsVenue;
		}
		else {
			System.out.print("You can't buy " + num + " tickets. (Reason : only ");
			System.out.println(getTicketsRemaining() + " tickets left)");
		}
	}
	public void buyTicketAtVenue(int num) {
		if (checkAvailableToBuy(num)==1) {
			ticketsVenue+=num;
			totalTicketsSold = ticketsPhone + ticketsVenue;
		}
		else {
			System.out.print("You can't buy " + num + " tickets. (Reason : only ");
			System.out.println(getTicketsRemaining() + " tickets left)");
		}
	}
	public int checkAvailableToBuy(int numOfTicket) {
		if (totalTicketsSold+numOfTicket <= capacity) {
			return 1; 	//available
		}
		else
			return 0;	//not available
	}
	public int getTicketsSold() {
		return ticketsPhone + ticketsVenue;
	}
	public int getTicketsRemaining() {
		return (capacity - getTicketsSold());
	}
	public double getTotalSales() {
		return (getTicketsSold()*price);
	}
	static boolean change = true;
	
	public boolean changePhone2Venue() {
		
		return change;
	}
}
