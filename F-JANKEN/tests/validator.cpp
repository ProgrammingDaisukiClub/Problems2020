#include <fstream>
#include <string>

#include "constraints.h"
#include "testlib.h"

using namespace std;

void check() {
  int N = inf.readInt(MIN_N, MAX_N, "N");
  inf.readEoln();
  for (int i = 0; i < N; ++i) {
    if (i != 0) inf.readSpace();
    int Y = inf.readInt(MIN_KY, MAX_KY, "Y");
  }
  inf.readEoln();
  for (int i = 0; i < N; ++i) {
    if (i != 0) inf.readSpace();
    int K = inf.readInt(MIN_KY, MAX_KY, "K");
  }
  inf.readEoln();
}

signed main(int argc, char* argv[]) {
  registerValidation(argc, argv);
  int T = inf.readInt(MIN_T, MAX_T, "T");
  inf.readEoln();
  for (int i = 0; i < T; ++i) {
    check();
  }
  inf.readEof();
  return 0;
}