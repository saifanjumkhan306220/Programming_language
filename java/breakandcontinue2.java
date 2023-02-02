public class breakandcontinue2 {
    public static void main(String[] args) {
        int i = 0;
        do {
            System.out.println(i);
            System.out.println("java is great");
            if (i == 2) {
                System.out.println("Ending the loop");
                break;
            }
            i++;
        } while (i < 5);
        System.out.println("loop ends here");
    }
}