#include<stdio.h>
#include<math.h>
#define L 20000000
unsigned long ip[20000000],p[20000000],q[20000000],w[20000000];
void sieve_prime(void)
{
	unsigned long i,j;
    for(i=3;i<(L);i+=2)
	{
		if(ip[i]==0)
		{
			for(j=i*i;j<(L);j+=i+i)
				ip[j]=1;
		}
	}
	//p[0]=2;
    j=1;
	for(i=3;i<(L);i+=2)
	{
		if(ip[i]==0)
			p[j++]=i;
	}
	unsigned long c=1,d=1,k;
	for(k=2;k<L;k++)
	{
		if(p[k]==p[k-1]+2)
		{
			//r[d++];
			q[c++]=p[k-1];
			w[d++]=p[k];
		}
	}

}
int main()
{
	unsigned long k,n;
	sieve_prime();
	while(scanf("%lu",&n)!=EOF)
	{
		printf("(%lu, %lu)\n",q[n],w[n]);
	}
	return 0;
}
