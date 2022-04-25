#include <iostream>
#include <cmath>
using namespace std;

void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

int HCF(int a, int b)
{
	if (a == 0)
		return b;
	return HCF(b % a, a);
}

int LCM(int a, int b)
{
	return (a*b/HCF(a,b));
}

int main()
{
	// freopen("D:/FILES/Programming/input.txt","r", stdin);
	int a, b, c, d;
	cin>>a>>b>>c>>d;
	if(a<b)
	{
		swap(a,b);
		swap(c,d);
	}
	if(d>a)
	{
		swap(a,b);
		swap(c,d);
	}
	int l = LCM(a,c);
	int x = l/a;
	int y = l/c;
	// cout<<b*x<<":"<<d*y<<endl;
	int q = ((b*x)>(d*y))?b*x:d*y;
	int p = abs(b*x - d*y);
	if(p==0)
	{
		cout<<"0/1";
		return 0;
	}
	while(HCF(p,q)!=1)
	{
		int t = HCF(p,q);
		p /= t;
		q /= t;
	}
	cout<<p<<"/"<<q;
}