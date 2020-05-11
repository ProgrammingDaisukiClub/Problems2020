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

#define INF INT_MAX/3
#define mod 1000000007

struct state{
    int i,j;
};
string dir_str = "LURD";
int di[] = {0, -1, 0, +1};
int dj[] = {-1, 0, +1, 0};

void solve() {
    int N, M;
    cin >> N >> M;
    vector<string> S(N);
    rep(i, N) {
        cin >> S[i];
    }

    vector<vector<int>> dp(N, vector<int>(M, INF));
    dp[0][0]=0;
    queue<state> que;
    que.push((state){0,0});
    while(que.size()) {
        state s=que.front();
        que.pop();
        rep(dir,4){
            int ni=s.i+di[dir],nj=s.j+dj[dir];
            if(ni<0||ni>=N||nj<0||nj>=M)continue;
            if(S[s.i][s.j]!='.'&&S[s.i][s.j]!=dir_str[dir])continue;
            if(dp[ni][nj]!=INF)continue;
            que.push((state){ni,nj});
            dp[ni][nj]=dp[s.i][s.j]+1;
        }
    }
    if(dp[N-1][M-1]==INF) cout<<"kusoge-"<<endl;
    else cout<<dp[N-1][M-1]<<endl;
}

int main() {

    int T;
    cin >> T;
    while(T--) {
        solve();
    }

  return 0;
}
