#include<stdio.h>
#include<string.h>
#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<stack>
#include<queue>
using namespace std;
int main()
{
	char ar[100];
	int a,b,c,d,i,j,k,l;
	scanf("%d",&a);
	getchar();
	for(i=1;i<=a;i++)
	{
		scanf("%s",&ar);
		l=strlen(ar);
		sort(ar,ar+l);
		do
		{
			printf("%s\n",ar);
		}
		while(next_permutation(ar,ar+l));
	}
	return 0;
}
