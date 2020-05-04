#include <bits/stdc++.h>
#include "constraints.h"
#include "testlib.h"

using namespace std;

void random(string filename, int max_T, int max_D, int max_W, int max_A){
    ofstream of(filename);
    int T = rnd.next(1, max_T);
    of << T << endl;
    int D, W, A, K;
    while(T--){
        K = rnd.next(1, 2);
        while(true){
            W = rnd.next(1, max_W);
            A = rnd.next(1, max_A);
            D = W*A*K;
            if(1<=D && D <= max_D){
                break;
            }else{
                continue;
            }
        }
        of << D << " ";
        of << W << " ";
        of << A << endl;
    }
}

signed main(int argc, char* argv[]){
    registerGen(argc, argv, 1);
    random("small.in", SMALL_MAX_T, SMALL_MAX_D, SMALL_MAX_W, SMALL_MAX_A);
    random("large.in", LARGE_MAX_T, LARGE_MAX_D, LARGE_MAX_W, LARGE_MAX_A);
    for(int i=0;i<10;++i){
        random("random-test" + to_string(i) + ".in", LARGE_MAX_T, LARGE_MAX_D, LARGE_MAX_W, LARGE_MAX_A);
    }
    return 0;
}