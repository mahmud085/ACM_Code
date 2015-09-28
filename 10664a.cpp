#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int v[31];
bool clr[251];
char da[210];
int main()
{
	int a,b,c,d,i,f,j,k,l,n;
	scanf("%d",&n);
	getchar();
	while(n--)
	{
		int sum=0;i=0;
		gets(da);
		l=strlen(da);
		a=0;
		for(i=0;i<l;)
		{
			int y=0;
			while(da[i]&&da[i]!=' ')
			{
				y=y*10+da[i]-48;
				i++;
			}
			while(da[i]==' ')
				i++;
			v[a]=y;
			sum+=v[a];
			a++;
		}
		b=sum/2;
		for(k=0;k<=sum/2;k++)
			clr[k]=false;
		clr[0]=true;
		for(k=0;k<a;k++)
		{
			for(j=b-v[k];j>=0;j--)
			{
				if(clr[j]==true)
					clr[j+v[k]]=1;
			}
		}
		for(j=b;j>=0;j--)
		{
			if(clr[j]==true)
				break;
		}
		f=sum-(2*j);
		if(f==0)
		printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}