#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<stack>
#include<queue>
using namespace std;
int a[201];

int pre(int b,int d)
{
	int i,j,k,e,f;
	for(i=1;i<=b;i++)
		a[i]=1;
	e=0;
	a[1]=0;
	f=1;
	for(i=1;;i++)
	{
		for(j=1;j<=b;j++)
		{
			if(a[j]==1)
				e++;
			if(e==d)
			{
				a[j]=0;
				e=0;
				f++;
				k=j;
			}
			if(f==b)
				break;
		}
		if(f==b)
			break;
	}
	return k;
}
int main()
{
int b,c,i;
	while(scanf("%d",&b),b!=0)
	{
		for(i=1;;i++)
		{
		c=pre(b,i);
		if(c==2)
		{
			printf("%d\n",i);
			break;
		}
		}
	}
return 0;
}