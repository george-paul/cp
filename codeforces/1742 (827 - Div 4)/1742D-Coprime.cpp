#include <iostream>
#include <vector>
#include <array>
using namespace std;

int gcd(int big, int sma)
{
	if(sma == 0)
		return big;
	if(big == sma) return big;
	else
		return gcd(sma, (big % sma));
}

void solve()
{
	int n;
	cin>>n;
	vector<int> a(n, -1);
	for (int i = 0; i < n; i++)
	{
		cin>>a[i];
	}

	int maxSum = -3;
	int i=n-1;
	int j=n-2;
	while (i > -1 && j > -1)
	{
		int gdiv = gcd(a[i],a[j]);
		if(gdiv == 1)
		{
			maxSum = i + j;
		}
		if(i==j)
	}
	
	cout<<maxSum+2;
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