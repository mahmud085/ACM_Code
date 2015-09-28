#include<cstdio>
#include<cstring>
#include<cmath>
typedef unsigned long sam;
sam gcd(sam x,sam y)
{
	sam r;
	while(y%x!=0)
	{
		r=y%x;
		y=x;
		x=r;
	}
	return x;
}
int main()
{
	char ar1[40],ar2[40];
	sam a,b,c,d,i,res,j,e,f,n;
	scanf("%lu",&n);
	getchar();
	for(i=1;i<=n;i++)
	{
		scanf("%s",ar1);
		scanf("%s",ar2);
		a=strlen(ar1);e=a-1;
		b=strlen(ar2);f=b-1;
		c=0;d=0;
		for(j=0;j<a;j++)
			c+=(ar1[j]-48)*pow(2,e--);
		for(j=0;j<b;j++)
			d+=(ar2[j]-48)*pow(2,f--);
		if(c<d)
			res=gcd(c,d);
		else
			res=gcd(d,c);
		if(res!=1)
			printf("Pair #%lu: All you need is love!\n",i);
		else
			printf("Pair #%lu: Love is not all you need!\n",i);
	}
	return 0;
}