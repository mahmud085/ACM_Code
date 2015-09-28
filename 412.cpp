#include<cstdio>
#include<cmath>
int ar1[32778];
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
	int a,b,c,d,i,j,k,n;
	while(scanf("%d",&n),n!=0)
	{
		for(i=0;i<n;i++)
			scanf("%d",&ar1[i]);
		int cnt=0;c=0;
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				a=ar1[i];
				b=ar1[j];
				c++;
				if(a<b)
					d=gcd(a,b);
				else
					d=gcd(b,a);
				if(d==1)
					cnt++;
			}
		}
		if(cnt>0)
			printf("%.6lf\n",(double)(sqrt((c*6.0)/cnt)));
		else if(cnt==0)
			printf("No estimate for this data set.\n");
	}
	return 0;
}