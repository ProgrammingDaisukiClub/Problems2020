#include <fstream>
#include <iostream>
#include <string>

#include "constraints.h"
#include "testlib.h"
using namespace std;

using P = pair<int, int>;
const vector<char> toGrid = {'L', 'R', 'U', 'D', '.'};

char gen_tile(int i, int j, int n, int m) {
  int id = rnd.next(0, 4);
  if (i == 0) {
    while (id == 2) {
      id = rnd.next(0, 4);
    }
  }
  if (j == 0) {
    while (id == 0) {
      id = rnd.next(0, 4);
    }
  }
  if (j == m - 1) {
    while (id == 1) {
      id = rnd.next(0, 4);
    }
  }
  if (i == n - 1) {
    while (id == 3) {
      id = rnd.next(0, 4);
    }
  }
  return toGrid[id];
}

// 完全ランダム
vector<string> random1(int n, int m) {
  vector<string> g(n, string(m, ' '));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      g[i][j] = gen_tile(i, j, n, m);
    }
  }
  return g;
}

// 対角線
vector<string> random2(int n, int m) {
  vector<string> g(n, string(m, '-'));
  const int dx[] = {1, 0};
  const int dy[] = {0, 1};
  P now = P(0, 0);
  while (now != P(n - 1, m - 1)) {
    if (now.first == n - 1) {
      g[now.first][now.second] = 'R';
      now.second++;
      continue;
    }
    if (now.second == m - 1) {
      g[now.first][now.second] = 'D';
      now.first++;
      continue;
    }
    int k = rnd.next(0, 1);
    g[now.first][now.second] = (k ? 'D' : 'R');
    now.first += dy[k];
    now.second += dx[k];
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (g[i][j] == '-') {
        g[i][j] = gen_tile(i, j, n, m);
      }
    }
  }
  return g;
}

void testcase_gen(string fname, int t, int min_nm, int max_nm) {
  ofstream of(fname);
  of << t << endl;
  int n, m;
  while (t--) {
    n = rnd.next(min_nm, max_nm);
    m = rnd.next(min_nm, max_nm);
    of << n << " " << m << endl;
    int num = rnd.next(1, 2);
    vector<string> g;
    if (num == 1) {
      g = random1(n, m);
    } else {
      g = random2(n, m);
    }
    for (int i = 0; i < n; i++) {
      of << g[i] << endl;
    }
  }
  of.close();
}

signed main(int argc, char *argv[]) {
  registerGen(argc, argv, 1);
  //  testcase_gen("sample.in", 3, MIN_NM, MAX_NM);
  return 0;
}
