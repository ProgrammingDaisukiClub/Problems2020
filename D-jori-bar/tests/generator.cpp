#include <string>
#include <fstream>
#include "constraints.h"
#include "testlib.h"

using namespace std;

void random(string filename, int T, int min_N, int max_N, int min_K, int max_K) {
    ofstream of(filename);
    of << T << endl;
    while (T > 0) {
        int N = rnd.next(min_N, max_N);
        int K = rnd.next(min_K, max_K);
        of << N << ' ' << K << endl;
        T--;
    }
}

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);
    random("small.in", SMALL_T, MIN_N, SMALL_MAX_N, MIN_K, SMALL_MAX_K);
    random("large.in", LARGE_T, MIN_N, LARGE_MAX_N, MIN_K, LARGE_MAX_K);
    for (int i = 0; i < 10; ++i){
        random("random-test" + to_string(i) + ".in", LARGE_T, MIN_N, LARGE_MAX_N, MIN_K, LARGE_MAX_K);
    }
    return 0;
}
