#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int a[1440],b,c,d,i,j,k,n;
	while(scanf("%d",&n),n!=0)
	{d=0;
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		sort(a,a+n);
		for(i=1;i<n;i++)
		{
			c=a[i]-a[i-1];
			if(c>200)
				d=1;
			
		}
		if(2*(1422-a[n-1])>200)
			d=1;
		
		if(d==0)
			printf("POSSIBLE\n");
		else
			printf("IMPOSSIBLE\n");
	}
	return 0;
}