#include<stdio.h>
#include<string.h>
int main()
{	int c,d,e,f,g,h,i,l,s;
	char a[1000];
while(gets(a))
{
	s=strlen(a);
	for(i=s-1;i>=0;i--)
	{
		c=a[i];
		if(a[i]>='0'&&a[i]<='9')
		{
			if(a[i]=='1'&&(a[i-1]=='1'||a[i-1]=='2'||a[i-1]=='0'))
			{
				l=((a[i]-48)*100)+((a[i-1]-48)*10)+(a[i-2]-48);
				printf("%c",l);
				i-=2;
			}
			else
			{
				l=((a[i]-48)*10)+(a[i-1]-48);
				printf("%c",l);
				i--;
			}
		}
		//if((a[i]>='a'&&a[i]<='z')&&(a[i]>='A'&&a[i]<='Z'))
		else
		{
		if(c>=100)
		{
			d=c/10;
			e=c%10;
			g=d/10;
			h=d%10;
			f=(e*100)+(h*10)+g;
			if(f<10)
		printf("%d%d%d",e,h,f);
			else if(f<100)
			printf("%d%d",e,f);
				else
			printf("%d",f);
		
		}
		if(c<100)
		{
			d=c/10;
			e=c%10;
			f=(e*10)+d;
		if(f<10)
		printf("%d%d",e,f);
		else
			printf("%d",f);
		}
		}
	}
	printf("\n");
}
return 0;
}