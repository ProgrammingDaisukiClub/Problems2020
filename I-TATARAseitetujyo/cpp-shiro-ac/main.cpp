#include <iostream>
#include <queue>
#include <string>
#include <utility>
#include <vector>
using namespace std;
#define ALL(v) (v).begin(), (v).end()
const int INF = 1 << 30;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

using P = pair<int, int>;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        vector<string> g(n);
        for(int i = 0; i < n; i++) {
            cin >> g[i];
        }
        vector<vector<int>> d(n, vector<int>(m, INF));
        vector<vector<P>> par(n, vector<P>(m, P(-1, -1)));
        d[0][0] = 0;
        queue<P> que;
        que.emplace(P(0, 0));
        while(que.size()) {
            auto now = que.front();
            que.pop();
            if(d[now.first][now.second] == INF) {
                continue;
            }
            if(g[now.first][now.second] == '.') {
                for(int i = 0; i < 4; i++) {
                    int ni = now.first + dy[i];
                    int nj = now.second + dx[i];
                    if(0 <= ni && ni < n && 0 <= nj && nj < m) {
                        if(d[ni][nj] > d[now.first][now.second] + 1) {
                            d[ni][nj] = d[now.first][now.second] + 1;
                            par[ni][nj] = now;
                            que.emplace(P(ni, nj));
                        }
                    }
                }
            } else if(g[now.first][now.second] == 'L') {
                int ni = now.first;
                int nj = now.second - 1;
                if(0 <= ni && ni < n && 0 <= nj && nj < m) {
                    if(d[ni][nj] > d[now.first][now.second] + 1) {
                        d[ni][nj] = d[now.first][now.second] + 1;
                        par[ni][nj] = now;
                        que.emplace(P(ni, nj));
                    }
                }
            } else if(g[now.first][now.second] == 'R') {
                int ni = now.first;
                int nj = now.second + 1;
                if(0 <= ni && ni < n && 0 <= nj && nj < m) {
                    if(d[ni][nj] > d[now.first][now.second] + 1) {
                        d[ni][nj] = d[now.first][now.second] + 1;
                        par[ni][nj] = now;
                        que.emplace(P(ni, nj));
                    }
                }
            } else if(g[now.first][now.second] == 'U') {
                int ni = now.first - 1;
                int nj = now.second;
                if(0 <= ni && ni < n && 0 <= nj && nj < m) {
                    if(d[ni][nj] > d[now.first][now.second] + 1) {
                        d[ni][nj] = d[now.first][now.second] + 1;
                        par[ni][nj] = now;
                        que.emplace(P(ni, nj));
                    }
                }
            } else {
                int ni = now.first + 1;
                int nj = now.second;
                if(0 <= ni && ni < n && 0 <= nj && nj < m) {
                    if(d[ni][nj] > d[now.first][now.second] + 1) {
                        d[ni][nj] = d[now.first][now.second] + 1;
                        par[ni][nj] = now;
                        que.emplace(P(ni, nj));
                    }
                }
            }
        }
        if(d[n - 1][m - 1] == INF) {
            cout << "kusoge-\n";
            continue;
        }
        cout << d[n - 1][m - 1] << "\n";
        // P tmp = P(n - 1, m - 1);
        // vector<P> path;
        // while(tmp != P(0, 0)) {
        //     path.emplace_back(tmp);
        //     tmp = par[tmp.first][tmp.second];
        // }
        // path.emplace_back(tmp);
        // reverse(ALL(path));
        // for(const auto &p : path) {
        //     print(p.first, p.second);
        // }
    }
}