public class interview23 {
    public static void main(String args[]) {
        interview23 h1 = new interview23();
        interview23 h2 = new interview23();
        interview23 h3 = h1;

        System.out.println(h1 == h3);
        System.out.println(h1 == h2);
        System.out.println(h1.equals(h2));

    }
}

/*
 * Answer:
 * true
 * false
 * false
 */