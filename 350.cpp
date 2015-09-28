#include<stdio.h>
int main()
{	
	int x=1;
	long b[100000],a,z,c,i,j,e,d,m,l,n,f,s=999;
	while(1)
	{f=0;d=0;
		scanf("%ld %ld %ld %ld",&z,&i,&m,&l);
		if(z==0&&i==0&&m==0&&l==0)
			break;
		s=l;
		for(c=0;c<10000;c++)
		{
			l=((z*l)+i)%m;
			b[c]=l;
			
			//f++;
		}
		for(i=0;i<10000;i++)
		{
			for(j=i+1;j<10000;j++)
			{
				if(b[i]==b[j])
				{
					e=j-i;
					break;
				}
			}
		}
		printf("Case %d: %ld\n",x,e);
		x++;
	}
	return 0;
}
