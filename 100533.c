#include<stdio.h>
int main()
{
	int a,b,c,d,e,i,j,k,l,f,s,t,n,q;
	scanf("%d",&n);
	for(t=0;t<n;t++)
	{	q=0;
		scanf("%d %d",&a,&b);
		for(i=a;i<=b;i++)
		{	c=0;
			for(k=i;k>0;)
			{
				d=k%10;
				k=k/10;
				c+=d;
			}
			s=0;
			for(l=c;l>0;)
			{
				e=l%10;
				l=l/10;
				s+=e;
			}
			for(j=2;j<s;j++)
			{	
				if(s%j==0)
				{
					f=1;
					break;
				}
				else 
				f=0;
			}
				if(f==0)
				{
				q++;
				}
			
		}
		printf("%d\n",q);
	}
	return 0;
}