#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

using ll = long long;

struct as 
{
	ll va; // val
	ll ma; // maxTillHere
	int id;
};

void solve()
{
	int n,q;
	cin>>n>>q;
	// val, maxTillHere, index
	vector<as> a(n,{-1,-1,-1});
	long long maxTillHere = -1;
	for (int i = 0; i < n; i++)
	{
		long long val;
		cin>>val;
		if(val > maxTillHere)
		{
			maxTillHere = val;
		}
		a[i] = {val, maxTillHere, i};
	}
	vector<long long> suma(n,-1);
	suma[0] = a[0].va;
	for (int i = 1; i < n; i++)
	{
		suma[i] = suma[i-1] + a[i].va;
	}

	vector<as> oga = a;
	sort(a.begin(), a.end(), [] (as a, as b) {
		return a.ma<b.ma;
	});

	auto getMaxStairIndex = [&] (ll x) {
		int hi = n-1;
		int lo = 0;
		while (hi >= lo)
		{
			if(hi == lo)
				return a[hi].id;
			int mi = (hi + lo) / 2;
			ll miVal = a[mi].ma;
			if(x == miVal)
				return a[mi].id;
			else if(miVal < x)
			{
				lo = mi+1;
			}
			else
			{
				hi = mi;
			}
		}
	};

	int k;
	for (int i = 0; i < q; i++)
	{
		cin>>k;
		int reqIdx = getMaxStairIndex(k);
		if(reqIdx == 0 && (oga[reqIdx].va > k))
		{
			cout<<0<<" ";
			continue;
		}
		if(oga[reqIdx].ma == k)
		{
			while(oga[reqIdx].ma == k)
				reqIdx++;
		}
		if(reqIdx >= n) reqIdx = n-1;
		if(oga[reqIdx].va > k) reqIdx -= 1;
		cout<<suma[reqIdx]<<" ";
	}
}

int main()
{
	// test input
  #ifndef ONLINE_JUDGE
		freopen("C:/SSDFiles/GitStuff/cp/input.txt", "r", stdin);
	#endif

	int T;
	cin>>T;
	while(T--)
	{
		solve();
		cout<<endl;
	}
}