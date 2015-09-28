#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
	int a[100];
	int b,c,d,i,k,n;
	while(scanf("%d",&n),n!=0)
	{
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		sort(a,a+n);
		for(i=0;i<n;i++)
		{
			printf("%d",a[i]);
		}
	
	printf("\n");
	}
	return 0;
}
