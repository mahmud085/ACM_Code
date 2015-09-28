#include<stdio.h>

#define max 1002
#define len 2600
int fact[max][len];
void factof(void)
{
	int i,j,k;
	fact[0][0]=1;	
	fact[1][0]=1;
	for(i=2;i<max;i++)
	{
		for(j=0;j<len;j++)
		{
			fact[i][j]+=fact[i-1][j]*i;
			if(fact[i][j]>9)
			{
				fact[i][j+1]=fact[i][j]/10;
				fact[i][j]%=10;
			}
		}
	}
}
int main()
{
	long n,i,j,sum;
	factof();
	while(scanf("%ld",&n)!=EOF)
	{
		
		for(i=len-1;i>0;i--)
		{
			if(fact[n][i]!=0)
				break;
		}
		sum=0;
		for(;i>=0;i--)
		{sum+=fact[n][i];
			
		}
		printf("%ld",sum);
		printf("\n");
	}
	return 0;
}
