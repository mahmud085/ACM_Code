#include<iostream>
#include<cstdio>
#include<cstring>
#define M 26
using namespace std;

char array[M][M],arr[1000];
int size,hv,m,n;
int xx[]={-1, 0, 1, 0, -1, 1, 1, -1};
int yy[]={0, 1, 0, -1, 1, 1, -1, -1};
void dfs(int,int);

int main()
{
    int t,i,j,max;
    scanf("%d\n\n",&t);

    while(t--)
    {
        m=0;
        while(gets(arr)&&strlen(arr)>0)
        {
          strcpy(array[m],arr);
		  m++;
           
        }
        n = strlen(array[0]);

        max = 0;
        for(i=0;i<m;i++)
            for(j=0;j<n;j++)
                if(array[i][j]=='1')
                {
                    size=0;
                    dfs(i,j);
                    if(max<size)max=size;
                }
        if(t)
            printf("%d\n\n",max);
        else
            printf("%d\n",max);
       
    }
    return 0;
}

void dfs(int x,int y)
{
    int i,tx,ty;
    array[x][y]='0';

    size++;
    for(i=0;i<8;i++)
    {
        tx=x+xx[i],ty=y+yy[i];
        if(tx>=0&&tx<m&&ty>=0&&ty<n&&array[tx][ty]=='1')
            dfs(tx,ty);
    }
}