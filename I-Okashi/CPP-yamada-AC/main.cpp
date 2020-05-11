#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#include <algorithm>

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

#define INF (1e18+1)
#define mod 1000000007

struct state {
    int r;
    long long d;
};

bool operator<(const state& a, const state& b) {
    return a.d > b.d;
}

void solve() {
    long long N;
    long long X;
    cin >> N >> X;
    vector<long long> A(N);
    rep(i, N) {
        cin >> A[i];
    }

    sort(all(A));
    uni(A);

    N = A.size();
    long long M = A[0];
    priority_queue<state> que;
    que.push((state){0, 0});
    vector<long long> dist(M, INF);
    while(!que.empty()) {
        state s = que.top(); que.pop();
        if(dist[s.r] != INF) continue;
        dist[s.r] = s.d;
        repl(i, 1, N) {
            que.push((state){(s.r + A[i]) % M, s.d + A[i]});
        }
    }

    long long res = 0;
    rep(r, M) {

        long long rr = X % M;
        long long mx;
        if(rr < r) {
            mx = X - rr + r;
        } else {
            mx = X - rr + r + M;
        }
        res += min(dist[r], mx) / M;
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
