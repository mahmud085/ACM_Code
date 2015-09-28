#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<stack>
#include<queue>
using namespace std;
char arr[1001];
long num[250];
int main()
{
	long a,b,c,d=1,e,f,i,j,k,l,n;
	while(gets(arr))
	{f=0;
		l=strlen(arr);
		for(i=0;i<l;i++)
		{	
			if(arr[i]>=32&&arr[i]<=127)
			{
				c=arr[i];
				num[c]++;
			if(num[c]>f)
				f=num[c];
			else
				f=f;
			}
		}
	if(d>1)
		printf("\n");
		for(i=1;i<=f;i++)
		{
			for(j=130;j>=0;j--)
			{
				if(num[j]==i)
					printf("%ld %ld\n",j,i);
			}
		}
		d++;
		memset(num,0,sizeof(num));
	}
return 0;
}