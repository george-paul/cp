#include <iostream>
#include <vector>
#include<cmath>
#include <algorithm>
using namespace std;

int C;
std::vector<long int> X;
std::vector<long int> Y;
std::vector<long int> V;

int Collision()
{
	std::vector<float> T;
	float val;
	for(int i=0; i<C; i++)
	{
		if(V[i]==0)continue;
		val=sqrt(pow(X[i], 2) + pow(Y[i], 2))/V[i];
		val = (int)(val*10000+0.005);
		T.push_back((float)val/10000);
		// T.push_back(val);
	}
	sort(T.begin(), T.end());
	int Ccount=0, sum=0, i;
	for(i=0; i<C-1; i++)
	{
		if(T[i]==T[i+1])
		{
			Ccount++;
		}
		else
		{
			Ccount++;
			sum+=Ccount*(Ccount-1);
			Ccount=0;
		}
	}
	Ccount++;
	sum+=Ccount*(Ccount-1);
	return sum/2;
}

int main()
{
	//freopen("D:/FILES/Programming/input.txt", "r", stdin);
	long int x,y,v;
	cin>>C;
	for(int i=0; i<C; i++)
	{
		cin>>x>>y>>v;
		X.push_back(x);
		Y.push_back(y);
		V.push_back(v);
	}
	cout<<Collision();
	return 0;
} 