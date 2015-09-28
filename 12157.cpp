#include<stdio.h>
int main()
{
	int a[2001],b,c,d,e,f,s,i,j,k,n,x=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{c=0,s=0;
		scanf("%d",&b);
		for(k=0;k<b;k++)
		{
			scanf("%d",&a[k]);
		}
		for(j=0;j<b;j++)
		{d=a[j];
			while(d>=29)
			{
				d=d-29;
				d=d-1;
				s+=10;
			}
			if(d<29&&d>=0)
				s+=10;
		}
		for(j=0;j<b;j++)
		{f=a[j];
			while(f>=59)
			{
				f=f-59;
				f=f-1;
				c+=15;
			}
			if(f<59&&f>=0)
				c+=15;
		}
		if(s<c)
			printf("Case %d: Mile %d\n",x,s);
		else if(s>c)
			printf("Case %d: Juice %d\n",x,c);
		else if(s==c&&s!=0&&c!=0)
			printf("Case %d: Mile Juice %d\n",x,s);
		x++;	
	}
	return 0;
}
		
		