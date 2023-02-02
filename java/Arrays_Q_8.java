// Q1. Write a java program to find whether the array is sorted or not.
public class Arrays_Q_8 {
    public static void main(String[] args) {
        boolean isSorted = true;
        int[] arr = { 34, 5, 67, 8, 12, 1, 35 };
        for (int i = 0; i < arr.length - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                isSorted = false;
                break;
            }
        }
        if (isSorted) {
            System.out.println("The array is sorted");
        } else {
            System.out.println("The array is not sorted");
        }

    }

}
