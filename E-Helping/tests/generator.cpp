#include <fstream>
#include <string>

#include "constraints.h"
#include "testlib.h"
using namespace std;

void random(string fname, int t, int mink, int maxk, int minn, int maxn,
            int mina, int maxa);

int main(int argc, char* argv[]) {
  registerGen(argc, argv, 1);
  random("small.in", 5, MIN_K, 10, MIN_N, 10, MIN_A, MAX_A);
  random("large.in", 100, 50, MAX_K, 50, MAX_N, MIN_A, MAX_A);
  for (int i = 0; i < 10; ++i)
    random("random-test" + to_string(i) + ".in", 100, MIN_K, MAX_K, MIN_N,
           MAX_N, MIN_A, MAX_A);
  return 0;
}

void random(string fname, int t, int mink, int maxk, int minn, int maxn,
            int mina, int maxa) {
  ofstream of(fname);
  of << t << endl;
  while (t--) {
    int k = rnd.next(max(mink, maxk / 2), maxk);
    int n = rnd.next(max({2, minn, maxn / 2}), maxn);
    of << k << endl;
    vector<int> a, candy, sum(k, 0);
    bool ch = 0;
    for (int i = 0; i < k; ++i) a.push_back(rnd.next(mina, maxa));
    for (int i = 0; i < n; ++i) {
      candy.push_back(rnd.next(0, k - 1));
      ++sum[candy.back()];
    }
    if (rnd.next(0, 1) == 0 || (!ch && t == 0)) {
      int id = rnd.next(0, n - 1), id2 = rnd.next(0, n - 1);
      while (id == id2) id2 = rnd.next(0, n - 1);
      if (candy[id] != candy[id2]) {
        --sum[candy[id2]];
        candy[id2] = candy[id];
        ++sum[candy[id]];
      }
      id = candy[id];
      a[id] = sum[id] - 1;
    }
    for (int i = 0; i < k; ++i) {
      if (i != 0) of << " ";
      of << a[i];
    }
    of << endl;
    of << n << endl;
    for (int i = 0; i < n; ++i) of << candy[i] + 1 << endl;
    // for (int i = 0; i < n; ++i) {
    //   if (i != 0) of << " ";
    //   of << candy[i] + 1;
    // }
    // of << endl;
  }
  of.close();
}
