// Farmer John's Favorite Operation

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        /*
            ai - x = 0 (mod M)
            ai = x (mod M)
            min(|ai - x|, M - |ai - x|)
        */ 
        int n, m; cin >> n >> m;
        vector<int> a;
        for (int &ai : a) {
            cin >> ai;
            ai = ai % m;
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < n; i++) {
            a.push_back(a[i] + m);
        }
        vector<long long> psum(2*n + 1);
        for (int i = 0; i < 2 * n; i++) {
            psum[i + 1] = psum[i] + a[i];
        }
        long long ans = 1e9;
        for (int i = 0; i < n; i++) {
            ans = min(ans, pre[i+N] - pre[i+N-N/2] - (pre[i+N/2] - pre[i]));
        }
        cout << ans << endl;
    }
    return 0;
}