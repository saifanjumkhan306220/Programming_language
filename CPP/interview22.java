import java.util.*;

class interview22 {
    public static void main(String args[]) {
        ArrayList<String> h = new ArrayList<String>();
        System.out.println(h.size());
        h.add("h");
        h.add("a");
        h.add("c");
        h.add(1, "k");
        System.out.println(h.size());
        h.remove("a");
        h.remove(2);
        System.out.println(h.size());

    }
}

/*
 * ANSWER:
 * 0
 * 4
 * 2
 */