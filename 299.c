#include<stdio.h>
int main()
{
	int b,c,i,d,j,n,k;
int a[100];
scanf("%d",&n);
for(d=1;d<=n;d++)
{
	scanf("%d",&b);
	for(j=1;j<=b;j++)
	{
		scanf("%d",&a[j]);
	}
	c=0;
	for(j=1;j<=b-1;j++)
	{
	for(i=1;i<=b-j;i++)
	{
		if(a[i]>=a[i+1])
		{
			k=a[i];
			a[i]=a[i+1];
			a[i+1]=k;
			c++;
		}
	}
	
	}
	
	printf("Optimal train swapping takes %d swaps.\n",c);
	
	}
return 0;
}