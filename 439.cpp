#include<stdio.h>
#include<string.h>
#include<math.h>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>
#define L 22222222
using namespace std;
int cost[10][10];
char ch1[3],ch2[3];
int main()
{
	queue<long>q1,q2;
	long a,b,c,d,e,f,i,j,k,l,s,t1,t2;
	while(scanf("%s %s",&ch1,&ch2)!=EOF)
	{
		b=ch1[0]-96;
		a=ch1[1]-48;
		d=ch2[0]-96;
		c=ch2[1]-48;
		//memset(cost,623472,sizeof(cost));
		for(i=1;i<=8;i++)
		{
			for(j=1;j<=8;j++)
				cost[i][j]=L;
		}
		q1.push(a);
		q2.push(b);
		cost[a][b]=0;
		while(!q1.empty())
		{
			t1=q1.front();t2=q2.front();
			q1.pop();q2.pop();
				if(t1-1==c&&t2-2==d)
			{
				if(cost[t1-1][t2-2]>cost[t1][t2]+1)
					cost[t1-1][t2-2]=cost[t1][t2]+1;
				break;
			}
			 if((t1-1!=c||t2-2!=d)&&t1-1>0&&t2-2>0)
			{
				if(cost[t1-1][t2-2]>cost[t1][t2]+1)
					cost[t1-1][t2-2]=cost[t1][t2]+1;
				q1.push(t1-1);
				q2.push(t2-2);
			}
		if(t1-2==c&&t2-1==d)
			{
				if(cost[t1-2][t2-1]>cost[t1][t2]+1)
					cost[t1-2][t2-1]=cost[t1][t2]+1;
				break;
			}
			if((t1-2!=c||t2-1!=d)&&t1-2>0&&t2-1>0)
			
		
			{
				if(cost[t1-2][t2-1]>cost[t1][t2]+1)
					cost[t1-2][t2-1]=cost[t1][t2]+1;
				q1.push(t1-2);
				q2.push(t2-1);
			}
			if(t1-1==c&&t2+2==d)
			{
				if(cost[t1-1][t2+2]>cost[t1][t2]+1)
					cost[t1-1][t2+2]=cost[t1][t2]+1;
				break;
			}
			if((t1-1!=c||t2+2!=d)&&t1-1>0&&t2+2<9)
			{
				if(cost[t1-1][t2+2]>cost[t1][t2]+1)
					cost[t1-1][t2+2]=cost[t1][t2]+1;
				q1.push(t1-1);
				q2.push(t2+2);
			}
			if(t1+1==c&&t2+2==d)
			{
				if(cost[t1+1][t2+2]>cost[t1][t2]+1)
					cost[t1+1][t2+2]=cost[t1][t2]+1;
				break;
			}
			if((t1+1!=c||t2+2!=d)&&t1+1<9&&t2+2<9)
			{
				if(cost[t1+1][t2+2]>cost[t1][t2]+1)
					cost[t1+1][t2+2]=cost[t1][t2]+1;
				q1.push(t1+1);
				q2.push(t2+2);
			}
			if(t1+2==c&&t2+1==d)
			{
				if(cost[t1+2][t2+1]>cost[t1][t2]+1)
					cost[t1+2][t2+1]=cost[t1][t2]+1;
				break;
			}
			if((t1+2!=c||t2+1!=d)&&t1+2<9&&t2+1<9)
			{
				if(cost[t1+2][t2+1]>cost[t1][t2]+1)
					cost[t1+2][t2+1]=cost[t1][t2]+1;
				q1.push(t1+2);
				q2.push(t2+1);
			}
			if(t1+1==c&&t2-2==d)
			{
				if(cost[t1+1][t2-2]>cost[t1][t2]+1)
					cost[t1+1][t2-2]=cost[t1][t2]+1;
			
				break;
			}
			if((t1+1!=c||t2-2!=d)&&t1+1<9&&t2-2>0)
			{
				if(cost[t1+1][t2-2]>cost[t1][t2]+1)
					cost[t1+1][t2-2]=cost[t1][t2]+1;
				q1.push(t1+1);
				q2.push(t2-2);
			}
			if(t1+2==c&&t2-1==d)
			{
				if(cost[t1+2][t2-1]>cost[t1][t2]+1)
					cost[t1+2][t2-1]=cost[t1][t2]+1;
			
				break;
			}
			if((t1+2!=c||t2-1!=d)&&t1+2<9&&t2-1>0)
			{
				if(cost[t1+2][t2-1]>cost[t1][t2]+1)
					cost[t1+2][t2-1]=cost[t1][t2]+1;
				q1.push(t1+2);
				q2.push(t2-1);
			}
			if(t1-2==c&&t2+1==d)
			{
				if(cost[t1-2][t2+1]>cost[t1][t2]+1)
					cost[t1-2][t2+1]=cost[t1][t2]+1;
			
				break;
			}
			if((t1-2!=c||t2+1!=d)&&t1-2>0&&t2+1<9)
			{
				if(cost[t1-2][t2+1]>cost[t1][t2]+1)
					cost[t1-2][t2+1]=cost[t1][t2]+1;
				q1.push(t1-2);
				q2.push(t2+1);
			}
			

		}
		printf("To get from %s to %s takes %d knight moves.\n",ch1,ch2,cost[c][d]);
		memset(cost,0,sizeof(cost));
		while(!q1.empty())
		{q1.pop();q2.pop();}
	}

return 0;
}