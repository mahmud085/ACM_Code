#include<cstdio>
#include<cstring>
#include<iostream>
#include<string>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;
int ar2[10000],k=0,cnt;
int dx[]={-1,-1,-1,0,1,1,1,0};
int dy[]={-1,0,1,1,1,0,-1,-1};
char arr[50][50];
int dfs(int x,int y)
{
	int p;
	if(arr[x][y]=='*')
	arr[x][y]='.';
	 if(arr[x][y]=='X')
		arr[x][y]='1';
	for(p=0;p<8;p++)
	{
		if(arr[x+dx[p]][y+dy[p]]=='*')
			dfs(x+dx[p],y+dy[p]);
		 if(arr[x+dx[p]][y+dy[p]]=='X')
		{
			if(arr[x+dx[p]-1][y+dy[p]]!='1'&&arr[x+dx[p]][y+dy[p]+1]!='1'&&arr[x+dx[p]+1][y+dy[p]]!='1'&&arr[x+dx[p]][y+dy[p]-1]!='1')
			{
				++cnt;
			//	cout<<"cnt "<<cnt;
				dfs(x+dx[p],y+dy[p]);
			}
			else
				dfs(x+dx[p],y+dy[p]);
		}
	}
	//ar2[k++]=cnt;
	return cnt;
}
int main()
{
	
	int a,c,i,j,n=1,b;
	while(1)
	{
		scanf("%d %d",&a,&c);
		getchar();
		if(a==0&&c==0)break;
		for(i=0;i<c;i++)
		{
			scanf("%s",arr[i]);
		}
		cout<<"Throw "<<n<<endl;
		for(i=0;i<c;i++)
		{
			for(j=0;j<a;j++)
			{
				if(arr[i][j]=='*'||arr[i][j]=='X')
				{
					b=dfs(i,j);
					
					cnt=0;
					ar2[k++]=b;
				}
			}
		}
		sort(ar2,ar2+k);
		for(i=0;i<k;i++)
		{
			if(i)
			printf(" ");
			printf("%d",ar2[i]);
		}
		cout<<endl<<endl;
		n++;
	}
return 0;

}