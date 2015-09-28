#include<cstdio>
#define L 32769
int a[L],len[L];
int main()
{
	int b,c,d,i,j,k,n,x=1;
	while(scanf("%d",&n),n!=-1)
	{
		a[0]=n;k=1;
		while(scanf("%d",&n),n!=-1)
		{
			a[k++]=n;
		}
		int mx=0;
		if(x>1)printf("\n");
		for(i=0;i<k;i++)
			len[i]=1;
		for(i=0;i<k;i++)
		{
			if(len[i]>mx)
				mx=len[i];
			for(j=i+1;j<k;j++)
			{
				if(a[j]<=a[i]&&len[j]<len[i]+1)
					len[j]=len[i]+1;
			}
		}
		printf("Test #%d:\n",x);
		printf("  maximum possible interceptions: %d\n",mx);
		x++;
		
	}
	return 0;
}