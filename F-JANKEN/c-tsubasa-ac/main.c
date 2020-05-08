#include <stdio.h>

int n, t;
int y[512] = {}, k[512] = {};

int main() {
  scanf("%d", &t);
  while (t--) {
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) scanf("%d", &y[i]);
    for (int i = 0; i < n; ++i) scanf("%d", &k[i]);
    int win = 0, lose = 0, draw = 0;
    for (int i = 0; i < n; ++i) {
      if (y[i] == k[i])
        ++draw;
      else if ((y[i] - k[i] + 3) % 3 == 2)
        ++win;
      else
        ++lose;
    }
    printf("%d %d %d\n", win, lose, draw);
  }
  return 0;
}