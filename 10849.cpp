#include<stdio.h>
#include<stdlib.h>

int main()
{
	long a,b,c1,c2,r1,r2,i,j,n;
	scanf("%ld",&n);
	while(n--)
	{
		scanf("%ld %ld",&a,&b);
		for(i=1;i<=a;i++)
		{
			scanf("%ld %ld %ld %ld",&r1,&c1,&r2,&c2);
			if(r1<=b&&r2<=b&&c1<=b&&c2<=b)
			{
			if(r1==r2&&c1==c2)
				printf("0\n");
			else if(abs(r1-r2)==abs(c1-c2))
				printf("1\n");
			else if((abs(r1-r2)+abs(c1-c2))%2==0)
				printf("2\n");
			else
				printf("no move\n");
			}
			else
				printf("no move\n");
		}
	}
	return 0;
}