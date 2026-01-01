// 2D Prefix Sums
// Forest Queries

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

    int n; cin >> n >> q;
    int forest[n+1][n+1];
    int prefix[n+1][n+1];

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            char a; cin >> a;
            if (a == '.') forest[i][j] = 0;
            else forest[i][j] = 1;
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            prefix[i][j] = forest[i][j] + prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1];
        }
    }

    while (q--) {
        int y1, x1, y2, x2; 
        cin >> y1 >> x1 >> y2 >> x2;
        cout << prefix[y][x] - prefix[y-1][x] - prefix[y][x-1] + prefix[y-1][x-1] << endl;
    }

    return 0;
}