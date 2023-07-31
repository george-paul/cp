#include <iostream>
#include <vector>
#include <set>
using namespace std;

void solve()
{
	bool no = false;
	set<long long int> A;
	int n;
	cin>>n;
	for (int i = 0; i < n; i++)
	{
		long long int x;
		cin>>x;
		if(A.count(x) == 1)
		{
			no = true;
			continue;
		}
		else 
		{
			A.insert(x);
		}
	}
	if(no)
	{
		cout<<"NO";
		return;
	}
	cout<<"YES";
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