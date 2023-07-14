public class PicturesMain {

	public static void main(String[] args) {
		
		double[][] picture1 = {
				{3,0,2,9}, {1,1,0,4}, {0,2,6,1}, {0,0,0,0}, {1,7,1,0}
		};
		double[][] ResOfFindfigure = new double[picture1.length][picture1[0].length];
		ResOfFindfigure = Pictures.findFigure(picture1, 1.4);
		for (int i = 0; i<ResOfFindfigure.length; i++) {
			for (int j = 0; j<ResOfFindfigure[0].length; j++) {
				System.out.print(ResOfFindfigure[i][j] + " ");
			}
			System.out.println();
		}
		double[][] picture2 = {
				{3,0,2,9}, {1,1,0,4}, {0,2,6,1}, {0,0,0,0}, {1,7,6,0}, {4, 2, 3, 1},
		};
		double[][] ResOfFindfigure2 = new double[picture2.length][picture2[0].length];
		ResOfFindfigure2 = Pictures.findFigure(picture2, 0.6);
		for (int i = 0; i<ResOfFindfigure2.length; i++) {
			for (int j = 0; j<ResOfFindfigure2[0].length; j++) {
				System.out.print(ResOfFindfigure2[i][j] + " ");
			}
			System.out.println();
		}
	}

}
