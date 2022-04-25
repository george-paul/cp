#include <iostream>
using namespace std;

int main()
{
	//freopen("D:/FILES/Programming/input.txt", "r", stdin);
	int n;
	int x;
	int low, max;
	int amazsum=0;
	cin>>n;
	cin>>x;
	low=x;max=x;
	for(int i=1; i<n; i++)
	{
		cin>>x;
		if(x<low)
		{
			low=x;
			amazsum++;
		}
		else if (x>max)
		{
			max=x;
			amazsum++;
		}
	}
	cout<<amazsum;
}