#include<stdio.h>
#include<string.h>
#define M 105

int HQ[M][M],sts[M];

int main()
{
	float z,s,l;
    int t,n,r,i,e,j,k,c=1,x,y;
    //freopen("in.txt","r",stdin);
    while(1)
	{
		memset(sts,0,sizeof(sts));
		l=0;t=0;e=0;
        //scanf("%d%d",&n,&r);
       
        for(i=1;i<=100;i++)
            for(j=1;j<=100;j++)
                HQ[i][j] = M;

        for(i=1;i<=100;i++)HQ[i][i] = 0;
		int max=0;
            while(scanf("%d%d",&x,&y),x!=0&&y!=0)
			{t=1;
				
				if(sts[x]==0)
				{	e++;
					sts[x]=1;
				}
				if(sts[y]==0)
				{	e++;
					sts[y]=1;
				}
					l++;
				HQ[x][y] = 1;
				if(max<x)
					max=x;
				if(max<y)
					max=y;
			}
        if(t==0)
			break;
		 s=0;
        for(k=1;k<=max;k++)
            for(i=1;i<=max;i++)
                for(j=1;j<=max;j++)
                {
                    x = HQ[i][k]+HQ[k][j];
                    if(x < HQ[i][j])
                    {  //sts[i][j]=1;
						HQ[i][j] = x;
					}
                }
        s = 0;
        //scanf("%d%d",&x,&y);
        for(i=1;i<=max;i++)
        {
			for(k=1;k<=max;k++)
            {
				j = HQ[i][k];
			if(j<M)
			{
				s=s+j;
			
			}
			}
        }
		l=(e)*(e-1);
		 z=s/l;
        printf("Case %d: average length between pages = %.3f clicks\n",c++,z);
    }
    return 0;
}
