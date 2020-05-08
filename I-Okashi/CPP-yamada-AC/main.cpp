#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> P;

#define fi first
#define se second
#define repl(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define rep(i,n) repl(i,0,n)
#define all(x) (x).begin(),(x).end()
#define dbg(x) cout<<#x"="<<x<<endl
#define mmax(x,y) (x>y?x:y)
#define mmin(x,y) (x<y?x:y)
#define maxch(x,y) x=mmax(x,y)
#define minch(x,y) x=mmin(x,y)
#define uni(x) x.erase(unique(all(x)),x.end())
#define exist(x,y) (find(all(x),y)!=x.end())
#define bcnt __builtin_popcountll

#define INF 1e16
#define mod 1000000007

struct state {
    int r;
    long long d;
};

bool operator<(const state& a, const state& b) {
    return a.d > b.d;
}

void solve() {
    int N;
    long long X;
    cin >> N >> X;
    vector<int> A(N);
    rep(i, N) {
        cin >> A[i];
    }

    sort(all(A));
    uni(A);

    N = A.size();
    int M = A[0];
    priority_queue<state> que;
    que.push((state){0, 0});
    vector<long long> dist(M, -1);
    while(!que.empty()) {
        state s = que.top(); que.pop();
        if(dist[s.r] != -1) continue;
        dist[s.r] = s.d;
        repl(i, 1, N) {
            que.push((state){(s.r + A[i]) % M, s.d + A[i]});
        }
    }

    long long res = X + M;
    rep(r, M) {
        if(dist[r] == -1) continue;

        if(dist[r] >= X) {
            res = min(res, dist[r]);
        }else{
            long long val = (X / M) * M + r;
            if(val < X) val += M;
            res = min(res, val);
        }
    }
    cout << res << endl;
}

int main() {

    int T;
    cin >> T;
    while(T--) {
        solve();
    }

  return 0;
}
