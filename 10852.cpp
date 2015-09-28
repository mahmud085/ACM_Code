#include<cstdio>
#define L 10010
bool ps[L];
int a,b,c,i,j,k,n;
void prime_seive(void)
{
	k=1;ps[0]=ps[1]=1;
	for(i=4;i<L;i+=2)
		ps[i]=1;

	for(i=3;i<(L);i+=2)
	{
		if(ps[i]==0)
		{
			
			for(j=i*i;j<(L);j+=i+i)
				ps[j]=1;
		}
	}

}
int main()
{
	prime_seive();
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&a);
		b=a/2;
		c=0;
		for(i=b+1;i<=a;i++)
		{c=1;
			if(ps[i]==0)
			break;
		}
		if(a==1||a==2||a==0)
			printf("-1\n");
		else
			printf("%d\n",i);
	}
	return 0;
}