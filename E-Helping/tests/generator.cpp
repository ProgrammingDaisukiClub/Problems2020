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
  random("medium.in", 50, 25, 50, 25, 50, MIN_A, MAX_A);
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
    int n = rnd.next(max(minn, maxn / 2), maxn);
    of << k << endl;
    for (int i = 0; i < k; ++i) {
      if (i != 0) of << " ";
      of << rnd.next(mina, maxa);
    }
    of << endl;
    of << n << endl;
    while (n--) of << rnd.next(1, k) << endl;
  }
  of.close();
}
