#include <iostream>
using namespace std;

int LastDigit(int a, int b)
{
	if(b==0||a==1) return 1;
	else if(a%10==0) return 0;
	
	a = a%10;
	b = b%4;
	if(b==0)b=4;
	b--;
	int a1=a;
	while(b)
	{
		a*=a1;
		b--;
	}
	return a%10;
}

int main()
{
	freopen("D:/FILES/Programming/input.txt", "r", stdin);
	int T, A, B;
	cin>>T;
	while(T)
	{
		cin>>A>>B;
		cout<<LastDigit(A,B)<<endl;
		T--;
	}
	return 0;
} 