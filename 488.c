#include<stdio.h>
int main()
{
	int a,b,c,i,j,k,l,m,n;
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{	//printf("\n");
		scanf("%d",&b);
		scanf("%d",&c);
		for(j=1;j<=c;j++)
		{
			for(k=1;k<=b;k++)
			{
				for(l=1;l<=k;l++)
				{
					printf("%d",k);
				}
				printf("\n");
			}
			for(m=b-1;m>0;m--)
			{
				for(n=m;n>0;n--)
				{
					printf("%d",m);
				}
				printf("\n");
			}
			if(j!=c)
			printf("\n");
		}
	if(i!=a-1)
	printf("\n");
		
	}
	return 0;
}
