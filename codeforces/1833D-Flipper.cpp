#include <iostream>
#include <vector>
using namespace std;

// --- AC ---

void printAfterOperation(int l, int r, vector<int> s, int n)
{
	// cout<<"l: "<<l;
	// cout<<", r: "<<r;
	// cout<<", n: "<<n<< endl;

	// suffix
	for(int i = r+1; i<n; i++) 
	{
		cout<<s[i]<<" ";
	}
	// reverse
	for(int i = r; i>=l; i--) 
	{
		cout<<s[i]<<" ";
	}
	// prefix
	for(int i = 0; i<l; i++) 
	{
		cout<<s[i]<<" ";
	}
	return;
}

void solve()
{
	int n;
	cin>>n;
	vector<int> p;
	for(int i = 0; i<n; i++)
	{
		int x;
		cin>>x;
		p.push_back(x);
	}

	if(n == 1) 
	{
		cout<<p[0];
		return;
	}

	int max = 0;
	int maxIndex = -1;
	for(int i = 0; i<n; i++)
	{
		if(p[i] > max)
		{
			max = p[i];
			maxIndex = i;
		}
	}

	int l;
	int r;
	if(maxIndex == 0)
	{
		int secondMost = 0;
		int secondMostIndex = 0;
		for(int i = maxIndex+1; i<n; i++)
		{
			if(p[i] > secondMost)
			{
				secondMost = p[i];
				secondMostIndex = i;
			}
		}
		if(secondMostIndex == n-1)
		{
			l = secondMostIndex;
			r = secondMostIndex;
		}
		else 
		{
			l = secondMostIndex - 1;
			r = secondMostIndex - 1;
		}
	}

	else if (maxIndex == n-1)
	{
		r = maxIndex;
		int k;
		for(k = maxIndex-1; (k>=0) && (p[k]>p[0]) ; k--);
		l = k + 1;
	}

	else
	{
		r = maxIndex - 1;
		int k;
		for(k = maxIndex-2; (k>=0) && (p[k]>p[0]) ; k--) 
		{
			int x;
			x++;
		} 
		l = k + 1;
	}


	printAfterOperation(l, r, p, n);
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