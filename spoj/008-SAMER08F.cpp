#include <iostream>

using namespace std;

void Feynman(int n)
{
	cout<<((n*(n+1)*(2*n+1))/6)<<endl;
	return;
}

int main()
{
	//freopen("C:/SSDFiles/GitStuff/spoj/input.txt","r",stdin);			//text file input
	int n;
	while(1)
	{
		cin>>n;
		if(n==0) break;
		Feynman(n);
	}
	return 0;
}