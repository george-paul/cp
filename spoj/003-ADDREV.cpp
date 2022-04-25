/*input
3
24 1
4358 754
305 794
*/
#include <iostream>
using namespace std;

long int rev(long int n)
{
	long int p=0;
	while(n>0) 
	{
		p *= 10;
		p += n%10;
		n /= 10;
	}
	return p;
}

int main()
{
	long int n, x, y;
	cin>>n;
	for(;n>0;n--)
	{
		cin>>x>>y;
		cout<<rev(rev(x)+rev(y))<<'\n';
	}
	return 0;
}