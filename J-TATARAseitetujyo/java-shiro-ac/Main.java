import java.util.Scanner;
import java.util.ArrayDeque;
import java.awt.Point;

public class Main
{
    static final Scanner sc = new Scanner(System.in);
    static final int[] dx={0, 1, 0, -1}, dy={-1, 0, 1, 0};
    static final int INF = 1000000000;
    
    public static void main(String[] args)
    {
        int T = sc.nextInt();
        for(int test = 0; test < T; test++){
            int n = sc.nextInt();
            int m = sc.nextInt();
            char[][] g = new char[n][];
            for(int i = 0; i < n; i++){
                g[i] = sc.next().toCharArray();
            }
            int[][] d = new int[n][m];
            for(int i = 0; i < n; i++){
                for(int j = 0; j < m; j++){
                    d[i][j] = INF;
                }
            }
            ArrayDeque<Point> que = new ArrayDeque<>();
            d[0][0] = 0;
            que.add(new Point(0, 0));
            while(que.size() > 0){
                Point now = que.poll();
                int i = now.x;
                int j = now.y;
                if(d[i][j] == INF){
                    continue;
                }
                if(g[i][j] == '.'){
                    for(int k = 0; k < 4; k++){
                        int ni = i + dy[k];
                        int nj = j + dx[k];
                        if(0 <= ni && ni < n && 0 <= nj && nj < m && d[ni][nj] > d[i][j] + 1){
                            d[ni][nj] = d[i][j] + 1;
                            que.add(new Point(ni, nj));
                        }
                    }
                }else if(g[i][j] == 'L'){
                    int ni = i;
                    int nj = j - 1;
                    if(0 <= ni && ni < n && 0 <= nj && nj < m && d[ni][nj] > d[i][j] + 1){
                            d[ni][nj] = d[i][j] + 1;
                            que.add(new Point(ni, nj));
                    }
                }else if(g[i][j] == 'R'){
                    int ni = i;
                    int nj = j + 1;
                    if(0 <= ni && ni < n && 0 <= nj && nj < m && d[ni][nj] > d[i][j] + 1){
                            d[ni][nj] = d[i][j] + 1;
                            que.add(new Point(ni, nj));
                    }
                }else if(g[i][j] == 'U'){
                    int ni = i - 1;
                    int nj = j;
                    if(0 <= ni && ni < n && 0 <= nj && nj < m && d[ni][nj] > d[i][j] + 1){
                            d[ni][nj] = d[i][j] + 1;
                            que.add(new Point(ni, nj));
                    }
                }else{
                    int ni = i + 1;
                    int nj = j;
                    if(0 <= ni && ni < n && 0 <= nj && nj < m && d[ni][nj] > d[i][j] + 1){
                            d[ni][nj] = d[i][j] + 1;
                            que.add(new Point(ni, nj));
                    }
                }
            }
            if(d[n-1][m-1] == INF){
                System.out.println("kusoge-");
            }else{
                System.out.println(d[n-1][m-1]);
            }
        }
    }
}