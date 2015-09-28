#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<stack>
#include<queue>
using namespace std;
char ar[51],ar2[51];
int main()
{
	long a,b,c,d,e,f,g,h,i,n,m,j,k,l;
	scanf("%ld",&n);
	getchar();
	while(n--)
	{
		scanf("%s",ar);
		l=strlen(ar);
		b=0;f=0;g=0;h=0;e=0;a=0,m=0;
		for(i=0;i<l;i++)
		{
			if(ar[i]=='E'||ar[i]=='M'||ar[i]=='?')
			{
			
				if(ar[i]=='M')
				{
					c=i;m++;
					ar2[e++]=ar[i];
					for(j=c-1;j>=0;j--)
					{
						if(ar[j]=='?')
							f++;
					}
				}
				if(ar[i]=='E')
				{
					d=i;b++;
					ar2[e++]=ar[i];
					for(j=d-1;j>=0;j--)
					{
						if(ar[j]=='?')
							g++;
						if(ar[j]=='M')
							break;
					}
					//break;
				}
				
			}
			else{
					a=1;break;
			}
		}
		for(j=d+1;j<l;j++)
				{
					if(ar[j]=='?')
					h++;
				}
		
		k=g+f;
		if(a!=1)
		{
			if(f!=0&&g!=0&&h!=0&&h==k&&m==1&&b==1&&ar2[0]=='M'&&ar2[1]=='E')
				printf("theorem\n");
			else
				printf("no-theorem\n");
		}
		else
			printf("no-theorem\n");
	}


return 0;
}