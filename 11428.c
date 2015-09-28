#include<stdio.h>
int main()
{
	int n,a,b,c,j;
	while(scanf("%d",&n),n!=0)
	{j=0;
		for(a=1;a<=n;a++)
		{	
			for(b=0;b<a;b++)
			{
			c=(a*a*a)-(b*b*b);
			if(c==n)
			{	j=1;
				printf("%d %d\n",a,b);
				goto end;
			}
			}
			
		}	
			end:
			if(j==0)
			printf("No solution\n");
			
	}
	return 0;
}