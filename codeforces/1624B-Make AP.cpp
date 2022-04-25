// AC
#include <iostream>
using namespace std;

void makeAP()
{
  double a,b,c;
  cin>>a>>b>>c;
  double cd;
  // check a,b
  double check = (b+b-a)/c;
  if((int)check == check && check > 0)
  {
    cout<<"YES\n";
    return;
  }
  // check b,c
  check = (b-(c-b))/a;
  if((int)check == check && check > 0)
  { 
    cout<<"YES\n";
    return;
  }
  // check a,b
  check = (a+((c-a)/2))/b;
  if((int)check == check && check > 0)
  { 
    cout<<"YES\n";
    return;
  }
  cout<<"NO\n";
}

int main()
{
  #ifndef ONLINE_JUDGE
    freopen("D:/FILES/Programming/input.txt", "r", stdin);
  #endif
  int T;
  cin>>T;
  for(int i=0; i<T; i++)
  {
    makeAP(); 
  }
}