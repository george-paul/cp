/*
SERVERS EG TC
3
19
13 15 9 6 9 15 6 19 18 19 6 16 3 4 6 4 15 2 9
10 7 8 16 19 2 7 16 11 16 11 12 9 20 1 6 15 8 10
11
2 8 10 9 2 15 13 11 10 3 14
19 16 20 1 1 6 3 2 14 15 19
15
19 15 8 9 20 12 6 13 19 18 19 10 19 6 8
15 3 7 1 20 1 8 13 12 1 5 9 1 6 12

OUTPUT
154
60
108
*/

#include <iostream>
#include <vector>
#include <climits>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    vector<vector<int>> dp(n, vector<int>(2, LLONG_MAX));
    dp[0][0] = a[0];
    for (int i = 1; i < n; i++) {
        dp[i][0] = min(dp[i - 1][0], dp[i - 1][1]) + a[i];
        if (i == 1) 
        {
            dp[i][1] = b[0] + b[1];
            continue;
        } else 
        {
            dp[i][1] = min(dp[i - 2][0] + b[i] + b[i - 1], dp[i - 1][1] + b[i]);
        }
    }
    cout << min(dp[n - 1][0], dp[n - 1][1]) << "\n";
}
signed main() {
    #ifndef ONLINE_JUDGE
		freopen("C:/SSDFiles/GitStuff/cp/input.txt", "r", stdin);
	#endif
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}