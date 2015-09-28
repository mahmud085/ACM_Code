
    #include<stdio.h>
	#include<string.h>
    #include<math.h>
    #include<vector>
    #include<queue>
    using namespace std;
    #define max 2147483647
    int main()
    {
		long c[10000],d[10000],rr[10000],casn=1,k,n,e,s,i,u,v,count,ds;
    vector<long>edge[10000];
    queue<long>q;
    while(scanf("%ld",&e),e!=0)
	{
		//for(i=0;i<100;i++)
		//d[i]=max;
	
		k=0;
	    for(i=0;i<e;i++)
		{
			scanf("%ld %ld",&u,&v);
			edge[u].push_back(v);
			edge[v].push_back(u);
		}
   
	 while(1)
	{
		 memset(c,0,sizeof(c));
			scanf("%ld %ld",&s,&ds);
			if(s==0&&ds==0)
			break;
			for(i=0;i<10000;i++)
		d[i]=max;
			
			q.push(s);
			d[s]=0;
			count=0;
		while(!q.empty())
		{
			u=q.front();
			q.pop();
			for(i=0;i<edge[u].size();i++)
			{
				v=edge[u][i];
				 if(d[v]>d[u]+1)
				{
					d[v]=d[u]+1;
					q.push(v);
				}
			if(d[v]>ds&&c[v]==0)
			{
				c[v]=1;
				count++;
			}
			}
		}
	printf("Case %ld: %ld nodes not reachable from node %ld with TTL = %ld.\n",casn,count,s,ds);
	casn++;
	 }
	 for(i=0;i<10000;i++)
		 edge[i].clear();
	while(!q.empty())
	q.pop();
	 
}
    return 0;
    }