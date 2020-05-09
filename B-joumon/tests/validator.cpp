#include "constraints.h"
#include "testlib.h"
#include <fstream>
#include <string>

using namespace std;

void check() {
    int D = inf.readInt(MIN_D, LARGE_MAX_D, "D");
    inf.readSpace();
    int W = inf.readInt(MIN_W, LARGE_MAX_W, "W");
    inf.readSpace();
    int A = inf.readInt(MIN_A, LARGE_MAX_A, "A");
    inf.readEoln();
}

signed main(int argc, char *argv[]) {
    registerValidation(argc, argv);
    int T = inf.readInt(MIN_T, LARGE_MAX_T, "T");
    inf.readEoln();
    for(int i = 0; i < T; i++) {
        check();
    }
    inf.readEof();
    return 0;
}