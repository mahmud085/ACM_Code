#include<stdio.h>
#include<string.h>
int main()
{
	int b,c=0,d,e,f,g=0,h,k,i,j,l,n,s,t;
	char a[100];
	char m[10];
	gets(m);
	sscanf(m,"%d",&n);
	for(t=0;t<n;t++)
	{c=0;g=0;
		gets(a);
		s=strlen(a);
		for(i=0;i<s;i+=5)
		{
			l=a[i]-48;
			b=l*2;
		if(b>9)
		{
			e=b/10;
			f=b%10;
			b=e+f;
		}
			l=a[i+2]-48;
			d=l*2;
		if(d>9)
		{
			e=d/10;
			f=d%10;
			d=e+f;
		}
			c+=b+d;
		}
		for(j=1;j<=s;j+=5)
		{
			l=a[j]-48;
			k=a[j+2]-48;
			g+=l+k;
		}
			h=c+g;
			k=h%10;
		if(k==0)
			printf("Valid\n");
		else
			printf("Invalid\n");
	}
return 0;
}
