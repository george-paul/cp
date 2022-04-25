/*input
6
1
10
19
9876
12345
1000000000
*/

#include <stdio.h>

void main()
{
	int T, val, mones, spent;
	scanf("%d", &T);
	for(;T>0;T--)
	{
		scanf("%d", &val);
		spent=0;
		while(1)
		{
			if(val<10)
			{
				spent+=val;
				break;
			}
			mones=val%10;
			val-=mones;
			spent+=val;
			val/=10;
			mones+=val;
			val=mones;
		}
		printf("%d\n", spent);
	}
}