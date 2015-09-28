//#include<iostream.h>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int a[10000],b[10000],c,d,e=1,n,i,j,s,l,m;
while(scanf("%d %d",&n,&m),n!=0&&m!=0)
{
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<m;j++)
	{
		scanf("%d",&b[j]);

	}
	
	if(n>=m)
	c=n-m;
	else
	c=0;
	if(c!=0)
	{
		printf("Case %d: %d %d\n",e,c,a[0]);
	}
	else
		printf("Case %d: %d\n",e,c);
e++;
}
return 0;
}
