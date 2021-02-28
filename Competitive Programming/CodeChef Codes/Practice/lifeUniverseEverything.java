import java.util.*;

public class lifeUniverseEverything {
    public static void main(String args[]) throws Exception {
        Scanner sc = new Scanner(System.in);

        String res = "";

        while (true) {
            int n;
            n = sc.nextInt();
            if (n == 42) {
                break;
            } else {
                res = res + String.valueOf(n) + " ";
            }
        }

        res = res.trim();

        for (int i = 0; i < res.length(); i++) {
            char ch = res.charAt(i);
            if (ch == ' ') {
                System.out.print("\n");
            } else {
                System.out.print(ch);
            }
        }
    }
}
