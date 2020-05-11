#include <fstream>
#include <string>

#include "constraints.h"
#include "testlib.h"

using namespace std;

int main(int argc, char* argv[]) {
     registerValidation(argc, argv);

    int T = inf.readInt(MIN_T, MAX_T, "T");
    inf.readEoln();

    while (T > 0) {
        int K = inf.readInt(MIN_K, MAX_K, "K");
        inf.readEoln();
        for (int i = 0; i < K; i++) {
            int A = inf.readInt(MIN_A, MAX_A, "A");
            if (i != K - 1) inf.readSpace();
            else            inf.readEoln();
        }

        int N = inf.readInt(MIN_N, MAX_N, "N");
        inf.readEoln();
        for (int i = 0; i < N; i++) {
            int B = inf.readInt(1, K, "B");
            inf.readEoln();
        }

        T--;
    }
    inf.readEof();

    return 0;
}
