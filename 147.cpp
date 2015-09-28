#include<stdio.h>
#include<string.h>

long long w[7000];
int coin[12]={2000, 1000, 400, 200, 100, 40, 20, 10, 4, 2, 1};

int main()
{
	int q,i,j,k;
	double n;
		while(scanf("%lf",&n),n!=0.00)
		{

			q=(int)(n*100+.5);
			q=q/5;
			w[0]=1;
		for(i=0;i<11;i++)
		{
			for(j=coin[i],k=0;j<=q;j++,k++)
			{
				w[j]+=w[k];
			}
		}

		printf("%6.2lf%17lld\n",n,w[q]);
			memset(w,0,sizeof(w));
	}
	return 0;
}
