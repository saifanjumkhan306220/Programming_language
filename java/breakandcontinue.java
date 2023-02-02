public class breakandcontinue {
    public static void main(String[] args) {
        for (int i = 1; i <= 10; i++) {
            System.out.println(i);
            System.out.println("java is great");
            if (i == 2) {
                System.out.println("Ending the loop");
                break;
            }
        }
    }
}