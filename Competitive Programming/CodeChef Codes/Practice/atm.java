import java.util.*;

public class atm {
    public static void main(String args[]) throws Exception {
        try {
            Scanner sc = new Scanner(System.in);
            int x;
            double y;
            x = sc.nextInt();
            y = sc.nextDouble();

            if ((x % 5 == 0) && ((x + 0.5) <= y)) {
                System.out.println(String.format("%.2f", (y - x - 0.5)));
            } else {
                System.out.println(String.format("%.2f", y));
            }
        } catch (Exception e) {
            return;
        }
    }
}