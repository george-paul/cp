#include<iostream>
#include <algorithm>
using namespace std;

void Swap(int &x, int &y)
{
	int t = x;
	x = y;
	y = t;
}

void QSort(int a[], int lo, int hi)
{
	if(lo>=hi)
		return;
	int p = lo-1;
	for(int i = lo; i<hi; i++)
	{
		if(a[i]<a[hi])
		{
			p++;
			Swap(a[p], a[i]);
		}
	}
	Swap(a[p+1], a[hi]);
	QSort(a, lo, p);
	QSort(a, p+2, hi);
}

int main()
{
	// freopen("D:/FILES/Programming/input.txt", "r", stdin);
	int n;
	cin>>n;
	long long int a[300001];
	for(int i = 0; i<n; i++)
		cin>>a[i];
	// QSort(a, 0, n-1);
	sort(a, a+n);
	long long int sum = 0;
	for(int i = 0; i<n; i++)
	{
		// cout<<a[i]<<":"<<i+1<<":";
		if(a[i]>i+1)
			sum += a[i]-(i+1);
		else
			sum += i+1-a[i];
		// cout<<sum<<endl;
	}
	cout<<sum;
}