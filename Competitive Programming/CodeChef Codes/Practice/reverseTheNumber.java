import java.util.*;

public class reverseTheNumber {
    public static void main(String args[]) throws Exception {
        Scanner sc = new Scanner(System.in);

        int t;
        t = sc.nextInt();

        int res[] = new int[t];
        for (int i = 0; i < t; i++) {
            int n, rev = 0, d;
            n = sc.nextInt();
            while (n > 0) {
                d = n % 10;
                rev = rev * 10 + d;
                n = n / 10;
            }
            res[i] = rev;
        }
        for (int i = 0; i < t; i++) {
            System.out.println(res[i]);
        }
    }
}