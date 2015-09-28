#include<stdio.h>
int main()
{
	int i,j,k,t,l,n,x,m;
	int a[10000];
	scanf("%d",&t);
	x=1;
	for(i=0;i<t;i++)
	{m=0;
		scanf("%d",&n);
		for(j=1;j<=n;j++)
		{
			scanf("%d",&a[j]);
		}
		for(k=1;k<=n;k++)
		{
			if(a[k]>=m)
			{
				m=a[k];
			}
		}
		printf("Case %d: %d\n",x,m);
		x++;
	}
	return 0;
}