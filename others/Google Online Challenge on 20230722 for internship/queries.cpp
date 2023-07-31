/*
QUERIES EG TC
3
10
84 2 14 28 42 13 35 65 51 51
20 1 8 14 40 13 33 21 5 45
85 64 91 54 14 46 19 12 35 31
10
97 44 22 29 83 32 77 77 81 88
18 30 16 28 21 26 46 62 75 28
37 40 49 20 45 39 20 66 26 1
10
19 67 22 10 29 60 81 79 80 11 7 67 1 7 15 10 79 47 4 8 92 30 23 1 65 65 39 77 65 9
10
56 82 40 77 80 32 85 88 41 3
48 25 27 6 38 21 43 42 39 2
7 36 25 15 24 85 44 53 100

OUTPUT
37 4695
61 3485
37 6370
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

using ll = long long;
#define int ll

using vi = vector<int>;
using pii = pair<int, int>;
using vii = vector<pii>;

void solve()
{
	const int MOD = 1e9 + 7;
	int n; cin >> n;
	vi a(n), b(n), c(n);
	for (auto& s : a) cin >> s;
	for (auto& s : b) cin >> s;
	for (auto& s : c) cin >> s;

	auto verify = [&] (int x)
	{
		vii extra;
		ll pos = 0, neg = 0;
		for (int i = 0; i < n; i++)
		{
			if (a[i] > max(x, b[i]))
			{
				int r = a[i] - max(b[i], x);  
				pos += r;
				extra.push_back({c[i], r});
			}
			else
			{
				neg += max(0ll, x - a[i]);
			}
		}
		sort(extra.begin(), extra.end());
		if (pos < neg) return make_pair(-1ll, -1ll);
		ll cost = 0;
		for (int i = 0; i < extra.size(); i++)
		{
			int r = min(neg, extra[i].second);
			cost = (cost +  r * extra[i].first % MOD) % MOD;	
			neg -= r;
		}
		return make_pair(1ll, cost);
	};
	ll low = 0, high = 1e9 + 2, ans = 0;
	while (high > low + 1)
	{
		ll mid = low + (high - low) / 2;
		auto [x, y] = verify(mid);
		if (x == 1) low = mid, ans = y;
		else high = mid;
	}
	cout << low << " " << ans << "\n";
}
signed main(){ 
	#ifndef ONLINE_JUDGE
		freopen("C:/SSDFiles/GitStuff/cp/input.txt", "r", stdin);
	#endif
	int t; cin >> t;
	while (t--)
	solve(); 
}