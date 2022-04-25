#include <iostream>
#include <map>

using namespace std;

map <long long, long long>m;

long long Bytelandian(long long n)
{
	if (n==0)	
	{
		return 0;
	}

	long long r=m[n];

	if(r==0)
	{
		long long s=Bytelandian(n/2)+Bytelandian(n/3)+Bytelandian(n/4);
		r=(n>s)?n:s;
		m[n]=r;
	}
	return r;
}

int main()
{
	//freopen("D:/FILES/Programming/input.txt", "r", stdin);
	m.clear();
	long long N;
	while (cin>>N)
	{
		cout<<Bytelandian(N)<<endl;
	}
	return 0;
}