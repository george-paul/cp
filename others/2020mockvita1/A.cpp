#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int Philaland(int n)
{
	bool N[5000]={};
	for(int i=0; i<=n; i++)
	{
		N[i]=false;
	}
	N[0]=true;
	for(int i=2; i<=n; i++)
	{
		if(N[i]==false)
		{
			for(int j=i; i*j<=n; j++)
			{
				N[i*j]=true;
			}
		}
	}
	int sum=0;
	for(int i=0; i<=n; i++)
	{
		if(N[i]==false)
			sum++;
	}
	return sum;
}

int main()
{
	//freopen("D:/FILES/Programming/input.txt","r",stdin);
	int T,n;
	cin>>T;
	for(;T>0;T--)
	{
		cin>>n;
		cout<<Philaland(n-n/2)<<endl;
	}
	return 0;
}