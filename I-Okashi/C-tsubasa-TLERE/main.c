#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define inf (long long)(3e18)

int t;
long long n, y;
long long a[128] = {};
bool dp[1000000] = {};

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
  for (int i = 0; i <= y + x; ++i) dp[i] = false;
  dp[0] = true;
  for (int i = 0; i < n; ++i)
    for (int j = a[i]; j <= y + x; ++j) dp[j] |= dp[j - a[i]];
  for (long long i = y; i <= y + x; ++i)
    if (dp[i]) return i;
  return -1;
}