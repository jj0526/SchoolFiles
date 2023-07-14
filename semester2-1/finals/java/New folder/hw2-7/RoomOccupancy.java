
public class RoomOccupancy {
	int numberInRoom = 0;
	static int totalNumber = 0;
	void addOneToRoom() {
		numberInRoom++;
		totalNumber++;
	}
	public void removeOneFromRoom() {
		if(numberInRoom>0) {
			numberInRoom--;
			totalNumber--;
		}
		else {
			System.out.println("rejected -- (reason : the number of people in the room doesn't go below zero)");
		}
	}
	public int getNumber() {
		return numberInRoom;
	}
	public int getTotal() {
		return totalNumber;
	}
	
}
