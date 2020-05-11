#include <fstream>
#include <string>

#include "constraints.h"
#include "testlib.h"

using namespace std;

void check() {
  int N = inf.readInt(1, LARGE_MAX_N, "N");
  inf.readEoln();
  inf.readString(format("[0-9]{%d}", N), "s");
}

int main(int argc, char* argv[]) {
  registerValidation(argc, argv);
  int T = inf.readInt(1, LARGE_T, "T");
  ensuref((T == SMALL_T || T == LARGE_T || T == SAMPLE_T), "T");
  inf.readEoln();
  for (int i = 0; i < T; ++i) {
    check();
  }
  inf.readEof();
  return 0;
}