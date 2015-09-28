#include<stdio.h>
#include<queue>
#include<stack>
using namespace std;
int num[1000];
int main()
{
	int a,b,c,d,e,f,i,j,k,t,x,y,g,h;
	stack<int >s;
	queue<int>q;
	while(scanf("%d",&t),t!=0)
	{ 
		int flag=0;
		while(1)
		{flag=0;f=0;
			scanf("%d",&e);
			if(e==0)
			break;
		 num[1]=1;
		 if(e==t)
		 {
			 f=1;
			 s.push(e);
		 }
		 else
		 {
			 f=0;
			 q.push(e);
		 }
		 if(f==0)
			y=q.front();
			else y=s.top();
		for(i=2;i<=t;i++)
		{
			scanf("%d",&b);
			num[i]=i;
			if(y>b)
			{
				if(y-b)>1)
					s.push(b);
				else
					q.push(b);
			}
			else if(y<b)
			{
				if((b-q.front())==1)
					q.push(b);
				else
					s.push(b);
			}
			y=b;
				
			
		}
		for(j=1;j<=t;j++)
		{
			if(!s.empty())
			{
				if(num[j]==s.top())
				s.pop();
			}
			else if(!q.empty())
			{
			 if(num[j]==q.front())
				q.pop();
			}
			else
			{
				flag=1;break;
			}
		}
		if(flag)
				printf("No\n");
			else
				printf("Yes\n");
			while(!q.empty())
			{
				q.pop();
			}
			while(!s.empty())
				s.pop();
		} 
		printf("\n");
	}
	return 0;
}


		
