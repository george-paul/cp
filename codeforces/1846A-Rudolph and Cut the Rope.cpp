#include <iostream>
#include <vector>
using namespace std;

void solve()
{
	int n;
	cin>>n;
	int total = 0;
	for(int i=0; i<n; i++)
	{
		int a,b;
		cin>>a>>b;
		if(a>b) total++;
	}
	cout<<total;
}

// --- AC ---

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