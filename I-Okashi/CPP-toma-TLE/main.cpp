#include<iostream>
#include<vector>
#include<bitset>
#include<algorithm>
#include<cmath>
using namespace std;
using ll = long long;


// this solution order is
// 
// O(T*N*A^2)
// if A<10^4, O(10^13) <- cannot end & memory exceeded
// if A<3*10^3, O(10^12) <- about 10min & memory safe(this code is for this)

constexpr ll SIZE = 1e7;// >= A^2
int main() {
    ll T;
    cin >> T;
    for (int t = 1; t <= T; t++) {
        ll N, X;
        cin >> N >> X;
        vector<ll> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        bitset<SIZE> bits;
        bits[0] = true;
        for (int i = 1; i < SIZE; i++) {
            bits[i] = false;
            for (int a : A) if (0 <= i - a && bits[i - a]) {
                bits[i] = true;
                break;
            }
        }
        ll res = 2e18;
        for (int i = 0; i < SIZE && i <= X; i++) if (bits[i]) {
            for (int a : A) {
                if(a==1){
                  res=X;
                  break;
                }
                ll left = X - i;
                ll loop = (left+a-1) / a;
                ll tres = loop * a + i;
                res = min(res, tres);
            }
        }
        //cerr << "---" << endl;
        cout << res << endl;
        //cerr << "---" << endl;
    }
    return 0;
}

