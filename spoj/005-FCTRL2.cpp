#include <iostream>
#include <string.h>

using namespace std;

int sz;
int f[200];

void single()
{
	int i=0;
	for (i=0;i<=sz;i++)
	{
		if(f[i]>9)
		{
			f[i+1] += f[i]/10;
			if (i>=sz) sz++;
			f[i] = f[i]%10;
		}
	}
}

void mul(int n)
{
	for (int i=0;i<=sz;i++)
	{
		f[i] *= n;
	}
	
	single();
}

void fctrl(int n)
{
	memset(f,0,sizeof f);
	f[0]=1;
	sz=0;
	while (n>0)
	{	
		mul(n);
		n--;
	}

	for (int i=sz;i>=0;i--)
		cout<<f[i];
}

int main()
{
	int s, n;
	cin>>s;
	for (;s>0;s--)
	{
		cin>>n;
		fctrl(n);cout<<'\n';
	}
	return 0;
}