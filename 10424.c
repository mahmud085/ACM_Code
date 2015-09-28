#include<stdio.h>
int main()
{
	char a[26];char b[26];
	int c,s,e,u=0,m,v=0,t,l,i,p,j,k,x,z;
float g,r,h;
	while(gets(a))
	{
		s=0;e=0;u=0;v=0;
		gets(b);
		for(i=0;a[i]!='\0';i++)
		{
			if(a[i]>='a'&&a[i]<='z')
			{z=96;
				c=a[i]-z;
				s+=c;
			}
			if(a[i]>='A'&&a[i]<='Z')
			{z=64;
				c=a[i]-z;
				s+=c;
			}
		}
		for(i=0;b[i]!='\0';i++)
		{
			if(b[i]>='a'&&b[i]<='z')
			{z=96;
				c=b[i]-z;
				e+=c;
			}
			if(b[i]>='A'&&b[i]<='Z')
			{z=64;
				c=b[i]-z;
				e+=c;
			}
		}
		for(i=s;i>0;)
	
		{
			j=i%10;
			i=i/10;
			u=u+j;
		}
		t=0;
	
		for(k=u;k>0;)
		{
		l=k%10;
		k=k/10;
		t=l+t;
		}
		r=0;
	
		for(m=t;m>0;)
		{
		p=m%10;
		m=m/10;
		r=r+p;
		}
		{
		for(i=e;i>0;)
	
		{
		
		j=i%10;
		i=i/10;
		v=v+j;
		
		}
		x=0;
	for(k=v;k>0;)
	{
		l=k%10;
		k=k/10;
		x=l+x;
	}
	h=0;
	for(m=x;m>0;)
	{
		p=m%10;
		m=m/10;
		h=h+p;
	}
}
	if(r<h)
		g=(r/h)*100;
	else
		g=(h/r)*100;

	printf("%.2f %%\n",g);
	
	}
	return 0;
}