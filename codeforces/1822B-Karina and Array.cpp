// AC
#include <iostream>
#include <vector>
using namespace std;

// --- AC ---

void solve()
{
	long long int n;
	cin>>n;
	long long int maxPosV = 0;
	long long int maxPosI = -1;
	long long int maxNegV = 0;
	long long int maxNegI = -1;
	vector<long long int> a;
	for(long long int i = 0; i<n; i++)
	{
		long long int x;
		cin>>x;
		a.push_back(x);
		if(x>maxPosV)
		{
			maxPosV = x;
			maxPosI = i;
		}
		if (x<maxNegV)
		{
			maxNegV = x;
			maxNegI = i;
		}
	}
	long long int maxRes = LLONG_MIN;
	for(long long int i = 0; i<n; i++)
	{
		long long int x = a[i];
		if(x*maxPosV > maxRes && i != maxPosI)
		{
			maxRes = x*maxPosV;
		}
		if(x*maxNegV > maxRes && i != maxNegI)
		{
			maxRes = x*maxNegV;
		}
	}
	cout<< maxRes; 	
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