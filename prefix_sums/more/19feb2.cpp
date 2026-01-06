// Painting the Barn
// Difference Array and 2D Prefix Sum

#include <bits/stdc++.h>
using namespace std;

const int SIZE = 1001;
int barn[SIZE][SIZE];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    freopen("paintbarn.in", "r", stdin);
    freopen("paintbarn.out", "w", stdout);
    
    int n, k;
    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        barn[x1][y1]++;
        barn[x1][y2]--;
        barn[x2][y1]--;
        barn[x2][y2]++;
    }
    int area = 0;
    for (int x = 0; x < SIZE; x++) {
        for (int y = 0; y < SIZE; y++) {
            if (x > 0) barn[x][y] += barn[x-1][y];
            if (y > 0) barn[x][y] += barn[x][y-1];
            if (x > 0 && y > 0) barn[x][y] -= barn[x-1][y-1];
            if (barn[x][y] == k) area++;
        }
    }
    cout << area << endl;

    return 0;
}