#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	//freopen("D:/FILES/Programming/input.txt", "r", stdin);
	string a, b, r;
	getline(cin, a);
	getline(cin, b);
	getline(cin, r);
	a=a+b;
	sort(a.begin(), a.end());
	sort(r.begin(), r.end());
	if(a==r) cout<<"YES";
	else cout<<"NO";
}