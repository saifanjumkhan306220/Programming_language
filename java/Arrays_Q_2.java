// Q1. Write a program to find out whether a given integer is present in array or not.
public class Arrays_Q_2 {
    public static void main(String[] args) {
        float[] marks = { 45.6f, 67.2f, 3.5f, 6.1f, 7.8f };
        float num = 45.9f;
        boolean isInArray = false;
        for (float element : marks) {
            if (num == element) {
                isInArray = true;
                break;
            }
        }
        if (isInArray) {
            System.out.println("The value is present in array");
        } else {
            System.out.println("The value is not present in array");
        }
    }

}
