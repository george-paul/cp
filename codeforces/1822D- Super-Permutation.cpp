#include <iostream>
#include <vector>
using namespace std;

// --- AC ---

void solve()
{
	int n;
	cin>>n;
	
	if(n == 1)
	{
		cout<<1;
		return;
	}
	else if(n%2 != 0)
	{
		cout<<-1;
		return;
	}

	for(int i=0; i<n; i++)
	{
		if(i % 2)
		{
			cout<<i<<" ";
		}
		else
		{
			cout<<n-i<<" ";
		}
	}
}

int main()
{
	// test input
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