#include <iostream>
#include <vector>
using namespace std;

// --- AC ---

void solve()
{
	int n;
	cin>>n;
	int t;
	cin>>t;

	vector<int> A;
	vector<int> B;
	for(int i = 0; i<n; i++)
	{
		int x;
		cin>>x;
		A.push_back(x);
	}
	for(int i = 0; i<n; i++)
	{
		int x;
		cin>>x;
		B.push_back(x);
	}

	int maxB = -1;
	int maxIndex = -1;
	for(int i = 0; i<n; i++)
	{
		int a = A[i];
		int b = B[i];

		a += i;
		if(a > t)
		{
			continue;
		}
		else
		{
			if(b > maxB)
			{
				maxB = b;
				maxIndex = i + 1;
			}
		}
	}
	cout << maxIndex;
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