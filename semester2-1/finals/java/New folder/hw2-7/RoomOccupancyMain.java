
public class RoomOccupancyMain {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		RoomOccupancy RoomA = new RoomOccupancy();
		RoomOccupancy RoomB = new RoomOccupancy();
		System.out.println("Add one to room a and three to room b.");
		RoomA.addOneToRoom();
		RoomB.addOneToRoom();
		RoomB.addOneToRoom();
		RoomB.addOneToRoom();
		System.out.println("Room a holds " + RoomA.getNumber());
		System.out.println("Room b holds " + RoomB.getNumber());
		
		System.out.println(RoomOccupancy.totalNumber);
		
		System.out.println("Remove one from both rooms");
		RoomA.removeOneFromRoom();
		RoomB.removeOneFromRoom();
		System.out.println("Room a holds " + RoomA.getNumber());
		System.out.println("Room b holds " + RoomB.getNumber());
		
		System.out.println("Remove two from room a.");
		RoomA.removeOneFromRoom();
		System.out.println("Room a holds " + RoomA.getNumber());
		System.out.println("Room b holds " + RoomB.getNumber());
		
		System.out.println("Create room c and add three to it.");
		RoomOccupancy RoomC = new RoomOccupancy();
		RoomC.addOneToRoom();
		RoomC.addOneToRoom();
		RoomC.addOneToRoom();
		System.out.println("Room a holds " + RoomA.getNumber());
		System.out.println("Room b holds " + RoomB.getNumber());
		System.out.println("Room c holds " + RoomC.getNumber());
		
		System.out.println("Total in all rooms is "+ RoomOccupancy.totalNumber);
	}

}
