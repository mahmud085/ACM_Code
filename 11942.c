#include<stdio.h>
int main()
{
	int a[1000];
	int b,c,t,n,i,j;
	scanf("%d",&n);
	printf("Lumberjacks:\n");
	for(t=0;t<n;t++)
	{c=1;
		for(j=0;j<10;j++)
		{
			scanf("%d",&a[j]);
		}
		if(a[0]>a[1])
		{
		for(j=0;j<9;j++)
		{
			if(a[j]>=a[j+1])
		
			{
				c=0;
			}
			else
			{
				c=1;
				break;
			}

		}
		}
		else
		{
		for(j=0;j<9;j++)
		{
			if(a[j]<=a[j+1])
			{
				c=0;
			}
			else
			{
				c=1;
				break;
			}
		}
		}
		if(c==0)
		{
			printf("Ordered\n");
		}
		if(c==1)
			printf("Unordered\n");
	}
	return 0;
}