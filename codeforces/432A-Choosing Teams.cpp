#include <iostream>
using namespace std;

int main()
{
	//freopen("D:/FILES/Programming/input.txt", "r", stdin);
	int n,k;
	cin>>n;
	cin>>k;
	int x;
	int sum=0;
	for(int i=0; i<n; i++)
	{
		cin>>x;
		
		if(x<=(5-k)) sum++;
	}
	cout<<sum/3;
	return 0;
}