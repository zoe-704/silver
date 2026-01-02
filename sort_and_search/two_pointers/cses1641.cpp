// Sum of Three Values
// not tested

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

    
    for (int i = 1; i <= n; i++) {
        int l = 1, r = n;
        while (l < r) {
            int target_x = x - a[i].first;
            int sum = a[l].first + a[r].first;
            if ((l != i && r != i && sum == target_x)) {
                cout << a[i].second << " " << a[l].second << " " << a[r].second << endl; 
                return 0;
            }
            if (sum < target_x) l++;
            else r--;
        }
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}