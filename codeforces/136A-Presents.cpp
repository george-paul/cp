#include <iostream>
using namespace std;

int main()
{
	//freopen("D:/FILES/Programming/input.txt", "r", stdin);
	int n;
	int x;
	int a[101]={0};
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		cin>>x;
		a[x]=i;
	}
	for(int i=1; i<=n; i++)
	{
		cout<<a[i]<<" ";
	}
}