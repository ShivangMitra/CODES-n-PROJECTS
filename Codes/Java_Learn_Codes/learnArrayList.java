import java.util.*;

public class learnArrayList {
    public static void main(String args[]) throws Exception {
        ArrayList<Integer> al1 = new ArrayList<>();
        ArrayList<Integer> al2 = new ArrayList<>();

        al2.add(11);
        al2.add(14);
        al2.add(19);

        al1.add(1);
        al1.add(6);
        al1.add(3);
        al1.add(6);
        al1.add(8);
        al1.add(2, 9);

        al1.addAll(al2);
        al1.addAll(2, al2);
        al1.set(4, 109);

        // for (Integer ele : al1) {
        // System.out.println("ele:" + al1.indexOf(ele) + " " + ele);
        // }
        for (int i = 0; i < al1.size(); i++) {
            System.out.println("ele:" + i + " " + al1.get(i));
        }
    }
}