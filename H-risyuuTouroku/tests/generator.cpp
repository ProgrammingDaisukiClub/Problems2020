#include "constraints.h"
#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;

int nCk(int n, int k) {
    long long res = 1;
    for(int i = n; i >= n - k + 1; i--) {
        res *= i;
    }
    for(int i = 1; i <= k; i++) {
        res /= i;
    }
    return (int)res;
}

void random(string filename, int t, int min_nk, int max_nk, int min_a,
            int max_a) {
    ofstream of(filename);
    of << t << endl;
    while(t--) {
        int n = rnd.next(min_nk, max_nk);
        int k = rnd.next(1, n);
        int x = rnd.next(1, nCk(n, k));
        of << n << " " << k << " " << x << endl;
        for(int i = 0; i < n; i++) {
            if(i == n - 1) {
                of << rnd.next(min_a, max_a) << endl;
            } else {
                of << rnd.next(min_a, max_a) << " ";
            }
        }
    }
    of.close();
}

signed main(int argc, char *argv[]) {
    registerGen(argc, argv, 1);
    random("small.in", 5, MIN_NK, 5, MIN_A, MAX_A);
    random("medium.in", 50, 6, 10, MIN_A, MAX_A);
    random("large.in", 100, 11, MAX_NK, MIN_A, MAX_A);
    for(int i = 0; i < 10; i++) {
        random("random-test" + to_string(i) + ".in", 100, MIN_NK, MAX_NK, MIN_A,
               MAX_A);
    }
    return 0;
}
