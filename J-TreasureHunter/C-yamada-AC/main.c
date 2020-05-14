#include <stdio.h>
#include <stdlib.h>
#define inf (long long)(5e18)

#define min(x,y) (x<y?x:y)

int t;
long long n, y;
long long a[256] = {};
long long dp[2][65536] = {};

int compare_ll(const void *a, const void *b) {
  return *(long long *)a - *(long long *)b;
}
long long solve();

int main() {
  scanf("%d", &t);
  while (t--) {
    scanf("%lld %lld", &n, &y);
    for (int i = 0; i < n; ++i) scanf("%lld", &a[i]);
    qsort(a, n, sizeof(long long), compare_ll);
    printf("%lld\n", solve());
  }
  return 0;
}

long long solve() {
  long long x = a[0];
  for (int i = 1; i < x; ++i) dp[0][i] = inf;
  dp[0][0] = 0;
  int flg = 1;
  for (int i = 0; i < n; ++i) {
    while (1) {
      for (int j = 0; j < x; ++j) {
        int to = (a[i] + j) % x;
        dp[flg][to] = dp[1 - flg][to];
        if (dp[flg][to] > dp[1 - flg][j] + a[i])
          dp[flg][to] = dp[1 - flg][j] + a[i];
      }
      flg = 1 - flg;
      if ((a[i] <<= 1LL) > y) break;
    }
  }
  long long answer = 0;
  for (int r = 0; r < x; ++r) {

    //printf("%d %lld\n", r, dp[1-flg][r]);

    long long rr = y % x;
    long long mx;
    if(rr < r) {
      mx = y - rr + r;
    } else {
      mx = y - rr + r + x;
    }
    // printf("%lld\n", mx);
    answer += min(dp[1-flg][r], mx) / x;

    //printf("%lld\n", min(dp[1-flg][r], mx) / x);

    // long long p = (y + i) % x;
    // if (dp[1 - flg][p] < y) return y + i;
  }
  return answer;
}
