#include <stdbool.h>
#include <stdio.h>

int t, n, k;
int a[128] = {};

int main() {
  scanf("%d", &t);
  while (t--) {
    bool res = true;
    scanf("%d", &k);
    for (int i = 0; i < k; ++i) scanf("%d", &a[i + 1]);
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
      int b;
      scanf("%d", &b);
      if (--a[b] < 0) res = false;
    }
    if (res)
      printf("wa-i\n");
    else
      printf("e-n\n");
  }
  return 0;
}