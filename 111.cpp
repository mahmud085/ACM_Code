#include<cstdio>
#include<algorithm>
using namespace std;
#define L 22
int org[L],sam[L],lim[L];
int main()
{
	int a,b,c,d,n,i,j,k,mx;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		org[i]=a;
	}
	while(scanf("%d",&b)==1)
	{
		sam[b]=org[0];
		for(i=1;i<n;i++)
		{
			scanf("%d",&b);
			sam[b]=org[i];
		}
		int cnt=0,mx=0,d=0;
		for(i=1;i<=n;i++)
		{d=0;
			for(j=i-1;j>=0;j--)
			{
				if(sam[i]>sam[j])
				{
					if(lim[j]>d)
						d=lim[j];
				}
			}
			lim[i]=d+1;

			if(d>mx)
				mx=d;
		}
		printf("%d\n",mx+1);
	}
	return 0;
}