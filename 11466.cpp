#include<stdio.h>
#include<math.h>
#define L 10001000
bool ps[L];
long long prime[1000000];
long long i,d,c,j,f,k,n,listsize,a;
int prime_seive(void)
{
	k=1;
	for(i=4;i<L;i+=2)
		ps[i]=1;
	prime[0]=2;
	for(i=3;i<(L);i+=2)
	{
		if(ps[i]==0)
		{
			prime[k++]=i;
			for(j=i*i;j<(L);j+=i+i)
				ps[j]=1;
		}
	}
return k;
}

int main()
{
	d=prime_seive();
	while(scanf("%lld",&a),a!=0)
	{f=1;
	long long coun=0,max=0;
			int listsize=0;
			if(a<0)
			{
				f=0;
				a=a*(-1);
			}
			//d=sqrt(a);
for(i=0,c=-1;i<d&&a>1&&prime[i]<=a;i++)
{
	if(a%prime[i]==0)
		{
			coun++;
			while(a%prime[i]==0&&a>1)
			{
				a/=prime[i];
			}
			c=prime[i];
		}
	if(a==1)
		break;
}
if(a==1)
{
		if(coun>1)
	{
		printf("%lld\n",c);
	}
	else
	printf("-1\n");
}
else
{
	if(coun>0)
		printf("%lld\n",a);
	else
		printf("-1\n");
}
	}
	return 0;
}
