#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int a[100],b,c,d,i,j,k,n,s;
	scanf("%d",&b);
	for(i=0;i<b;i++)
	{s=0;
		scanf("%d",&n);
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[j]);
		}
		sort(a,a+n);
		c=a[n-1]-a[0];
		s=s+c;
		for(k=0;k<n-1;k++)
		{
			if(a[k]>a[k+1])
			{
				c=a[k]-a[k+1];
				s+=c;
			}
			else
				{
				c=a[k+1]-a[k];
				s+=c;
			}
		}
		printf("%d\n",s);

	}
	return 0;
}