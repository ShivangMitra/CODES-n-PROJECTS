import java.util.*;

public class coprimeRange {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int i = 0;
        int num = 0;

        int t;
        t = sc.nextInt();
        int arr[] = new int[t];

        for (int j = 0; j < t; j++) {

            int l, r;
            l = sc.nextInt();
            r = sc.nextInt();

            for (i = 2; i <= 97; i++) {
                boolean flag = true, isnumber = true;
                for (num = 2; num < i / 2; num++) {
                    if (i % num == 0) {
                        flag = false;
                    }
                }
                if (flag) {
                    for (int k = l; k <= r; k++) {
                        if (k % i == 0) {
                            isnumber = false;
                            break;
                        }
                    }
                    if (isnumber) {
                        arr[j] = i;
                        break;
                    } else {
                        continue;
                    }
                }
            }
        }
        for (int j = 0; j < t; j++) {
            System.out.println(arr[j]);
        }
    }
}
