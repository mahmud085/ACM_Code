#include<stdio.h>
int main()
{
	int a[1001],b,c,d,e,f,i,j,k,n,min,s;
	while(scanf("%d %d %d %d",&b,&c,&d,&e)==4)
	{
		min=500000;
	f=1;
	for(j=1;j<=d;j++)
	{
	
		scanf("%d",&n);
		for(i=1;i<=e;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=1;i<=e;i++)
		{
			
			if(a[i]>=b) 
			{
				//f=0;
				s=b*n;
			if(s<=c)
			{f=0;
				if(s<min)
				min=s;
			}
			
			}
		}
	
	}
		if(f==0)
		printf("%d\n",min);
		else
			printf("stay home\n");
	}
	return 0;
}