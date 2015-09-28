#include<stdio.h>
int main()
{
	int a,b,c,n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d %d",&a,&b);
		c=(a/3)*(b/3);
		printf("%d\n",c);
	}
	return 0;
}
