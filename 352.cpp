#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;
int sts[100][100];
int main()
{
	stack<int> st1,st2;
	char ch,arr[100][100];
	int a,b,c,d,e,f,i,j,k,n,l,x=1,s,t1,t2,count;

	while(scanf("%d",&a)!=EOF)
	{
		getchar();
		count=0;
		for(i=0;i<a;i++)
		{
			scanf("%s",arr[i]);
		}
		for(i=0;i<a;i++)
		{
			for(j=0;j<a;j++)
			{
				if(arr[i][j]=='1')
				{	
						st1.push(i);
						st2.push(j);
						if(sts[i][j]==0)
							count++;
						while((!st1.empty())&&(!st2.empty()))
						{
							t1=st1.top();
							t2=st2.top();
							st1.pop();
							st2.pop();
						for(k=t1-1;k<=t1+1;k++)
						{
							for(l=t2-1;l<=t2+1;l++)
							{
								if(k<0||l<0)
									continue;
								if(k>=a||l>=a)
									continue;
								if(arr[k][l]=='1')
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
				}
			}
		}
		printf("Image number %d contains %d war eagles.\n",x,count);
		memset(sts,0,sizeof(sts));
		x++;
	}

return 0;
}