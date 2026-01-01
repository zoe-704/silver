// Books

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
    int n, t; 
    cin >> n >> t;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int left = 0, right = 0, total_t = 0, ans = 0;
    while (right < n) {
        total_t += a[right];
        while (total_t > t) {
            total_t -= a[left];
            left++;
        }
        ans = max(ans, r - l + 1);
        right--;
    }


    cout << ans << endl;
    return 0;
}