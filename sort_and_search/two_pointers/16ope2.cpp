// Diamond Collector

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("diamond.in", "r", stdin);
	freopen("diamond.out", "w", stdout);

    int n, k;
    cin >> n >> k;

    vector<int> diamonds(n);
    for (int& d : diamonds) {
        cin >> d;
    }
    sort(diamonds.begin(), diamonds.end());

    int left_take_d[n];
    int r = 0;
    for (int i = 0; i < n; i++) {
        while (r < n && diamonds[r] - diamonds[i] <= k) r++;
        left_take_d[i] = r - i;
    }

    vector<int> suf(n + 1, 0);
    for (int i = n - 1; i >= 0; i--) {
        suf[i] = max(suf[i + 1], left_take_d[i]);
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        int j = i + left_take_d[i];   
        ans = max(ans, left_take_d[i] + suf[j]);
    }

    cout << ans << endl;

    return 0;
}