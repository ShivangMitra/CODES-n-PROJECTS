import java.util.*;

public class smartPhone {
    public static void main(String args[]) throws Exception {
        Scanner sc = new Scanner(System.in);

        double t = 0, avg = 0;
        t = sc.nextInt();
        int arr[] = new int[(int) t];

        for (int i = 0; i < t; i++) {
            arr[i] = sc.nextInt();
            avg += arr[i];
        }

        avg = avg / t;
        double number = arr[0], diff = Math.abs((avg - number));

        for (int i = 1; i < t; i++) {
            double temp;
            temp = Math.abs(avg - arr[i]);
            if (temp < diff) {
                number = arr[i];
                diff = temp;
            } else if (temp == diff && arr[i] > number) {
                number = arr[i];
            }
        }

        int result = 0;

        for (int i = 0; i < t; i++) {
            if (number <= arr[i]) {
                result += number;
            }
        }

        System.out.println(result);
    }
}