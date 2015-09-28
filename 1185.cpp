#include<stdio.h>
#include<math.h>
#include<iostream>
#include<ctype.h>
#include<string.h>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	long al,i,j,k,n;
	double s;
	scanf("%ld",&n);
	for(i=1;i<=n;i++)
	{s=0.0;
		scanf("%ld",&al);
		if(al<=1)
			printf("1\n");
		else
		{
		for(j=1;j<=al;j++)
		{
			s+=log10((double)j);
		}
		s=ceil(s);
		printf("%.0lf\n",s);
		}
	}
	return 0;
}
