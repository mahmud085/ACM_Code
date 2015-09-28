#include<stdio.h>
int main()
{
long long int i,j,k,n,num[20],max,sum,casn=1;
while(scanf("%lld",&n)==1)
{
	for(i=0;i<n;i++)
	scanf("%lld",&num[i]);
	for(i=0,max=0;i<n;i++)
	{
		for(j=i,sum=1;j<n;j++)
		{
			sum*=num[j];
			if(sum>max)
				max=sum;
		}
	}
	printf("Case #%lld: The maximum product is %lld.\n\n",casn,max);
	casn++;
}
return 0;
}