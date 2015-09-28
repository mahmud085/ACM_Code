#include<cstdio>
#include<cstring>
#include<vector>
using namespace std;
char ar[9][9],ch;
int ar2[10];
char arr[]={'I','E','H','O','V','A','#'};
void call(int i,int j,int k)
{
	int u,v;
		if(k==7)
		{
			v=0;
			for(u=0;u<k;u++)
			{	
				if(v)
					printf(" ");
				if(ar2[u]==1)
					printf("left");
				else if(ar2[u]==2)
					printf("right");
				else if(ar2[u]==3)
					printf("forth");
				v=1;
			}
			printf("\n");

				
		}
		else
		{
			//printf("dhukce %d\n",k);
			if(ar[i][j-1]==arr[k])
			{
				//printf("1%d %c\n",k,ch);
				ar2[k]=1;
				k=k+1;
				call(i,j-1,k);
			}
			 else if(ar[i][j+1]==arr[k])
			{
				 //printf("2%d %c\n",k,ch);
				ar2[k]=2;
				k=k+1;
				call(i,j+1,k);
			}
			 else if((ar[i-1][j]==arr[k]))
			{
				 //printf("3%d %c\n",k,ch);
				ar2[k]=3;
				k=k+1;
				call(i-1,j,k);
			}
		}

}
int main()
{
	int a,b,c,d,i,j,k,m,n,t;
	scanf("%d",&a);
	while(a--)
	{
		scanf("%d %d",&m,&n);
		getchar();
		for(i=1;i<=m;i++)
		{
			for(j=1;j<=n+1;j++)
			{
				scanf("%c",&ar[i][j]);
				if(ar[i][j]=='@')
				{	b=i;c=j;}
			}
		}
		call(b,c,0);

	}
	return 0;
}