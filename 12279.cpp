#include<stdio.h>
int main()
{
	int a[1001],b,c,d,e,i,j,k,n,x=1;
	while(scanf("%d",&n),n!=0)
	{c=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(j=0;j<n;j++)
		{
			if(a[j]==0)
				c++;
		}
		d=n-c;
		e=d-c;
		printf("Case %d: %d\n",x,e);
		x++;
	}
	return 0;
}