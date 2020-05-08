#include <iostream>
#include "constraints.h"
#include "testlib.h"

using namespace std;

void random(string filename, int T, int max_N, long long max_X, int max_A) {
    ofstream of(filename);
    of << T << endl;
    while(T--){
        int N = rnd.next(1, max_N);
        long long X = rnd.next(1LL, max_X);
        of << N << " " << X << endl;
        of << rnd.next(1, max_A);
        for(int i = 0; i < N - 1; i++) {
            of << " " << rnd.next(1, max_A);
        }
        of << endl;
    }
}

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);
    random("small.in", SMALL_T, SMALL_MAX_N, SMALL_MAX_X, SMALL_MAX_A);
    random("large.in", LARGE_T, LARGE_MAX_N, LARGE_MAX_X, LARGE_MAX_A);
    for(int i = 0;i < 10; ++i) {
        random("random-test" + to_string(i) + ".in", LARGE_T, LARGE_MAX_N, LARGE_MAX_X, LARGE_MAX_A);
    }
    return 0;
}
