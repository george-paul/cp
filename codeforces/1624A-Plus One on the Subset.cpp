// AC
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
  #ifndef ONLINE_JUDGE
		freopen("D:/FILES/Programming/input.txt", "r", stdin);
	#endif
  int T;
  cin>>T;
  for(int i=0; i<T; i++)
  {
    int n;
    cin>>n;
    int max = 0;
    int min = INT_MAX;
    int x;
    for(int j=0; j<n; j++)
    {
      cin>>x;
      if(max<x) max = x;
      if(min>x) min = x;
    }
    cout<<max - min<<endl;
  }
  return 0;
}