#include <bits/stdc++.h>
#include "constraints.h"
#include "testlib.h"

using namespace std;

void random(string filename, int T, int min_N, int max_N, int min_X, int max_X){
    ofstream of(filename);
    of << T << endl;
    while(T--){
        int N = rnd.next(min_N, max_N);
        of << N << endl;
        for(int i=0;i<N;++i){
            if(i != 0) of << " ";
            int X = rnd.next(min_X, max_X);
            of << X;
        }
        of << endl;
    }
}

signed main(int argc, char* argv[]){
    registerGen(argc, argv, 1);
    random("small.in", 5, MIN_N, 10, -10, 10);
    random("medium.in", 50, MIN_N, MAX_N, MIN_X, MAX_X);
    random("large.in", 100, MIN_N, MAX_N, MIN_X, MAX_X);
    for(int i=0;i<10;++i){
        random("random-test" + to_string(i) + ".in", 100, MIN_N, MAX_N, MIN_X, MAX_X);
    }
    return 0;
}