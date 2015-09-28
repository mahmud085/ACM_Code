#include<stdio.h>
#include<string.h>
#define L 105
long dp[L];
long a,b,c,d,e,i,j,k,n;
void seive(long i)
{
			for(a=2;a<=i;a++)
		{
			int cnt=0;b=a;
			for(j=2;j*j<=a;j++)
			{
				
				while(a%j==0)	
				{
					a=a/j;
					cnt++;
					dp[j]++;
				}
				
			}
			if(a!=1)		
			{
				//cnt++;
				dp[a]++;
			}
			a=b;
		}

}

int main()
{
	long prime[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
	 while(scanf("%ld",&n),n!=0)
	 {
		seive(n);
		d=0;
		printf("%3ld! =",n);
		 for(j=0;prime[j]<=n;j++)
		 {
			 c=prime[j];
			 printf("%3ld",dp[c]);
			d++;
			 if(d>=15)
			{	printf("\n");
				printf("      ");
				d=0;
			 }
			
		 }
		 printf("\n");
		 memset(dp,0,sizeof(dp));
	 }
	 return 0;
}