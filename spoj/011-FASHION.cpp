#include<iostream>
using namespace std;

void qSort(int a[], int start, int end)
{
	if(start>=end)
		{return;}
	int pivot=a[start], mid=start+1, temp;
	for(int i=start+1; i<=end; i++)
	{
		if(a[i]<pivot)
		{
			//swap mid and i
			temp=a[mid];
			a[mid]=a[i];
			a[i]=temp;
			mid++;
		}
	}
	//swap (mid-1) and start
	temp=a[mid-1];
	a[mid-1]=a[start];
	a[start]=temp;
	qSort(a, start, mid-2);
	qSort(a, mid, end);
}

void Fashion()
{
	int n, X[1000]={}, Y[1000]={};
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>X[i];
	}
	for(int i=0; i<n; i++)
	{
		cin>>Y[i];
	}
	qSort(X, 0, n-1);
	qSort(Y, 0, n-1);
	int sum=0;
	for(int i=n-1; i>=0; i--)
	{
		sum+=X[i]*Y[i];
	}
	cout<<sum<<endl;
}

int main()
{
	//freopen("D:/FILES/Programming/input.txt","r",stdin);
	int T;
	cin>>T;
	while(T>0)
	{
		Fashion();
		T--;
	}
	return 0;
}