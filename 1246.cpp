#include<cstdio>
#define l 10010
bool prime[l],ps[l];
long a,b,c,d,i,j,k,m,cnt,n;
void seive(void)
{
	ps[0]=ps[1]=1;
	for(i=4;i<l;i+=2)
		ps[i]=1;
	k=0;
	for(i=3;i<l;i++)
	{
		if(ps[i]==0)
		{
			for(j=i*i;j<l;j+=2*i)
				ps[j]=1;
		}
	}
}
void pre(void)
{
	prime[2]=prime[3]=1;
	for(i=4;i<l;i++)
	{
		k=i;m=0;cnt=2;
		for(j=2;j<=i/2;j++)
		{
			if(k%j==0)
				cnt++;
		}
		if(ps[cnt]==0)
			prime[i]=1;
	}
}
int main()
{
	seive();
	pre();
	scanf("%ld",&n);
	long t;
	while(n--)
	{
		scanf("%ld %ld",&a,&b);
		d=0;
		for(t=a;t<=b;t++)
		{
			if(prime[t]==1)
			{
				if(d!=0)
					printf(" ");
				printf("%d",t);
				d++;
			}
		}
		if(d==0)
			printf("-1");
		printf("\n");
	}
	return 0;
}