import java.util.*;

public class Main {
    static final long inf = (long) (3e18);
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int times = 0; times < t; times++) {
            int  n = sc.nextInt();
            long  m = sc.nextLong(),x = inf,res = 0;
            long[] a = new long[n];
            long[][] dp;
            for (int i = 0; i < n; i++){
                a[i] = sc.nextLong();
                if(x > a[i])x = a[i];
            }
            dp = new long[2][(int)x];    
            for(int i = 1;i < x;i++)dp[0][i] = inf;
            dp[0][0] = 0;
            int flg = 1;
            for(int i = 0;i < n;i++){
                while(true){
                    for(int j = 0;j < x;j++){
                        int to = (int)((a[i] + j)%x);
                        dp[flg][to] = dp[1-flg][to];
                        if(dp[flg][to] > dp[1-flg][j] + a[i])
                            dp[flg][to] = dp[1-flg][j] + a[i];
                    }
                    flg = 1 - flg;
                    if((a[i] <<= 1) > m)break;
                }
            }
            ++m;
            for(int i = 0;i < x;i++){
                long now = m + (x + i - m % x) % x;
                if(now > dp[1-flg][i])now = dp[1-flg][i];
                res += now / x;
            }
            System.out.println(res);
        }
    }
}
