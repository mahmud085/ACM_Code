#include<cstdio>
#include<cstring>
int main()
{
	long long a,b,c,d,i,j,k,n;
	scanf("%lld",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%lld %lld",&a,&b);
		c=b-2;
		d=0;
		for(j=c+1;j<=a;j++)
		{
			if(a%j==c)
			{
				printf("%lld\n",j);
				d=1;
				break;
			}
		}
		if(d==0)
			printf("Impossible\n");
	}
	return 0;
}

