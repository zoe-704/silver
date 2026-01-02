// Sum of Two Values

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, x:
    cin >> n >> x;

    vector<pair<int, int>> a(n);
    for (int i = 1; i <= n; i++) {
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a.begin(), a.end());
    int l = 1, r = n;
    while (l < r) {
        sum = a[l].first + a[r].first;
        
        if (sum == x) cout << a[l].second << " " << a[r].second << endl;
        else if (sum < x) l++;
        else r--;
    }
    if (l == r) cout << "IMPOSSIBLE" << endl;
    return 0;
}