#include <string>
#include <fstream>
#include "constraints.h"
#include "testlib.h"

using namespace std;

void random(string filename, int T, int max_N, long long max_M, int max_A) {
    ofstream of(filename);
    of << T << endl;
    while(T--){
        int N = rnd.next(1, max_N);
        long long M = rnd.next(1LL, max_M);
        of << N << " " << M << endl;
        of << rnd.next(1, max_A);
        for(int i = 0; i < N - 1; i++) {
            of << " " << rnd.next(1, max_A);
        }
        of << endl;
    }
}

void large_generator(string filename, int T, int max_N, long long max_M, int max_A) {
    ofstream of(filename);
    of << T << endl;

    // 90 cases : smallest_A >= 9000 and N >= 190 and M >= 10^17 (TLE)
    for(int i = 0; i < 90; i++, T--) {
        int N = rnd.next(max_N - 10, max_N);
        long long M = rnd.next(100000000000000000LL, max_M);
        of << N << " " << M << endl;

        vector<int> A;
        vector<bool> used(max_A + 1, false);

        int crt_A = rnd.next(9000, max_A);
        used[crt_A] = true;
        A.push_back(crt_A);

        while(A.size() < N) {
            crt_A = rnd.next(9000, max_A);
            if(used[crt_A]) continue;
            used[crt_A] = true;
            A.push_back(crt_A);
        }

        of << A[0];
        for(int i = 1; i < N; i++) {
            of << " " << A[i];
        }
        of << endl;
    }

    // 5 cases for random
    for(int i = 0; i < 5; i++, T--) {
        int N = rnd.next(1, max_N);
        long long M = rnd.next(1LL, max_M);
        of << N << " " << M << endl;

        vector<int> A;
        vector<bool> used(max_A + 1, false);

        int crt_A = rnd.next(1, max_A);
        used[crt_A] = true;
        A.push_back(crt_A);

        while(A.size() < N) {
            crt_A = rnd.next(1, max_A);
            if(used[crt_A]) continue;
            used[crt_A] = true;
            A.push_back(crt_A);
        }

        of << A[0];
        for(int i = 1; i < N; i++) {
            of << " " << A[i];
        }
        of << endl;
    }

    // 3 case for GCD \neq 1
    int gcd_set[] = {3, 5, 13};
    for(int i = 0; i < 3; i++, T--) {
        vector<int> A;
        for(int crt_A = gcd_set[i] * 500; A.size() < max_N && crt_A <= max_A; crt_A += gcd_set[i]){
            A.push_back(crt_A);
        }

        int N = A.size();
        long long M = rnd.next(1LL, max_M);
        of << N << " " << M << endl;
        of << A[0];
        for(int i = 1; i < N; i++) {
            of << " " << A[i];
        }
        of << endl;
    }

    // 1 case for answer = 0
    {
        int N = 1;
        long long M = max_M;
        of << N << " " << M << endl;
        of << 1 << endl;
        T--;
    }

    // 1 case for answer = M
    {
        int N = 1;
        long long M = max_A - 1;
        of << N << " " << M << endl;
        of << max_A << endl;
        T--;
    }

    assert(T == 0);
}

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);
    random("small.in", SMALL_T, SMALL_MAX_N, SMALL_MAX_M, SMALL_MAX_A);
    random("medium.in", MEDIUM_T, MEDIUM_MAX_N, MEDIUM_MAX_M, MEDIUM_MAX_A);
    large_generator("large.in", LARGE_T, LARGE_MAX_N, LARGE_MAX_M, LARGE_MAX_A);
    for(int i = 0;i < 10; ++i) {
        large_generator("random-test" + to_string(i) + ".in", LARGE_T, LARGE_MAX_N, LARGE_MAX_M, LARGE_MAX_A);
    }
    return 0;
}
