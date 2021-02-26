import java.util.*;

public class learnHashSet {
    public static void main(String args[]) throws Exception {
        HashSet<Integer> hs = new HashSet<>(6, 0.5f);

        hs.add(6);
        hs.add(8);
        hs.add(3);
        hs.add(11);
        hs.add(11);

        System.out.println(hs);
    }
}