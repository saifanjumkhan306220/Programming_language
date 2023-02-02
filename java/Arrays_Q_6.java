// Q1. Write a java program to find the maximum element in the array.
public class Arrays_Q_6 {
    public static void main(String[] args) {
        int[] arr = { 1, 34, 56, 79, 200, 67 };
        int max = 0;
        for (int e : arr) {
            if (e > max) {
                max = e;
            }
        }
        System.out.println("The value of maximum element in this array is " + max);
    }

}
