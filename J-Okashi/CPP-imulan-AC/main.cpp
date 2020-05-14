// clang-format off
#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0;i<(int)(n);++i)
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define fi first
#define se second
#define dbg(x) cout<<#x" = "<<((x))<<endl
template<class T,class U> ostream& operator<<(ostream& o, const pair<T,U> &p){o<<"("<<p.fi<<","<<p.se<<")";return o;}
template<class T> ostream& operator<<(ostream& o, const vector<T> &v){o<<"[";for(T t:v){o<<t<<",";}o<<"]";return o;}
// clang-format on

using P = pair<ll, int>;

ll solve() {
    int n;
    ll m;
    cin >> n >> m;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    sort(all(a));

    const int X = a[0];

    vector<ll> dp(X);
    ll t = m + X;
    rep(i, X) {
        dp[t % X] = t;
        --t;
    }

    priority_queue<P, vector<P>, greater<P>> pq;
    pq.push({0, 0});
    dp[0] = 0;
    while (!pq.empty()) {
        P p = pq.top();
        pq.pop();
        int v = p.se;
        if (p.fi > dp[v]) continue;

        for (int i : a) {
            int nx = (v + i) % X;
            if (dp[nx] > dp[v] + i) {
                dp[nx] = dp[v] + i;
                pq.push({dp[nx], nx});
            }
        }
    }

    ll ans = 0;
    rep(i, X) ans += dp[i] / X;
    return ans;
}

int main() {
    int T;
    cin >> T;
    rep(i, T) cout << solve() << "\n";
    return 0;
}
