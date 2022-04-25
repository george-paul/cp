#include <iostream>
using namespace std;

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
			int temp = a[p];
			a[p] = a[i];
			a[i] = temp;
		}
	}
	int temp = a[hi];
	a[hi] = a[p+1];
	a[p+1] = temp;
	QSort(a, lo, p);
	QSort(a, p+2, hi);
}

int main()
{
	//freopen("D:/FILES/Programming/input.txt", "r", stdin);
	int n;
	int a[100];
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>a[i];
	QSort(a,0,n-1);
	int temp = a[0];
	a[0] = a[n-1];
	a[n-1] = temp;
	for(int i = 0; i<n; i++)
		cout<<a[i]<<" ";
}