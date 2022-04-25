#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//freopen("D:/FILES/Programming/input.txt", "r", stdin);
	int n, p;
	double sum=0;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>p;
		sum+=p;
	}
	cout.precision(10);
	cout<<sum/(n);
}