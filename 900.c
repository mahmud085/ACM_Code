#include<stdio.h>
int main()
{
	int a,b,c,d,i,j,s=0,k,n;
	while(scanf("%d",&n),n!=0)
	{c=0,d=1;
	for(i=1;i<=n;i++)
	{
		
		
			s=c+d;
			c=d;
			d=s;
		
	}
	printf("%d\n",s);
	}
	return 0;
}
