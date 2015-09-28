#include<stdio.h>
#include<math.h>
#define L 1000
int seive(void)
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
