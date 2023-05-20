// AC
#include <iostream>
#include <vector>
#include <limits>
using namespace std;

void solve()
{
	int n;
	cin>>n;
	unsigned long min = ULONG_MAX;
	bool allEven = true;
	for(int i = 0; i<n; i++)
	{
		unsigned long curr;
		cin>> curr;
		if(curr % 2 == 1) allEven = false;
		if(curr<min) min = curr;
	}
	if(allEven)
	{
		cout<<"YES";
		return;
	}
	if(min%2==0)
	{
		cout<<"NO";
	}
	else
	{
		cout<<"YES";
	}
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
		cout<<endl;
	}
}