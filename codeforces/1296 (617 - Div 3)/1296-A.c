/*input
5
2
2 3
4
2 2 8 8
3
3 3 3
4
5 5 5 5
4
1 1 1 1
*/

#include <stdio.h>

void main()
{
	int T,n,val;
	int arr[2000];
	int even=0, odd=0;
	scanf("%d", &T);
	for(n=0;T>0;even=0, odd=0, T--)
	{
		scanf("%d", &n);
		for(int i=0;i<n;i++)
		{
			scanf("%d", &val);
			if(val%2==0)
				even=1;
			else
				odd=1;
		}
		if(even&&odd)
		{
			printf("YES\n");
			continue;
		}
		else if(even&&(!odd))
		{
			printf("NO\n");
			continue;
		}
		else if((!even)&&(n%2==0))
		{
			printf("NO\n");
			continue;
		}
		else
		{
			printf("YES\n");
			continue;
		}
	}
}