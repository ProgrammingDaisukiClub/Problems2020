#include "testlib.h"
#include "constraints.h"
#include <iostream>
using namespace std;

vector<vector<long long>> table;

void construct_table() {
  table.resize(MAX_NK + 1, vector<long long>(MAX_NK + 1, 0));

  for(int i = 0; i <= MAX_NK; i++){
    table[i][0] = 1;
    table[i][i] = 1;
  }

  for(int i = 1; i <= MAX_NK; i++) for(int j = 1; j < i; j++) {
    table[i][j] = (table[i - 1][j - 1] + table[i - 1][j]);
  }
}

void check_case(){
  int N = inf.readInt(MIN_NK, MAX_NK, "N");
  inf.readSpace();
  int K = inf.readInt(MIN_NK, MAX_NK, "K");
  inf.readSpace();

  int min_X = 1;
  int max_X = table[N][K];

  inf.readInt(min_X, max_X, "X");
  inf.readEoln();
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

  int cases = inf.readInt(1, 50, "cases");
  inf.readEoln();

  construct_table();

  for(int i = 0; i < cases; ++i){
      check_case();
  }

  inf.readEof();
  return 0;
}
