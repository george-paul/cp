#include <iostream>
using namespace std;

int Rectangle(int n)
{
	if(n==1) return 1;
	int sum=0;
	int t;
	for(int i=1; i<=n/2; i++)
	{
		t=(n/i)-(i-1);
		if(t<=0) break;
		sum+=t;
	}
	return sum;
}

int main()
{
	freopen("D:/FILES/Programming/input.txt", "r", stdin);
	int n;
	cin>>n;
	cout<<Rectangle(n);
	return 0;
}