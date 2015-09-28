#include<stdio.h>
int main()
{
	int a,b,c,n,s,i,j,k;
	while(scanf("%d",&n),n!=0)
	{s=0;
		for(i=1;i<=n;i++)
		{
			s+=i*i;
		}
		printf("%d\n",s);
	}
	return 0;
}