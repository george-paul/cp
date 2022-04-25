#include <iostream>
#include <string>
#include <cmath>
using namespace std;

double fact(int f)
{
	if(f==0)
		return 1;
	return f * fact(f-1);
}

int main()
{
	// freopen("D:FILES/Programming/input.txt","r",stdin);
	string sz,sd;
	cin>>sz;
	cin>>sd;
	int z = 0;
	for(int i = 0; i<sz.length();i++)
	{
		if(sz[i]=='+')
			z++;
		else
			z--;
	}
	int d = 0, nq = 0;
	for(int i = 0; i<sd.length();i++)
	{
		if(sd[i]=='+')
			d++;
		else if(sd[i]=='-')
			d--;
		else
			nq++;
	}
	// cout<<"z = "<<z<<": d = "<<d<<endl;
	int r = z-d;
	double p;
	if(r>nq || r<-nq || (nq==0 && r!=0) || ((abs(r%2) != abs(nq%2)) && nq > 2))
	{
		// cout<<"nq = "<<nq<<": r = "<<r<<endl;
		p = 0;
	}
	else if(nq==0 && r==0)
		p = 1;
	else
	{
		int rp = nq - (nq-r)/2;
		// cout<<"rp = "<<rp<<": nq = "<<nq<<": r = "<<r<<endl;
		p = (fact(nq)/(fact(rp)*fact(nq-rp)))/pow(2,nq);
	}
	cout.precision(9);
	printf("%.12f",p);
}