#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
	long long a,b,d,c,e,f,g,i,j,k,r,s,l,m;
	char n[10000],ar[10000],temp;
	while(scanf("%s",&n)!=EOF)
	{j=0;s=0;r=0;
		l=strlen(n);
		
		sort(n,n+l);
		for(i=l-1;i>=0;i--)
		{	ar[j++]=n[i];
		}ar[j++]='\0';
		sscanf(ar,"%lld",&e);
		for(i=0;i<l;i++)
		{
			if(n[i]!='0')
			{
				temp=n[i];
				n[i]=n[0];
				n[0]=temp;
				break;
			}
		}
		sscanf(n,"%lld",&f);
		
		
		c=abs(e-f);
		g=c/9;
		if(e>f)
		printf("%lld - %lld = %lld = 9 * %lld\n",e,f,c,g);
		else
			printf("%lld - %lld = %lld = 9 * %lld\n",f,e,c,g);
		memset(ar,'0',sizeof(ar));

	}
	return 0;
}