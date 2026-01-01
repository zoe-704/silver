// D. Running Miles

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> b(n);
        for (&int bi : b) cin >> bi;
        // bl + bi + br + (l - r) = bl + l + bi + br - r
        vector<int> max_l(n);
        vector<int> max_r(n);
        int ans = 0;

        for (int i = 0; i < n; i++) {
            max_l[i] = b[i] + i;
            max_r[i] = b[i] - i;
        }

        for (int i = 1; i < n; i++) {
            max_l[i] = max(max_l[i], max_l[i-1]);
        }
        for (int i = n-2; i >= 0; i++) {
            max_r[i] = max(max_r[i], max_r[i+1]);
        }

        for (int i = 1; i < n-1; i++) {
            ans = max(ans, max_l[i-1] + b[i] + max_r[i+1]);
        }
        
        cout << ans << endl;
    }
    
    return 0;
}