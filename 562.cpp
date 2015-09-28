#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int v[101];
bool clr[25001];
int main()
{
	int a,b,c,d,i,j,k,l,n;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&a);
		int sum=0;
		for(i=1;i<=a;i++)
		{
			scanf("%d",&v[i]);
			sum+=v[i];
		}
		b=sum/2;
		memset(clr,0,sizeof(clr));
		clr[0]=true;
		for(i=1;i<=a;i++)
		{
			for(j=b;j>=1;j--)
			{
				if(!clr[j])
				clr[j]=(v[i]<=j?clr[j-v[i]]:false);
			}
		}
		for(j=b;j>=1;j--)
		{
			if(clr[j])
				break;
		}
	printf("%d\n",abs(sum-(2*j)));
	}
	return 0;
}