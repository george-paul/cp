#include <iostream>
#include <vector>
using namespace std;

// --- AC ---

void solve()
{
	unsigned long long int  n;
	cin>>n;
	unsigned long long int outer = 4*n;
	unsigned long long int x = n-2;
	unsigned long long int inner = (x*(x+1)) + n;
	cout<< inner + outer;
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