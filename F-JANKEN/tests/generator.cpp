#include <bits/stdc++.h>

#include "constraints.h"
#include "testlib.h"
using namespace std;

void random(string fname, int t, int minn, int maxn, int minky, int maxky);

signed main(int argc, char* argv[]) {
  registerGen(argc, argv, 1);
  random("small.in", 5, MIN_N, 10, MIN_KY, MAX_KY);
  random("medium.in", 50, 25, 50, MIN_KY, MAX_KY);
  random("large.in", 100, 50, 100, MIN_KY, MAX_KY);
  return 0;
}

void random(string fname, int t, int minn, int maxn, int minky, int maxky) {
  ofstream of(fname);
  of << t << endl;
  while (t--) {
    int n = rnd.next(max(minn, maxn / 2), maxn);
    of << n << endl;
    for (int i = 0; i < n; ++i) {
      if (i != 0) of << " ";
      of << rnd.next(minky, maxky);
    }
    of << endl;
    for (int i = 0; i < n; ++i) {
      if (i != 0) of << " ";
      of << rnd.next(minky, maxky);
    }
    of << endl;
  }
  of.close();
}
