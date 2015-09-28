#include<stdio.h>
#include<string.h>
#define max 30000
long w[max],coin[10];
void mahmud(void)
{
	long i,j,k;
	long coin[6]={1,5,10,25,50};
	//memset(w,0,sizeof(w));
		w[0]=1;
		for(i=0;i<5;i++)
		{
			for(j=coin[i],k=0;j<=max;j++,k++)
			{
				w[j]+=w[k];
			}
		}
}
int main()
{

	long a,b,c,d,i,j,k,n,t;
	
	mahmud();
	while(scanf("%ld",&n)!=EOF)
	{
	//	int coin[5]={1,5,10,25,50};
		
		if(w[n]==1)
		printf("There is only %ld way to produce %ld cents change.\n",w[n],n);
		else
		printf("There are %ld ways to produce %ld cents change.\n",w[n],n);
	}
	return 0;
}
