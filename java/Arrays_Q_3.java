// Q1. Calculate the average marks from an array containing marks of all student in physics using 
//                                                                      for each loop.
public class Arrays_Q_3 {
    public static void main(String[] args) {
        float[] marks = { 45.6f, 67.2f, 3.5f, 6.1f, 7.8f };
        float sum = 0;
        for (float element : marks) {
            sum = sum + element;
        }
        System.out.println("The value of average marks is " + sum / marks.length);
    }

}
