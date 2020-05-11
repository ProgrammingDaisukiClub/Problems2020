#include <fstream>
#include <string>

#include "constraints.h"
#include "testlib.h"

using namespace std;

void check() {
  int N = inf.readInt(1, MAX_NM, "N");
  inf.readSpace();
  int M = inf.readInt(1, MAX_NM, "M");
  inf.readEoln();
  for (int i = 0; i < N; ++i) {
    string g;
    auto f = format("[RLUD.]{%d}", M);
    if (i == 0)
      f = format("[RLD.]{%d}", M);
    else if (i == N - 1)
      f = format("[RLU.]{%d}", M);
    g = inf.readString(f, format("g[%d]", i));
    ensuref(g[0] != 'L' && g[M - 1] != 'R', "g edge");
  }
}

int main(int argc, char* argv[]) {
  registerValidation(argc, argv);
  int T = inf.readInt(1, MAX_T, "T");
  inf.readEoln();
  for (int i = 0; i < T; ++i) {
    check();
  }
  inf.readEof();
  return 0;
}