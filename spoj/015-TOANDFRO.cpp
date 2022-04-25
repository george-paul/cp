#include <iostream>
#include <string>
using namespace std;

void ToAndFro(int n, string arr)
{
	for (int i=0; i<n; i++)
	{
		int j=i;
		// cout<<i<<"***"<<n<<endl;
		while(1)
		{
			//cout<<j<<", ";
			cout<<arr[j];
			j+=(n-i-1)*2+1;
			if(j>arr.size() || arr[j]=='\0') break;
			//cout<<j<<endl;
			cout<<arr[j];
			j+=(2*n)-2*(n-i)+1;
			if(j>arr.size() || arr[j]=='\0') break;
		}
	}
	cout<<endl;
}

int main()
{
	freopen("D:/FILES/Programming/input.txt", "r", stdin);
	int N=2323;
	string ARR;
	cin>>N;
	while(N!=0)
	{
		cin>>ARR;
		ToAndFro(N,ARR);
		cin>>N;
	}
	return 0;
}