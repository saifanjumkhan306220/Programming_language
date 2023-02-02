import java.util.*;

class interview21 {
    public static void main(String args[]) {

        LinkedList<String> list = new LinkedList<String>();
        list.add("Alice");
        list.addLast("Lisa");
        list.add("Bob");
        list.addFirst("Tara");
        list.add(0, "Mike");

        Iterator<String> itr = list.iterator();
        while (itr.hasNext()) {
            System.out.println(itr.next());
        }

    }
}

/*
 * Answer:
 * Mike
 * Tara
 * Alice
 * Lisa
 * Bob
 */