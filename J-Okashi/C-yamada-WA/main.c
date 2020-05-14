#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define inf (long long)(3e18)

const int m = 30000 * 30000 / 10; // hack

long long gcd(long long a, long long b){
  return b ? gcd(b,a%b) : a;
}

int t;
long long n, y;
long long a[128] = {};
bool dp[m + 1] = {};

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
  long long z = y;
  if(z > m) z = m;
  long long x = a[0];
  for (int i = 0; i <= z; ++i) dp[i] = false;
  dp[0] = true;
  for (int i = 0; i < n; ++i)
    for (int j = a[i]; j <= z; ++j) dp[j] |= dp[j - a[i]];
  long long answer = 0;
  for (long long i = 1; i <= z; ++i)
    if (dp[i]) answer++;

  // (z,y]
  if(z < y) {
    int g = a[0];
    for(int i = 1; i < n; i++) {
      g = gcd(g, a[i]);
    }
    answer += (y / g) - (z / g);
  }
  return y - answer;

}
