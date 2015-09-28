#include<cstdio>
int ar1[10001],ar2[10001];
int main()
{
	int a,b,c,i,j,n;
	while(scanf("%d",&n),n!=0)
	{
		for(i=0;i<n;i++)
		{
			scanf("%d",&ar1[i]);
		}
		a=0;b=0;
		for(i=0;i<n;i++)
		{
			if(ar1[i]!=0)
			{
				ar2[b++]=ar1[i];
				a=1;
			}
		}
		if(a==0)
			printf("0");
		else{
		for(i=0;i<b;i++)
		{
			printf("%d",ar2[i]);
			if(i!=b-1)
				printf(" ");
		}}
		printf("\n");
	}
	return 0;
}