#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve()
{
	int n,m;
	long long int h;
	cin>>n>>m>>h;
	vector<vector<long long int>> t;
	for(int i=0; i<n; i++)
	{
		vector<long long int> emptyVec(0,0);
		t.push_back(emptyVec);
		for(int j=0; j<m; j++)
		{
			long long int tij;
			cin>>tij;
			t[i].push_back(tij);
		}
	}

	for(int i=0; i<n; i++)
	{
		sort(t[i].begin(), t[i].end());
	}
	vector<vector<long long int>> res;
	for(int i=0; i<n; i++)
	{
		vector<long long int> emptyVec(0,0);
		res.push_back(emptyVec);
		res[i].push_back(i);
		int totPoints = 0;
		long long int time = 0;
		long long int totPens = 0;
		for(int j=0; j<m; j++)
		{
			time += t[i][j];
			long long int currTimePen = time;
			totPens += currTimePen;
			totPoints++;
			if(time > h)
			{
				res[i].push_back(totPens-currTimePen);
				res[i].push_back(--totPoints);
				break;
			}
		}
		if(time <= h)
		{
			res[i].push_back(totPens);
			res[i].push_back(totPoints);
		}
	}
	sort(res.begin(), res.end(), [](vector<long long int> a, vector<long long int>b) {
		if(a[2] == b[2] && a[1] == b[1])
			return a[0]<b[0];
		else if(a[2] == b[2])
			return a[1]<b[1];
		else
			return a[2]>b[2];
	});
	int x = 0;
	for(int i=0; i<n; i++)
	{
		if(res[i][0] == 0)
		{
			cout<<i+1;
			break;
		}
	}

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