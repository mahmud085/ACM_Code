#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<stack>
#include<queue>
using namespace std;
char ar[100];
int main()
{
	long a,b,c,d,e,f,i,j,k,l,m,n,s;
	c=0;
	while(gets(ar))
	{
		c++;
		l=strlen(ar);
		if(c==1||strcmp(ar,"___________")==0)
			continue;s=0;
		for(i=0;i<6;i++)
		{
			if(ar[i]=='o')
			{
				s=s+pow(2,8-i);
			}
		}
		for(i=9;i>=6;i--)
		{
			if(ar[i]=='o')
			{
				s=s+pow(2,9-i);
			}
		}
		printf("%c",s);
	
//c++;
	}
	return 0;
}


