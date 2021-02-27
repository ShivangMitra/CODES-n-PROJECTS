import java.util.*;

public class smallestWholeNumber {
    public static void main(String args[]) throws Exception {
        Scanner sc = new Scanner(System.in);

        int t;
        t = sc.nextInt();
        int arr[] = new int[t];
        for (int i = 0; i < t; i++) {
            int n, k;
            n = sc.nextInt();
            k = sc.nextInt();
            if (k != 0) {
                while (n >= k) {
                    n = n % k;
                }
                arr[i] = n;
            } else {
                arr[i] = n;
            }
        }
        for (int i = 0; i < t; i++) {
            System.out.println(arr[i]);
        }
    }
}
