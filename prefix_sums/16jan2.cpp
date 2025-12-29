// Subsequences Summing to Sevens

#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("div7.in", "r", stdin);
	freopen("div7.out", "w", stdout);

    int N; cin >> N;
    int rem = 0;

    /*
        psum[r] - p[l-1] = 0 (mod 7)
        psum[r] = p[l-1] (mod 7)
        store index of first appearance of each mod (1-6)
    */

    int max_length = 0;
    vector<int>first_index(7, -1);
    first_index[0] = 0;

    for (int i = 1; i <= N; i++) {
        int cow;
        cin >> cow;
        rem = (rem + cow) % 7;

        if (first_index[rem] == -1) {
            first_index[rem] = i;
        }
        else {
            max_length = max(max_length, i - first_index[rem]);
        }
    }
    cout << max_length << endl;
    return 0;
}
