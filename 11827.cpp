#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int num[101];
int gcd(int x,int y)
{
	int t;
	while(y%x!=0)
	{
		t=y%x;
		y=x;
		x=t;
	}
	return x;
}
int main()
{
	int a,b,c,n,d,e,f,i,j,l;
	char arr[101];
	scanf("%d",&a);
	getchar();
	while(a--)
	{n=0;
			gets(arr);
			l=strlen(arr);
			for(i=0;i<l;)
			{
				int s=0;
				while(arr[i]&&arr[i]!=' ')
				{
					s=s*10+arr[i]-48;
					i++;
				}
				num[n++]=s;
				while(arr[i]==' ')
					i++;
			}

		
		int mx=0;
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				e=num[i];
				f=num[j];
				if(e<f)
					d=gcd(e,f);
				else
					d=gcd(f,e);
				if(d>mx)
					mx=d;
			}
		}
			printf("%d\n",mx);
	}
	return 0;
}