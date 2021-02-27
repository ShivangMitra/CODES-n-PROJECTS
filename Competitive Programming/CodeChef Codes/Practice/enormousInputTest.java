import java.util.*;

class enormousInputTest {
    public static void main(String args[]) throws Exception {
        Scanner sc = new Scanner(System.in);
        int n, k, count = 0, inp;
        n = sc.nextInt();
        k = sc.nextInt();
        for (int i = 0; i < n; i++) {
            inp = sc.nextInt();
            if ((inp % k) == 0) {
                count++;
            }
        }
        System.out.println(count);
    }
}