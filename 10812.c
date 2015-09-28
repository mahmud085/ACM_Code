#include<stdio.h>
int main()
{
	int a,b,c,d,n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{c=0,d=0;
		scanf("%d %d",&a,&b);
		if(a<b)
		{
		printf("impossible\n");
		}
		else
		{
			c=(a+b)/2;
			d=c-b;
		
		if(c>d)
		{
			if((c+d)==a&&(c-d)==b)
			printf("%d %d\n",c,d);
			else
				printf("impossible\n");
		}
			else
			{
				if((c+d)==a&&(d-c)==b)			
			printf("%d %d\n",d,c);
				else
					printf("impossible\n");
			}
	
		}
	}
		return 0;	
}
