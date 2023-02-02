public class breakandcontinue1 {
    public static void main(String[] args) {
        int i = 0;
        while (i < 5) {
            System.out.println(i);
            System.out.println("java is great");
            if (i == 2) {
                System.out.println("Ending the loop");
                break;
            }
            i++;
        }
        System.out.println("loop ends here");
    }
}