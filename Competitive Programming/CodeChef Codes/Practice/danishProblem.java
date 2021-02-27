import java.util.*;

public class danishProblem {
    public static void main(String args[]) throws Exception {
        Scanner sc = new Scanner(System.in);

        int t;
        t = sc.nextInt();
        int arr[] = new int[t];
        for (int i = 0; i < t; i++) {
            int prob[] = new int[10];
            int k;
            for (int j = 0; j < 10; j++) {
                prob[j] = sc.nextInt();
            }
            k = sc.nextInt();
            int index = 9;
            while (k > 0) {
                if (prob[index] < k) {
                    k = k - prob[index];
                    prob[index] = 0;
                    index--;
                } else {
                    prob[index] = prob[index] - k;
                    k = 0;
                }
            }
            for (int j = 9; j >= 0; j--) {
                if (prob[j] != 0) {
                    arr[i] = j + 1;
                    break;
                }
            }
        }
        for (int i = 0; i < t; i++) {
            System.out.println(arr[i]);
        }
    }
}
