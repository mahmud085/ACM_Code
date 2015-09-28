#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int a[3000],s[3000];
	int b,c,d,i,j,k,n;
	while(scanf("%d",&n)==1)
	{d=0;
		for(i=1;i<=n;i++)
		{
			scanf("%d",&a[i]);
		}
		
		for(j=1;j<=n;j++)
		{
				s[j]=abs(a[j]-a[j+1]);
			
		}
		sort(s,s+n);
		for(k=1;k<n;k++)
		{
			if(s[k]!=k)
				d++;
		}
		if(d==0)
			printf("Jolly\n");
		else
			printf("Not jolly\n");
	}
	return 0;
}