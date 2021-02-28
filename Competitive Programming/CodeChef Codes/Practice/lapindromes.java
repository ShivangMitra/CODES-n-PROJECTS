import java.util.*;

public class lapindromes {
    public static void main(String args[]) throws Exception {
        Scanner sc = new Scanner(System.in);

        int t;
        t = sc.nextInt();

        String res[] = new String[t];

        for (int i = 0; i < t; i++) {
            String str;
            str = sc.next();
            ArrayList<String> al = new ArrayList<>();
            int l = str.length();
            int j, k;
            for (j = 0, k = (l - 1); j <= (l / 2) && k >= (l / 2); j++, k--) {
                char ch1 = str.charAt(j), ch2 = str.charAt(k);
                if (al.contains(String.valueOf(ch1))) {
                    al.remove(String.valueOf(ch1));
                } else {
                    al.add(String.valueOf(ch1));
                }
                if (al.contains(String.valueOf(ch2))) {
                    al.remove(String.valueOf(ch2));
                } else {
                    al.add(String.valueOf(ch2));
                }
            }
            if (al.size() == 0) {
                res[i] = "YES";
            } else {
                res[i] = "NO";
            }
        }
        for (int i = 0; i < t; i++) {
            System.out.println(res[i]);
        }
    }
}
