#include<stdio.h>
#include<string.h>
int main()
{
	int a,b,c,d,e,f,g,h,i,j,x=1,l,n,s;
	char str[201];
	while(gets(str))
	{
		a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0;
		l=strlen(str);
		for(j=0;j<l;j++)
		{
			if(str[j]=='a')
			{
				a++;b++;d++;
				if(a==10)
				a=0;
				if(b==10)
				b=0;
				if(d==10)
				d=0;
			}
			else if(str[j]=='b')
			{
				a++;b++;e++;c++;
					if(a==10)
				a=0;
				if(b==10)
				b=0;	
				if(c==10)
				c=0;
				if(e==10)
				e=0;
			}
			else if(str[j]=='c')
			{
				f++;b++;c++;
				if(b==10)
				b=0;
				if(c==10)
				c=0;
				if(f==10)
				f=0;
			}
			else if(str[j]=='d')
			{
				a++;g++;e++;d++;	
				if(a==10)
				a=0;
				if(d==10)
				d=0;
				if(e==10)
				e=0;
				if(g==10)
				g=0;
			}
			else if(str[j]=='e')
			{
				f++;b++;d++;h++;e++;
				if(b==10)
				b=0;
				if(d==10)
				d=0;
				if(e==10)
				e=0;
				if(f==10)
				f=0;
				if(h==10)
					h=0;

			}
			else if(str[j]=='f')
			{
				c++;i++;e++;f++;
				if(c==10)
				c=0;
				if(e==10)
				e=0;
				if(f==10)
				f=0;
				if(i==10)
				i=0;
			}
			else if(str[j]=='g')
			{
				h++;d++;g++;
				if(d==10)
				d=0;
				if(g==10)
				g=0;	
				if(h==10)
				h=0;
			}
			else if(str[j]=='h')
			{
				g++;e++;i++;h++;
				
				if(e==10)
				e=0;
				if(g==10)
				g=0;	
				if(h==10)
				h=0;
				if(i==10)
				i=0;
			}
			else if(str[j]=='i')
			{
				h++;f++;i++;
				if(f==10)
				f=0;	
				if(h==10)
				h=0;
				if(i==10)
				i=0;
			}
		}
		
		
		
	
		
		printf("Case #%d:\n%d %d %d\n%d %d %d\n%d %d %d\n",x,a,b,c,d,e,f,g,h,i);
	x++;
	}
	return 0;
}