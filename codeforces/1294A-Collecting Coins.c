/*input
5
5 3 2 8
100 101 102 105
3 2 1 100000000
10 20 15 14
101 101 101 3
*/

#include<stdio.h>

void main()
{
	int T, i;
	long int a,b,c,n;
	scanf("%d", &T);	
	for(;T>0;T--)
	{
		scanf("%li %li %li %li ", &a,&b,&c,&n);
		if(n==0)
		{
			printf("NO\n");
			continue;
		}
		if(a>=b&&a>=c)
		{
			n=n-(a-b)-(a-c);
		}
		else if(b>=a&&b>=c)
		{
			n=n-(b-a)-(b-c);
		}
		else
		{
			n=n-(c-a)-(c-b);
		}
		if(n%3==0&&n>=0)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
}