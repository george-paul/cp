#include <iostream>
#include <vector>
#include <array>
using namespace std;

void solve()
{
	array<string,8> grid;
	for (int i = 0; i < 8; i++)
	{
		cin>>grid[i];
	}

	// check rows
	for (int rowI = 0; rowI < 8; rowI++)
	{
		char first = '0';
		bool no = false;
		for (int i = 0; i < 8; i++)
		{
			char cell = grid[rowI][i];
			if(first == '0')
			{
				first = cell;
			}
			if(cell != first || first == '.' || first != 'R')
			{
				no = true;
				break;
			}
		}
		if(!no)
		{
			cout<<first;
			return;
		}
	}

	// check cols
	for (int colI = 0; colI < 8; colI++)
	{
		char first = '0';
		bool no = false;
		for (int i = 0; i < 8; i++)
		{
			char cell = grid[i][colI];
			if(first == '0')
			{
				first = cell;
			}
			if(cell != first || first == '.' || first != 'B')
			{
				no = true;
				break;
			}
		}
		if(!no)
		{
			cout<<first;
			return;
		}
	}
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