#include<stdio.h>
#include<string.h>
int main()
{
	int x=1;
	__int64 e,i,f,s,k=0,j,l,u,c,m,b,n;
char a[100],t;
scanf("%I64d",&n);
for(k=0;k<n;k++)
{		
	f=0;c=0;
	scanf("%s",&a);
	e=strlen(a);b=1;

	for(i=0;i<e;i++)
	{
		if(a[i]>='A'&&a[i]<='Z')

		{
			t=a[i];

		for(j=i;j<e;j++)
		{
		
			if(t==a[j])
			{
				c++;
				a[j]=' ';
			}
		}
	
		if(t!=' ')
		{
			if(c>1)
			{
				f=c;
			//printf("\nThe %c is %dtimes\n",t,c);
			u=1;
			for(j=f;j>=1;j--)
			{
				u=u*j;
			}
				b=b*u;
			}
		c=0;
		}

	}
}
//if(e<=12)
//{
m=1;
for(i=e;i>=1;i--)
{
	m=m*i;
}

s=m/b;

printf("Data set %d: %I64d\n",x,s);
x++;
}
//}
return 0;
}