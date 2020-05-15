#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define inf (long long)(3e18)

int t;
long long n, y;
long long a[32] = {};
bool dp[10000000] = {};

long long min(const long long x, const long long y) { return x < y ? x : y; }
long long solve();

int main() {
  scanf("%d", &t);
  while (t--) {
    scanf("%lld %lld", &n, &y);
    for (int i = 0; i < n; ++i) scanf("%lld", &a[i]);
    printf("%lld\n", solve());
  }
  return 0;
}

long long solve() {
  for (int i = 0; i <= y; ++i) dp[i] = false;
  dp[0] = true;
  for (int i = 0; i < n; ++i)
    for (int j = a[i]; j <= y; ++j) dp[j] |= dp[j - a[i]];
  long long res = 0;
  for (int i = 1; i <= y; ++i)
    if (dp[i]) ++res;
  return y - res;
}