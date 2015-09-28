#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
	char a[102][21],q[21];
	int b[102];
	int c,d,e,f,i,j,k,n,m,s,x=1;
	scanf("%d",&c);
	for(i=0;i<c;i++)
	{f=0;m=0;
		//scanf("%d",&d);
		for(j=0;j<10;j++)
		{
			scanf("%s %d",&a[j],&b[j]);
		} 
		for(k=0;k<10;k++)
		{
			if(b[k]>=m)
				m=b[k];
		}printf("Case #%d:\n",x);
		for(j=0;j<10;j++)
		{
			if(b[j]==m)
				printf("%s\n",a[j]);
		}
		x++;
	}
	return 0;
}
