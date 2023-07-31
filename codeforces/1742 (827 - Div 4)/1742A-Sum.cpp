#include <iostream>
#include <vector>
using namespace std;

void solve()
{
	int a,b,c;
	cin>>a>>b>>c;
	if(b+c==a)
	{
		cout<<"YES";
		return;
	}
	if(a+c==b)
	{
		cout<<"YES";
		return;
	}
	if(a+b==c)
	{
		cout<<"YES";
		return;
	}
	cout<<"NO";
	return;
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