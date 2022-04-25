#include <iostream>
#include <string>
using namespace std;

void TooLong(string s)
{
	int l = s.length()-2;
	cout<<s.front()<<l<<s.back()<<endl;
	return;
}

int main()
{
	//freopen("D:/FILES/Programming/input.txt", "r", stdin);
	int n;
	string s;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>s;
		if(s.length()>10)
			TooLong(s);
		else
			cout<<s<<endl;
	}
}