#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<stack>
#include<queue>
using namespace std;
char ar1[100001];
char ar2[1001];
int main()
{
	long a,b,c,d,i,j,k,l,m,n,s;
	scanf("%ld",&n);
	getchar();
	while(n--)
	{
		gets(ar1);
		scanf("%ld",&m);
		getchar();
		for(i=1;i<=m;i++)
		{
			gets(ar2);
			if(strstr(ar1,ar2)==NULL)
			{
				printf("n\n");
			}
			else
				printf("y\n");
		}
	}

return 0;
}