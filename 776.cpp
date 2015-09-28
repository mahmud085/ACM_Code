#include<iostream>
#include<cstdio>
#include<cstring>
#define M 500
using namespace std;
int sts[M][M],sacpy[M][M],num[1000];
char array[M][M],arr[1000],ch;
int size,hv,m,sam,n,k,l;
int xx[]={-1, -1, -1, 0, 1, 1, 1, 0};
int yy[]={-2, 0, 2, 2, 2, 0, -2, -2};
void dfs(int,int);

int main()
{
    int t,i,j,max;
    while(1)
    {
        m=0;max=0;
        while(gets(arr)&&strlen(arr)>0)
        {max=1;
			if(arr[0]=='%')
				break;
          strcpy(array[m],arr);
		  m++;
           
        }
        n = strlen(array[0]);

        max = 0;
		sam=0;
        for(i=0;i<m;i++)
            for(j=0;j<n;j++)
                if(sts[i][j]==0)
                {
					if(array[i][j]!=' ')
					{
						sam++;
					ch=array[i][j];
                    dfs(i,j);
					}
                    
                }
			for(k=0;k<n;k+=2)
			{int q=0;
				for(j=0;j<m;j++)
				{	
					if(q<sacpy[j][k])
					q=sacpy[j][k];
					num[k]=q;
				}	
			}
        for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{sam=(num[j]);
				if(array[i][j]!=' ')
				{
				if(sam<10)
				printf("%d",sacpy[i][j]);
				else if(sam<100)
				printf("%2d",sacpy[i][j]);
				else if(sam<1000)
				printf("%3d",sacpy[i][j]);
				else if(sam<10000)
				printf("%4d",sacpy[i][j]);
				if(j!=n-1)
					printf(" ");
				
				}
			}
			printf("\n");
		}
		printf("%%\n");
		if(arr[0]!='%')
			break;
		memset(sts,0,sizeof(sts));
		memset(sacpy,0,sizeof(sacpy));

       
    }
    return 0;
}

void dfs(int x,int y)
{
    int i,o,tx,ty;
	//o=sam+48;
    sacpy[x][y]=sam;
    for(i=0;i<8;i++)
    {
        tx=x+xx[i],ty=y+yy[i];
        if(tx>=0&&tx<m&&ty>=0&&ty<n&&sts[tx][ty]==0&&array[tx][ty]==ch)
		{
			sts[tx][ty]=1;
			dfs(tx,ty);
		}
    }
}