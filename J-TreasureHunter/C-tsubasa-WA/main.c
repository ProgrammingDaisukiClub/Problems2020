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
  long long p = min(y, 10000000), g = a[0];
  for (int i = 0; i < n; ++i) g = GCD(g, a[i]);
  for (int i = 0; i <= p; ++i) dp[i] = false;
  dp[0] = true;
  for (int i = 0; i < n; ++i)
    for (int j = a[i]; j <= p; ++j) dp[j] |= dp[j - a[i]];
  long long res = 0;
  for (int i = 1; i <= p; ++i)
    if (dp[i]) ++res;
  return y - res - (y / g - p / g);
}