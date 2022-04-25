#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void NumCircle(vector<int> nums)
{
	sort(nums.begin(), nums.end());
	if(nums[nums.size()-1] >= nums[nums.size()-2] + nums[nums.size()-3])
	{
		cout<<"NO\n";
	}
	else
	{
		cout<<"YES\n";
		for(int i = 0; i<nums.size()-2; i++)
		{
			cout<<nums[i]<<" ";
		}
		cout<<nums[nums.size()-1]<<" "<<nums[nums.size()-2]<<" \n";
	}

}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("D:/FILES/Programming/input.txt", "r", stdin);
	#endif
	vector<int> nums;
	int n, a;
	cin>>n;
	for(int i =0; i<n; i++)
	{
		cin>>a;
		nums.push_back(a);
	}
	NumCircle(nums);
	return 0;
}