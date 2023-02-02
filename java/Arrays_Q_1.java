// Q1. Create an Array of 5 floats and calculate their sum.
public class Arrays_Q_1 {
    public static void main(String[] args) {
        float[] marks = { 45.6f, 67.2f, 3.5f, 6.1f, 7.8f };
        float sum = 0;
        for (float element : marks) {
            sum = sum + element;
        }
        System.out.println("The value of sum is " + sum);
    }

}
