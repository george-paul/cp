/*input
3
4 2
6 6
3 4
*/

#include <iostream>
using namespace std;

int NumberSteps(long long int x, long long int y)
{
	if(x==y)
	{
		if(y%2==0)
		{
			return (2*y);
		}
		else
		{
			return (2*y-1);
		}
	}
	else if(y==(x-2))
	{
		if(y%2==0)
		{
			return (2*y+2);
		}
		else
		{
			return (2*y+1);
		}
	}
	else
		return -1;
}

int main()
{
	long long int T,x,y,res;
	cin>>T;
	for(;T>0;T--)
	{
		cin>>x>>y;
		res=NumberSteps(x,y);
		if(res==-1)
		{
			cout<<"No Number\n";
		}
		else
		{
			cout<<res<<endl;
		}
	}
}