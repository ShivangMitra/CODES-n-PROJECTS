import java.util.*;

public class learnArrayDeque {
    public static void main(String args[]) throws Exception {
        ArrayDeque<Integer> ad1 = new ArrayDeque<>();

        ad1.add(6);
        ad1.add(56);
        ad1.add(9);
        ad1.addFirst(34);
        ad1.addLast(99);
        System.out.println(ad1.getFirst());
        System.out.println(ad1.getLast());
        System.out.println(ad1.size());
    }
}