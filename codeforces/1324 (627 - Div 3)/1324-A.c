#include<stdio.h>
#include<math.h>

void NotAnotherTetris(int n, int a[])
{
	if(n==1){printf("YES\n");return;}
	int i, j;
	if(a[0]%2==0)
		for(i=1; i<n; i++)
		{
			if(a[i]%2!=0)
			{
				printf("NO\n");
				return;
			}
		}
	else
		for(i=1; i<n; i++)
		{
			if(a[i]%2==0)
			{
				printf("NO\n");
				return;
			}
		}
	printf("YES\n");
	return;
}

void main()
{
	int T, i;
	int n, a[100];
	//freopen("C:/SSDFiles/GitStuff/codeforces/1324 (627 - Div 3)/input.txt", "r", stdin);
	scanf("%d", &T);
	for(; T>0; T--)
	{
		scanf("%d", &n);
		for(i=0; i<n; i++)
			scanf("%d", &a[i]);
		NotAnotherTetris(n, a);
	}
}