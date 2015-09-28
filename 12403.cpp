#include<stdio.h>
#include<string.h>
int main()
{
	char a[10000];
	long long b,c,d,i,j,n,s=0;
	scanf("%lld",&n);
	getchar();
	for(i=1;i<=n;i++)
	{
		scanf("%s",a);
		if(strcmp(a,"donate")==0)
		{
			scanf("%lld",&b);
				s+=b;
		}
		if(strcmp(a,"report")==0)
		{
			//s+=b;
			printf("%lld\n",s);
		}
	}
	return 0;
}