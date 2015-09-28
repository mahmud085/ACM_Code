#include<stdio.h>
int main()
{
	int a[100][100];
	int c,d,e,f,s,i,j,k,l,n;
	while(scanf("%d",&n),n!=0)
	{f=0;c=0;s=0;
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		for(k=1;k<=n;k++)
		{s=0;
			for(j=1;j<=n;j++)
			{
				s+=a[j][k];
			}
			if(s%2!=0)
			{e=k;
				c++;
			}	
		}
			for(j=1;j<=n;j++)
		{s=0;
			for(k=1;k<=n;k++)
			{
				s+=a[j][k];
			}
			if(s%2!=0)
			{d=j;
				f++;
			}
		}
		
		if(c==0&&f==0)
					printf("OK\n");
				else if(c==1&&f==1)
					printf("Change bit (%d,%d)\n",d,e);
				else if(c>=2||f>=2) 
					printf("Corrupt\n");
				}
	return 0;
}

