#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<stack>
#include<queue>
using namespace std;
char ar1[1001],ar2[1001];int ar4[1001],ar3[1001],ar5[1001];
int main()
{
	int a,b,e,f,i,j,k,l,m,n,s;
	char c,d;
	while(gets(ar1))
	{k=0;
		gets(ar2);
		l=strlen(ar1);m=strlen(ar2);
		for(i=0;i<l;i++)
		{
			a=ar1[i]-97;
			ar4[a]++;
		}
		for(i=0;i<m;i++)
		{
			b=ar2[i]-97;
			ar5[b]++;
		}
		for(i=0;i<26;i++)
		{
			if(ar4[i]<ar5[i])
				ar3[i]=ar4[i];
			else
				ar3[i]=ar5[i];
		}
		//ar3[k++]='\0';
		for(i=0;i<26;i++)
		{
			for(j=0;j<ar3[i];j++)
			printf("%c",i+97);
		}
		printf("\n");
		memset(ar3,0,sizeof(ar3));
		memset(ar4,0,sizeof(ar4));
		memset(ar5,0,sizeof(ar5));
	}
return 0;
}