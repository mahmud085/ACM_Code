#include<stdio.h>
#include<string.h>
#include<math.h>
	long ar[11][11],arr[110];
int main()
{

	long a,b,c,d,e,f,g,x=1,i,j,k,l,m,n,s;
	while(scanf("%ld",&n),n!=0)
	{
		k=0;
		for(m=1;m<=n;m++)
		{
			for(l=1;l<=n;l++)
				scanf("%ld",&ar[m][l]);
		}
		if(n%2==0)
			f=n/2;
		else
			f=n/2+1;
		for(i=1,j=1,c=1;c<=f;c++)
		{s=0;
			
			if(c>1)
			{
				i=i+1;
				j=j+1;
				n=n-1;
			}
			for(;j<=n;j++)
			{
				s+=ar[i][j];
			}
			for(i=i+1,j=j-1;i<=n;i++)
			{
				s+=ar[i][j];
			}
			for(i=i-1,j=j-1;j>=c;j--)
			{
				s+=ar[i][j];
			}
			for(i=i-1,j=j+1;i>c;i--)
			{
				s+=ar[i][j];
			}
			
			arr[k++]=s;
		}
		printf("Case %ld: ",x);
		for(i=0;i<k;i++)
		{
			printf("%ld",arr[i]);
			if(i!=k-1)
				printf(" ");
		}
		x++;
		memset(arr,0,sizeof(arr));
		printf("\n");
	}
	return 0;
}