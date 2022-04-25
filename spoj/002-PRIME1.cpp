/*input
2
1 10
3 5
*/
#include <iostream>
#include <cmath>
using namespace std;

bool chkprime(long int p)
{
	long int q;
	if(p==1)
		return false;
	if(p==2)
		return true;
	if(p%2==0)
		return false;
	for (q=3;q<=sqrt(p);q += 2)
		if((p%q)==0)
			return false;
	return true;
}

int main()
{
	long int n,a,b;
	cin>>n;
	for(;n>0;n--)
	{
		cin>>a>>b;
		for(;a<=b;a++)
		{
			if (chkprime(a))
				cout<<a<<'\n';
		}
		cout<<'\n';
	}
	return 0;
}