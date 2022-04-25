#include <iostream>
using namespace std;

void DistributeCandies(int pack[], int no)
{
	int sum=0, target, moves=0;
	for(int i=0; i<no; i++)
	{
		sum+=pack[i];
	}
	if(sum%no!=0)
	{
		cout<<"-1\n";
		return;
	}
	target=sum/no;
	for(int i=0; i<no; i++)
	{
		if(target<pack[i])
		{
			continue;
		}
		moves+=target-pack[i];
	} 
	cout<<moves<<endl;
}

int main()
{
	//freopen("D:/FILES/Programming/input.txt","r",stdin);
	int pack[10000]={},no;
	while(1)
	{
		cin>>no;
		if(no==-1)
		{
			break;
		}
		for(int i=0; i<no; i++)
		{
			cin>>pack[i];
		}
		DistributeCandies(pack, no);
	}
	return 0;
}