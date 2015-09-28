#include<stdio.h>
int main()
{
	long long a,b,c,d,k,bb,rr,y[10000],i,j;
	while(scanf("%ld",&d),d!=0)
	{
		for(k=1;k<=d;k++)
		{
			scanf("%lld %lld %lld",&a,&b,&c);
		rr=1;
		bb=a;
          i=0;
        for(;b!=0;)
	   {
	 y[i]=b%2;
	 b=b/2;
	 i++;
        }
	for(j=0;j<i;j++)
	{
		if(y[j]==1)
			rr=(rr*bb)%c;
		//else
			bb=(bb*bb)%c;
	}
	rr=rr%c;
	printf("%lld\n",rr);
	}
	}
	return 0;
}
