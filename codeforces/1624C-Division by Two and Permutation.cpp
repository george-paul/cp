// AC
#include <iostream>
#include <vector>
using namespace std;


void DivByTwo()
{
	int N;
	cin>>N;
	int x;
	vector<bool> Ns;
	Ns.push_back(true);
	for(int i=1; i<=N; i++) Ns.push_back(false);
	for(int i=0; i<N; i++)
	{
		cin>>x;
		do
		{
			if(x<=N && !Ns[x])
			{
				Ns[x] = true;
				break;
			}
			x /= 2;
		}while(x>0);
	}
	for(int i=0; i<Ns.size(); i++)
	{
		if(!Ns[i])
		{
			cout<<"NO\n";
			return;
		}
	}
	cout<<"YES\n";
}


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("D:/FILES/Programming/input.txt", "r", stdin);
	#endif
	int T;
	cin>>T;
	while(T--)
		DivByTwo();
	return 0;
}