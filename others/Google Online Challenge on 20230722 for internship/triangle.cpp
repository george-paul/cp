/*
TRIANGLES TC 1
2
3
5
11111
01010
11011
3
4
1111
1011
0001

OUTPUT
0
1
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

const int MOD = 1e9 + 7;
using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

void solve()
{
  int n, m; cin >> n >> m;	
  vector<string> grid(n);
  vector<vector<int>> dp(n, vi(m));
  vector<vector<pii>> pad(n, vector<pii>(m));
  for (auto& s : grid) cin >> s;
  ll ans = 0;
  auto func = [&] ()
  {
    for (int i = n - 1; i >= 0; i--)
    {
      for (int j = 0; j < m; j++)
      {
        if (grid[i][j] == '1') continue;	
        pad[i][j].first = ((i + 1 == n || j == 0) ? 0 : pad[i + 1][j - 1].first) + 1;
        pad[i][j].second = ((i + 1 == n || j + 1 == m) ? 0 : pad[i + 1][j + 1].second) + 1;
        if (i == n - 1) dp[i][j] = 1;
        else dp[i][j] = min({pad[i][j].first, pad[i][j].second, dp[i + 1][j] + 1});		
        ans += dp[i][j] - 1;
      }
    }
  };
  func();
  reverse(grid.begin(), grid.end());
  for (auto& s : dp) for (auto& x : s) x = 0;
  for (auto& s : pad) for (auto& [x, y] : s) x = 0, y = 0;
  func();
  cout << ans << "\n";
}
signed main()
{
  #ifndef ONLINE_JUDGE
		freopen("C:/SSDFiles/GitStuff/cp/input.txt", "r", stdin);
	#endif
  int t; cin >> t;
  while (t--)
  solve(); 
}