// Difference Arrays
// Greg and Array

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
    
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(n+1);
    for (&int ai : a) cin >> ai;

    vector<vector<int>(3)> operations;
    for (vector<int>(3) &operation : operations) {
        cin >> operate[0] >> operate[1] >> operate[2];
    }

    vector<long long> pre1(m + 2);
    vector<long long> pre2(n + 2, 0);
    for (int i = 0; i < k; i++) {
        int x, y;
        cin >> x >> y;
        pre1[x]++;
        pre1[y + 1]--;
    }

    for (int i = 1; i <= n ; i++) {
        pre2[i] += pre2[i-1];
        cout << a[i] + pre2[i] << ' ';
    }
    cout << endl;
    return 0;
}