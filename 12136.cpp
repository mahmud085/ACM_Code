#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g,h,p,q,r,fl,i,j,k,l,t,n,s;
	scanf("%d",&n);
	for(t=1;t<=n;t++)
	{
		scanf("%d:%d %d:%d",&a,&b,&c,&d);
		scanf("%d:%d %d:%d",&e,&f,&g,&h);
		p=a*60+b;
		q=c*60+d;
		r=e*60+f;
		s=g*60+h;
		if(r<p)
		{
			if(s>=p)
				fl=0;
			if(s<p)
				fl=1;
		}
		else
		{
			if(r>q)
				fl=1;
			else
				fl=0;
		}
		if(fl==0)
			printf("Case %d: Mrs Meeting\n",t);
		else
			printf("Case %d: Hits Meeting\n",t);
	}
	return 0;
}