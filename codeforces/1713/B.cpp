// Created: 1819h, 20 August 2022
// ------------------------ AC? TLE? WA? ------------------------

// #define int long long int

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;


bool desc(long long int i, long long int j)
{
	return i > j;
}

void OptimalReduction()
{
	int N;
	cin>>N;
	vector<long long int> a;
	int in;
	for (int i = 0; i < N; i++)
	{
		cin>>in;
		a.push_back(in);
	}
	long long int Max = *max_element(a.begin(),a.end());
	int FirstMaxI = -1;
	int MaxI = -1;
	for (int i = 0; i < N; i++)
	{
		if(Max == a[i])
		{
			if(MaxI == -1)
			{
				FirstMaxI = i;
				MaxI = i;
			}
			else
			{
				if(MaxI+1 != i)
				{
					cout<<"NO\n";
					return;
				}
				else
				{
					MaxI = i;
				}
			}
		}
	}

	long long int i = *max_element(a.begin(), a.begin()+FirstMaxI);
	long long int j = *min_element(a.begin()+MaxI+1, a.end());
	long long int k = *min_element(a.begin(), a.begin()+FirstMaxI);
	long long int l = *max_element(a.begin()+MaxI+1, a.end());

	if(!(FirstMaxI == 0 || MaxI == N-1))
	{
		if(i<l)
		{
			if(j<k)
			{
				cout<<"NO\n";
				return;
			}
		}
		else
		{
			if(j>k)
			{
				cout<<"NO\n";
				return;
			}
		}
	}

	if(!is_sorted(a.begin(), a.begin()+FirstMaxI))
	{
		cout<<"NO\n";
		return;
	}
	if(!is_sorted(a.begin()+MaxI+1, a.end(), desc))
	{
		cout<<"NO\n";
		return;
	}

	cout<<"YES\n";
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("D:/FILES/Programming/input.txt", "r", stdin);
	#endif
	long long T;
	cin>>T;
	while(T--)
	{
		OptimalReduction();
	}
	return 0;
}