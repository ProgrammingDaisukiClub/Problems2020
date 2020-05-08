#include "testlib.h"
#include "constraints.h"
#include <iostream>
using namespace std;

void check_case(){
  int N = inf.readInt(MIN_N, MAX_N, "N");
  inf.readSpace();
  inf.readInt(MIN_K, MAX_K, "K");
  ifs.readSpace();
  inf.readInt(MIN_X, MAX_X, "X");
  ifs.readEoln();
  for(int i = 0; i < N; ++i) {
    if(i != 0) {
      inf.readSpace();
    }
    inf.readInt(MIN_A, MAX_A, "A_i");
  }
  inf.readEoln();
}

int main(int argc,char* argv[]) {
  registerValidation(argc, argv);

  int cases = inf.readInt(1, 100, "cases");
  inf.readEoln();

  for(int i = 0; i < cases; ++i){
      check_case();
  }

  inf.readEof();
  return 0;
}
