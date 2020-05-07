#include <bits/stdc++.h>
#include "constraints.h"
#include "testlib.h"

using namespace std;

void random(string filename, int T, int max_N) {
    ofstream of(filename);
    of << T << endl;

    while(T--){
        int answer = rnd.next(1, 2);
        string input_str;
        if(answer == 1) {
            int length = rnd.next(1, max_N - 4);
            int position = rnd.next(0, length);
            for(int i = 0; i < position; i++) {
                input_str += (char)('0' + rnd.next(0, 9));
            }
            input_str += "2520";
            for(int i = position; i < length; i++) {
                input_str += (char)('0' + rnd.next(0, 9));
            }
        } else {
            int length = rnd.next(1, max_N);
            for(int i = 0; i < length; i++) {
                input_str += (char)('0' + rnd.next(0, 9));
            }
        }
        of << input_str.length() << endl;
        of << input_str << endl;
    }
}

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);
    random("small.in", SMALL_T, SMALL_MAX_N);
    random("large.in", LARGE_T, LARGE_MAX_N);
    for(int i = 0; i < 10; ++i) {
        random("random-test" + to_string(i) + ".in", LARGE_T, LARGE_MAX_N);
    }
    return 0;
}
