#include<stdio.h>
//#define n 1000000001;
int main()
{	
	__int64 n,b;
	int a[10000],i,j,k;
	while(scanf("%I64d",&n),n>0)
	{
	i=0;	
	if(n<1000000001)
	{
		while(n!=0)
		{	
			b=(n%3);
			a[i]=b;
			n=n/3;
			i++;
		}
		for(k=i-1;k>=0;k--)
		{
			printf("%d",a[k]);
		}
		printf("\n");
	}
	}
	return 0;
}