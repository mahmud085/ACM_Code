#include<stdio.h>
#include<queue>
using namespace std;
int main()
{
	int a,b[100],c,d,i,j,k,n;
	queue<int>q;
	while(scanf("%d",&n),n!=0)
	{
		j=0;
		if(n==1)
			printf("Discarded cards:\nRemaining card: 1\n");
		else{
		for(i=1;i<=n;i++)
			q.push(i);
		while(!q.empty())
		{
			b[j++]=q.front();
			q.pop();
			d=q.empty();
			if(d==1)
				break;
			c=q.front();
			
			q.push(c);
			q.pop();
		}
		printf("Discarded cards: ");
		for(k=0;k<j-1;k++)
		{
			printf("%d",b[k]);
			if(k!=j-2)
				printf(", ");
		}
		printf("\n");
		printf("Remaining card: ");
		printf("%d",b[j-1]);
		printf("\n");
		}
	}
	return 0;
}