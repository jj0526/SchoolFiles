
public class Pictures {
	static double[][] findFigure(double picture[][], double threshold) {
		int height1 = picture.length;
		int weight1 = picture[0].length;
		double avg = 0;
		for (int i = 0; i<height1; i++) {
			for (int j = 0; j<weight1; j++) {
				avg+=picture[i][j];
			}
		}
		double[][] result = new double[height1][weight1];
		avg /= (height1*weight1);
		double limit = avg*threshold;
		System.out.println("threshold times the average of all values in picture : "+limit);
		for (int i = 0; i<height1; i++) {
			for (int j = 0; j<weight1; j++) {
				if(picture[i][j]>limit) {
					result[i][j] = 1.0;
				}
				else {
					result[i][j] = 0.0;
				}
			}
		}
		return result;
	}
}
