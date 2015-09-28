#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;
int sts[200][200];
int main()
{
	stack<int> st1,st2;
	char arr[200][200];
	int a,b,c,d,e,f,g,i,j,k,n,l,s,t1,t2,o,u,x=1;

	while(1)
	{
			scanf("%d",&a);
		getchar();
		if(a==0)
			break;
		c=0;o=0;u=0;
		for(i=0;i<a;i++)
		{
			scanf("%s",arr[i]);
		}
		//for(i=0;i<a;i++)
		//{
			for(j=0;j<a;j++)
			{
				
				if(arr[0][j]=='b')
				{	
						st1.push(0);
						st2.push(j);
						sts[0][j]=1;
						while((!st1.empty())&&(!st2.empty()))
						{
							t1=st1.top();
							t2=st2.top();
							st1.pop();
							st2.pop();
								
							k=t1-1;l=t2;
							if(arr[k][l]=='b')
								{
									if(sts[k][l]==0)
									{
										st1.push(k);
										st2.push(l);
										sts[k][l]=1;
									}
								}
							k=t1;l=t2-1;
							if(arr[k][l]=='b')
								{
									if(sts[k][l]==0)
									{
										st1.push(k);
										st2.push(l);
										sts[k][l]=1;
									}
								}
							k=t1;l=t2+1;
							if(arr[k][l]=='b')
								{
									if(sts[k][l]==0)
									{
										st1.push(k);
										st2.push(l);
										sts[k][l]=1;
									}
								}
							k=t1+1;l=t2;
							if(arr[k][l]=='b')
								{
									if(sts[k][l]==0)
									{
										st1.push(k);
										st2.push(l);
										sts[k][l]=1;
									}
								}
							k=t1-1;l=t2-1;
								if(arr[k][l]=='b')
								{
									if(sts[k][l]==0)
									{
										st1.push(k);
										st2.push(l);
										sts[k][l]=1;
									}
								}
								k=t1+1;l=t2+1;
								if(arr[k][l]=='b')
								{
									if(sts[k][l]==0)
									{
										st1.push(k);
										st2.push(l);
										sts[k][l]=1;
									}
								}
							}
						
				}
				
										
			
			}
	
		f=1;g=1;
		for(i=0;i<a;i++)
		{
		
			if(sts[0][i]==1)
				f=0;
			if(sts[a-1][i]==1)
				g=0;
		}//||sts[0][3]==1||sts[][]==1))
		
		if(f==0&&g==0)
			printf("%d B\n",x);
		else
			printf("%d W\n",x);
		x++;
		memset(sts,0,sizeof(sts));
	}

return 0;
}