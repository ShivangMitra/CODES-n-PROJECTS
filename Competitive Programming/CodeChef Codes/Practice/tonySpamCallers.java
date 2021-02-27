import java.util.*;

public class tonySpamCallers {
    public static void main(String args[]) throws Exception {
        Scanner sc = new Scanner(System.in);

        int t;
        t = sc.nextInt();
        String arr[] = new String[t];
        for (int i = 0; i < t; i++) {
            int l;
            l = sc.nextInt();
            Set<Character> letters = new HashSet<>();
            String str = sc.next();
            str = str.toLowerCase();
            for (int j = 0; j < l; j++) {
                letters.add(str.charAt(j));
            }
            if (letters.size() % 2 == 0) {
                arr[i] = "SPAM";
            } else {
                arr[i] = "AVENGER";
            }
        }
        for (int i = 0; i < t; i++) {
            System.out.println(arr[i]);
        }
    }
}
