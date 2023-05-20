// AC
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;


void solve()
{
	int n,k;
	cin>>n>>k;
	vector<pair<int, int>> a;
	vector<pair<int, int>> b;
	for(int i=0; i<n; i++)
	{
		int in;
		cin>>in;
		a.push_back({in, i});
	}
	for(int i=0; i<n; i++)
	{
		int in;
		cin>>in;
		b.push_back({in, i});
	}

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	for(int i=0; i<n; i++)
	{
		b[i].second = a[i].second;
	}

	sort(b.begin(), b.end(), [] (pair<int, int> a, pair<int, int> b) {return a.second < b.second;});

	for(auto x : b)
	{
		cout<<x.first<<" ";
	}

	cout<<endl;


	return;
}

int main()
{
  #ifndef ONLINE_JUDGE
		freopen("D:/FILES/Programming/input.txt", "r", stdin);
	#endif
	int T;
	cin>>T;
	while(T--)
	{
		solve();
	}
}