// Created: 1736h, 20 August 2022
// ------------------------ AC ------------------------

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;


int noOfSteps(int axis[], int N)
{
	if(*max_element(axis, axis+N)<0)
	{
		return 2 * abs(*min_element(axis, axis+N));
	}
	else if (*min_element(axis, axis+N)>0)
	{
		return 2 * abs(*max_element(axis, axis+N));
	}
	else
	{
		return 2 * abs(*min_element(axis, axis+N)) + 2 * *max_element(axis, axis+N);
	}
}

void BoxesTSP()
{
	int posX[200];
	int posY[200];
	int N;
	cin>>N;
	for (int i = 0; i < N; i++)
	{
		cin>>posX[i]>>posY[i];
	}
	int total = 0;
	// cout<< *min_element(posX, posX+N) << " ";
	total += noOfSteps(posX, N);
	total += noOfSteps(posY, N);
	cout<<total<<"\n";
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("D:/FILES/Programming/input.txt", "r", stdin);
	#endif
	long long T;
	cin>>T;
	while(T--)
		BoxesTSP();
	return 0;
}