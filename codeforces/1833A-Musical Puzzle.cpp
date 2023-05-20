// AC
#include <iostream>
#include <unordered_map>
using namespace std;

void FindMelody()
{
	unordered_map<string, bool> recMap;
	int n;
	cin>>n;
	string m;
	cin>>m;
	for(int i = 0; i<n-1; i++)
	{
		string rec;
		rec = m.substr(i, 2);
		if(recMap.count(rec) == 1)
		{
			continue;
		}
		else 
		{
			recMap.insert({rec, true});
		}
	}
	cout<<recMap.size()<<endl;
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
		FindMelody();
	}
}