#include <fstream>
#include <string>

#include "constraints.h"
#include "testlib.h"

using namespace std;

void check() {
  int N = inf.readInt(1, LARGE_MAX_N, "N");
  inf.readSpace();
  long long X = inf.readLong(1LL, LARGE_MAX_M, "X");
  inf.readEoln();
  vector<bool> ch(LARGE_MAX_A + 1, 0);
  for (int i = 0; i < N; ++i) {
    if (i != 0) inf.readSpace();
    int A = inf.readInt(1, LARGE_MAX_A, format("A[%d]", i));
    ensuref(!ch[A], "unique");
  }
  inf.readEoln();
}

int main(int argc, char* argv[]) {
  registerValidation(argc, argv);
  int T = inf.readInt(1, LARGE_T, "T");
  ensuref((T == SMALL_T || T == LARGE_T || T == SAMPLE_T || T == MEDIUM_T ||
           T == HAND_T),
          "T");
  inf.readEoln();
  for (int i = 0; i < T; ++i) {
    check();
  }
  inf.readEof();
  return 0;
}