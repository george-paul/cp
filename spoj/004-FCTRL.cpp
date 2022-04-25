/*input
1
8735373
*/
#include <iostream>
#include <cmath>
using namespace std;

long int hn5(long int p)
{
	long int i,k=0;
	for (i=5;i<=p;i*=5)
	{
		k += p/i;
	}
	return k;
}

int main ()
{
	long int N, p;
	cin>>N;
	for (;N>0;N--)
	{
		cin>>p;
		cout<<hn5(p)<<'\n';
	}
	return 0;
}