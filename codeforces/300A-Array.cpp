#include <iostream>
#include <vector>
using namespace std;

int main()
{
	//freopen("D:/FILES/Programming/input.txt", "r", stdin);
	vector<int> n;
	int N, x;
	cin>>N;
	for(int i=0; i<N; i++)
	{
		cin>>x;
		n.push_back(x);
	}
	vector<int> neg,pos,zero;
	for(int i: n)
	{
		if(i<0)
			neg.push_back(i);
		else if(i>0)
			pos.push_back(i);
		else
			zero.push_back(i);
	}
	if(pos.size()<=0)
	{
		pos.push_back(neg.back());
		neg.pop_back();
		pos.push_back(neg.back());
		neg.pop_back();
	}
	if(neg.size()%2==0)
	{
		zero.push_back(neg.back());
		neg.pop_back();
	}
	cout<<neg.size()<<" ";
	for(int i: neg)
		cout<<i<<" ";
	cout<<endl<<pos.size()<<" ";
	for(int i: pos)
		cout<<i<<" ";
	cout<<endl<<zero.size()<<" ";
	for(int i: zero)
		cout<<i<<" ";
}