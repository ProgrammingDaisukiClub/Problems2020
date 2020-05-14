#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define inf (long long)(3e18)

// calculate |gcd|.
// if  ether num is 0, return 0
long long GCD(long long left, long long right) {
  if (left == 0 || right == 0) return 0;
  if (left < 0) left *= -1;
  if (right < 0) right *= -1;
  if (left < right) {
    long long tmp = left;
    left = right;
    right = tmp;
  }
  long long nextnum, ansgcd = -1;
  while (ansgcd == -1) {
    nextnum = left % right;
    if (nextnum == 0) ansgcd = right;
    left = right;
    right = nextnum;
  }
  return ansgcd;
}

long long LCM(long long left, long long right) {
  return left / GCD(left, right) * right;
}

int t;
long long n, y;
long long a[128] = {};
bool dp[10000000] = {};

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
  if (y + x <= 10000000) {
    for (int i = 0; i <= y + x; ++i) dp[i] = false;
    dp[0] = true;
    for (int i = 0; i < n; ++i)
      for (int j = a[i]; j <= y + x; ++j) dp[j] |= dp[j - a[i]];
    for (long long i = y; i <= y + x; ++i)
      if (dp[i]) return i;
    return -1;
  }
  long long now = a[0];
  for (int i = 0; i < n; ++i) now = GCD(now, a[i]);
  return now * (y / now + (y % now != 0));
}