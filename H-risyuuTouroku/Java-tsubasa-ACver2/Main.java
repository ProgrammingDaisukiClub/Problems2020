
// recursion solution
import java.util.*;

public class Main {
    static List<Integer> vec = new ArrayList<Integer>();
    static int n, k;
    static int[] a;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int times = 0; times < t; times++) {
            vec.clear();
            n = sc.nextInt();
            k = sc.nextInt();
            int x = sc.nextInt();
            a = new int[n];
            for (int i = 0; i < n; i++)
                a[i] = sc.nextInt();
            dfs(0, 0, 0);
            Collections.sort(vec, Comparator.reverseOrder());
            System.out.println(vec.get(x - 1));
        }
    }

    public static void dfs(int now, int sum, int cnt) {
        if (now == n) {
            if (cnt == k)
                vec.add(sum);
            return;
        }
        // use
        dfs(now + 1, sum + a[now], cnt + 1);
        // not use
        dfs(now + 1, sum, cnt);
    }
}
