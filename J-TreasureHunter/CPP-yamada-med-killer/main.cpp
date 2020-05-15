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

#define INF (3e18)
#define mod 1000000007

void solve() {
    long long N;
    long long M;
    cin >> N >> M;
    vector<long long> A(N);
    rep(i, N) {
        cin >> A[i];
    }

    sort(all(A));
    uni(A);

    if(M > 1000) {
        cout << M << endl;
        return ;
    }

    N = A.size();
    vector<bool> impossible(M + 1, true);
    rep(i, N) rep(j, i + 1) {
        rep(p, M + 1) {
            rep(q, M + 1) {
                if(A[i] * p + A[j] * q > M) break;
                impossible[A[i] * p + A[j] * q] = false;
            }
        }
    }

    int res = 0;
    rep(i, M + 1) {
        if(impossible[i]) res++;
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
