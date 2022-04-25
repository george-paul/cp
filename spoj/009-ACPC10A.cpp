#include <iostream>
using namespace std; 

void APorGP(int n1, int n2, int n3)
{
	if(n2-n1==n3-n2)
	{
		cout<<"AP "<<n3+(n2-n1);
	}
	else
	{
		cout<<"GP "<<n3*(n2/n1);
	}
	cout<<endl;
}

int main()
{
	//freopen("D:/FILES/Programming/input.txt","r",stdin);
	int n1,n2,n3;
	while(1)
	{
		cin>>n1>>n2>>n3;
		if(n1==0&&n2==0&&n3==0)
		{
			return 0;
		}
		APorGP(n1,n2,n3);
	}
	return 0;
}