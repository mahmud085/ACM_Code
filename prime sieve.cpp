#include <stdio.h>


#define L 21474

bool ip[L];
int p[1000000];
__int64 count;

void sieve_prime(void)
{
	__int64 i,j;
    for(i=3;i<L;i+=2)
	{
		if(ip[i]==0)
		{
			for(j=i*i;j<L;j+=i+i)
				ip[j]=1;
		}
	}
	p[0]=2;
    j=1;
	for(i=3;i<L;i+=2)
	{
		if(ip[i]==0)
			p[j++]=i;
	}
	count=j;
}

int main()
{int j;
    sieve_prime();
	for(j=0;j<100;j++)
    printf("%I64d\n", p[j]);
    printf("%d", ip[101]);
//    getch();
    return 0;
}
