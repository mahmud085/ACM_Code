#include<stdio.h>
#include<string.h>
#define L 2021
int r[L];
int a[L];
void prime()
{
	int i,j,k;
	for(i=3;i<L;i+=2)
		{
			if(a[i]==0)
			{
            for(j=i*i;j<L;j+=i+i)
			a[j]=1;
		    }
		}
	for(i=4;i<=L;i+=2)
		a[i]=1;
	

}
int main()
{
	prime();
	char w[2001];
	//int c,b,d,e,f,i,j,k,n;
	int c,d,e,f,g,t,i,j,k,l,m,n,s;
	scanf("%d",&n);
	getchar();
	for(t=1;t<=n;t++)
	{f=0;
		gets(w);
		l=strlen(w);
		for(j=0;j<l;j++)
		{
			if(w[j]>=48&&w[j]<=123)
			{
				c=w[j];
				r[c]++;
			}
			

		}
		a[1]=1;
		printf("Case %d: ",t);
		for(k=48;k<126;k++)
		{
			d=r[k];
			if(a[d]==0&&d!=0)
			{
				f=1;
				printf("%c",k);
			}
		}
		if(f==0)
			printf("empty");
		printf("\n");
		memset(r,0,sizeof(r));

	}
	return 0;
}