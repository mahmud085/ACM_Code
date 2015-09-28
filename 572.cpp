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
	int a,b,c,d,e,f,i,j,k,n,l,s,t1,t2,count;

	while(1)
	{
			scanf("%d %d",&a,&b);
		getchar();
		if(a==0&&b==0)
			break;
		count=0;
		for(i=0;i<a;i++)
		{
			scanf("%s",arr[i]);
		}
		for(i=0;i<a;i++)
		{
			for(j=0;j<b;j++)
			{
				if(arr[i][j]=='@')
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
								if(k>=a||l>=b)
									continue;
								if(arr[k][l]=='@')
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
		printf("%d\n",count);
		memset(sts,0,sizeof(sts));
	}

return 0;
}