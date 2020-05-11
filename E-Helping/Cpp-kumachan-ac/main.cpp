#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

string solve(vector<int>& a, vector<int>& b) {
    for (const int candy : b) {
        if (a[candy] == 0) return "e-n";
        a[candy]--;
    }
    return "wa-i";
}

int main() {
    int T; cin >> T;
    while (T > 0) {
        int k; cin >> k;
        vector<int> a;
        for (int i = 0; i < k; i++) {
            int e; cin >> e;
            a.push_back(e);
        }
        int n; cin >> n;
        vector<int> b;
        for (int i = 0; i < n; i++) {
            int e; cin >> e;
            e--;
            b.push_back(e);
        }
        cout << solve(a, b) << endl;
        T--;
    }
}