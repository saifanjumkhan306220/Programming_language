// Q1. Write a java program to find the minimum element in the array.
public class Arrays_Q_7 {
    public static void main(String[] args) {
        int[] arr = { 111, 34, 56, 79, 200, 6 };
        int min = Integer.MAX_VALUE;
        for (int e : arr) {
            if (e < min) {
                min = e;
            }
        }
        System.out.println("The value of minimum element in this array is " + min);
    }

}
