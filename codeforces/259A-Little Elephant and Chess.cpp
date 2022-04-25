#include<iostream>
using namespace std;

int main()
{
	//freopen("D:/FILES/Programming/input.txt","r", stdin);
	for(int i=0; i<8; i++)
	{
		char row[8];
		cin>>row;
		for(int j=1; j<8; j++)
		{
			if(row[j]==row[j-1]) 
			{
				cout<<"NO";
				return 0;
			}
		}
	}
	cout<<"YES";
	return 0;
}