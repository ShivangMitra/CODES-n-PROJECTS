import java.util.*;

public class selectTheBalls {

    int factorial(int n) {
        int f = 1;
        for (int i = 1; i <= n; i++) {
            f = f * i;
        }
        return f;
    }

    public static void main(String args[]) throws Exception {
        Scanner sc = new Scanner(System.in);

        selectTheBalls ob = new selectTheBalls();

        int t;
        t = sc.nextInt();
        int arr[] = new int[t];
        for (int i = 0; i < t; i++) {
            int n, m, k, psize, number = -1;
            n = sc.nextInt();
            m = sc.nextInt();
            k = sc.nextInt();
            psize = sc.nextInt();
            boolean numberSet = false;
            boolean next = false;
            int p[] = new int[psize];
            for (int j = 0; j < psize; j++) {
                p[j] = sc.nextInt();
            }

            int c = 0;

            for (int j = 1; j <= m; j++) {
                numberSet = false;
                next = false;
                while (c < psize) {
                    if ((p[c] != j) && (k - j <= n)) {
                        number = j;
                        numberSet = true;
                        break;
                    } else {
                        next = true;
                        c++;
                        break;
                    }
                }
                if (numberSet) {
                    break;
                } else if (next) {
                    continue;
                }
            }

            arr[i] = (((ob.factorial(m)) / ((ob.factorial(number)) * (ob.factorial(m - number))))
                    * ((ob.factorial(n)) / ((ob.factorial(k - number)) * (ob.factorial(n - (k - number))))))
                    % 1000000007;

        }
        for (int i = 0; i < t; i++) {
            System.out.println(arr[i]);
        }

    }
}
