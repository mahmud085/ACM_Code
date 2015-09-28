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
	while(1)
	{
		scanf("%ld",&n);
		getchar();
		scanf("%s",&ar);
		if(n==0&&ar[0]=='0')
			break;
		l=strlen(ar);
		for(i=0;i<l;i++)
		{
			d=2*n+3;
			c=ar[i]-48;
			if(c==2)
			{
				for(k=1;k<=d;k++)
				{
					if(k==1||k==d||k==(d+1)/2)
					{
						for(j=1;j<=n+2;j++)
						{
							if(j==1||j==n+2)
							{
								printf(" ");
								continue;
							}
							else
								printf("-");
						}
						if(k!=d)
							printf("\n");
					}
					else if(k>=2&&k<(d+1)/2)
					{
						for(j=1;j<=n+2;j++)
						{
							if(j==n+2)
								printf("|");
							else
								printf(" ");
						}
						printf("\n");
					}
					
					else if(k>(d+1)/2||k>d)
					{
						for(j=1;j<=n+2;j++)
						{
							if(j==1)
								printf("|");
							else
								printf(" ");
						}
						printf("\n");
					}
				}
			}
			if(c==3)
			{
				for(k=1;k<=d;k++)
				{
					if(k==1||k==d||k==(d+1)/2)
					{
						for(j=1;j<=n+2;j++)
						{
							if(j==1||j==n+2)
							{
								printf(" ");
								continue;
							}
							else
								printf("-");
						}
						if(k!=d)
							printf("\n");
					}
					else if(k>=2&&k<(d+1)/2)
					{
						for(j=1;j<=n+2;j++)
						{
							if(j==n+2)
								printf("|");
							else
								printf(" ");
						}
						printf("\n");
					}
					
					else if(k>(d+1)/2||k>d)
					{
						for(j=1;j<=n+2;j++)
						{
							if(j==n+2)
								printf("|");
							else
								printf(" ");
						}
						printf("\n");
					}
				}
			}
			printf(" ");
		}

	}
return 0;
}