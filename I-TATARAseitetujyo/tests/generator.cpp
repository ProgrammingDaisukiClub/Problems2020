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
    while(1) {
        if(i == 0 && id == 2) {
            id = rnd.next(0, 4);
            continue;
        }
        if(i == n - 1 && id == 3) {
            id = rnd.next(0, 4);
            continue;
        }
        if(j == 0 && id == 0) {
            id = rnd.next(0, 4);
            continue;
        }
        if(j == m - 1 && id == 1) {
            id = rnd.next(0, 4);
            continue;
        }
        break;
    }
    return toGrid[id];
}

// 完全ランダム
vector<string> random1(int n, int m) {
    vector<string> g(n, string(m, ' '));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            g[i][j] = gen_tile(i, j, n, m);
        }
    }
    return g;
}

// 対角線
vector<string> random2(int n, int m, bool reachable) {
    vector<string> g(n, string(m, '-'));
    const int dx[] = {1, 0};
    const int dy[] = {0, 1};
    P now = P(0, 0);
    vector<P> path;
    while(now != P(n - 1, m - 1)) {
        path.emplace_back(now);
        if(now.first == n - 1) {
            g[now.first][now.second] = 'R';
            now.second++;
            continue;
        }
        if(now.second == m - 1) {
            g[now.first][now.second] = 'D';
            now.first++;
            continue;
        }
        int k = rnd.next(0, 1);
        g[now.first][now.second] = (k ? 'D' : 'R');
        now.first += dy[k];
        now.second += dx[k];
    }
    if(!reachable) {
        int cnt = rnd.next(1, 3);
        while(cnt--) {
            int i = rnd.next(0, (int)path.size() - 1);
            g[path[i].first][path[i].second] =
                gen_tile(path[i].first, path[i].second, n, m);
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(g[i][j] == '-') {
                g[i][j] = gen_tile(i, j, n, m);
            }
        }
    }
    return g;
}

// 蛇腹
vector<string> random3(int n, int m, bool reachable) {
    vector<string> g(n, string(m, '-'));
    vector<int> tate;
    {
        int now = n - 1;
        while(now != 0) {
            int tmp = rnd.next(1, now);
            now -= tmp;
            tate.emplace_back(tmp);
        }
    }
    vector<P> path;
    {
        P now = P(0, 0);
        for(const auto &dy : tate) {
            if(now.second == 0) {
                for(; now.second < m - 1; now.second++) {
                    g[now.first][now.second] = 'R';
                    path.emplace_back(now);
                }
            } else if(now.second == m - 1) {
                for(; now.second > 0; now.second--) {
                    g[now.first][now.second] = 'L';
                    path.emplace_back(now);
                }
            }
            for(int i = 0; i < dy; i++) {
                g[now.first][now.second] = 'D';
                now.first++;
                path.emplace_back(now);
            }
            if(now == P(n - 1, m - 1)) {
                break;
            }
        }
        if(now != P(n - 1, m - 1)) {
            for(; now.second < m; now.second++) {
                g[now.first][now.second] = 'R';
                path.emplace_back(now);
            }
        }
        g[n - 1][m - 1] = '.';
    }
    if(!reachable) {
        int cnt = rnd.next(1, 3);
        while(cnt--) {
            int i = rnd.next(0, (int)path.size() - 1);
            g[path[i].first][path[i].second] =
                gen_tile(path[i].first, path[i].second, n, m);
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(g[i][j] == '-') {
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
    while(t--) {
        n = rnd.next(min_nm, max_nm);
        m = rnd.next(min_nm, max_nm);
        of << n << " " << m << endl;
        vector<string> g;
        int num = rnd.next(1, 3);
        bool reachable;
        switch(num) {
        case 1:
            g = random1(n, m);
            break;
        case 2:
            reachable = (rnd.next(1, 5) > 2);
            g = random2(n, m, reachable);
            break;
        case 3:
            reachable = (rnd.next(1, 5) > 2);
            g = random3(n, m, reachable);
            break;
        default:
            break;
        }
        for(int i = 0; i < n; i++) {
            of << g[i] << endl;
        }
    }
    of.close();
}

signed main(int argc, char *argv[]) {
    registerGen(argc, argv, 1);
    testcase_gen("small.in", 5, MIN_NM, 5);
    // testcase_gen("medium.in", 20, 6, 10);
    testcase_gen("large.in", 50, 11, MAX_NM);
    for(int i = 0; i < 10; i++) {
        testcase_gen("random-test" + to_string(i) + ".in", MAX_T, MIN_NM,
                     MAX_NM);
    }
    return 0;
}
