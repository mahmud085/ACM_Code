#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int p[32+3],w[1005],v[1005];
int main()
{
	int i,j,a,n,k,l,c,d,b,maxiw,item;
	scanf("%d",&n);
	while(n--)
	{
		int sum=0;
		scanf("%d",&item);
		for(k=0;k<item;k++)
		{
			scanf("%d %d",&b,&c);
			w[k]=c;
			v[k]=b;
		}
		memset(p,0,sizeof(p));
		for(i=0;i<item;i++)
			{
				for(j=32;j>=0;j--)
				{
					if(w[i]<=j&&p[j]<p[j-w[i]]+v[i])
						p[j]=p[j-w[i]]+v[i];
					
				}
			}
		scanf("%d",&d);
		for(l=1;l<=d;l++)
		{
			scanf("%d",&maxiw);
				sum+=p[maxiw];
		}
		printf("%d\n",sum);
	}
	return 0;
}