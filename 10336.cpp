#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;
int sts[100][100],cr;
int c[100],ch,ar[100];

int main()
{
	stack<int> st1,st2;
	char arr[100][100],r;
	int a,b,d,t,n,i,j,k,l,s,t1,t2,o,u,y,max,index;
scanf("%d",&n);
	for(t=1;t<=n;t++)
	{
			scanf("%d %d",&a,&b);
		getchar();
		
		o=0;u=0,y=0;
		for(i=0;i<a;i++)
		{
			scanf("%s",arr[i]);
		}
		for(i=0;i<a;i++)
		{
			for(j=0;j<b;j++)
			{
				ch=arr[i][j]-97;
				if(arr[i][j]>='a'&&arr[i][j]<='z')
				{	
						st1.push(i);
						st2.push(j);
						if(sts[i][j]==0)
						{
							c[ch]++;
							if(c[ch]<2)
						ar[y++]=ch;
						
						}
						while((!st1.empty())&&(!st2.empty()))
						{
							t1=st1.top();
							t2=st2.top();
							st1.pop();
							st2.pop();
							k=t1-1;l=t2;
							if(arr[k][l]==arr[i][j])
								{
									if(sts[k][l]==0)
									{
										st1.push(k);
										st2.push(l);
										sts[k][l]=1;
									}
								}
							k=t1;l=t2-1;
							if(arr[k][l]==arr[i][j])
								{
									if(sts[k][l]==0)
									{
										st1.push(k);
										st2.push(l);
										sts[k][l]=1;
									}
								}
							k=t1;l=t2+1;
							if(arr[k][l]==arr[i][j])
								{
									if(sts[k][l]==0)
									{
										st1.push(k);
										st2.push(l);
										sts[k][l]=1;
									}
								}
							k=t1+1;l=t2;
							if(arr[k][l]==arr[i][j])
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

		printf("World #%d\n",t);
		do
		{
			max=0;
			for(i=0;i<26;i++)
			{
				if(max<c[i])
				{
					max=c[i];
					index=i;
				}
			}
			if(max!=0)
			{
				printf("%c: %d\n",index+97,max);
				c[index]=0;
			}
		}
		while(max!=0);
		memset(sts,0,sizeof(sts));
	}

return 0;
}