#include<stdio.h>
#include<string.h>
int main()
{
	int b,e,f,t,i,s,x,j;
	char c[201],d[10];
	gets(d);x=1;
	sscanf(d,"%d",&t);
	for(e=0;e<t;e++)
	{
		gets(c);
	s=strlen(c);printf("Case %d: ",x);
	for(i=0;i<s;i+=2)
	{	
		if(c[i]>='A'&&c[i]<='Z')
	{
		if(c[i+2]>='0'&&c[i+2]<='9')
		{	f=c[i+1]-48;
			b=(f*10)+(c[i+2]-48);
			
			for(j=0;j<b;j++)
		{
			printf("%c",c[i]);
		}
		i++;	
		}
		else
		{
		b=c[i+1]-48;
		
		for(j=0;j<b;j++)
		{
			printf("%c",c[i]);
		}
		}
	
	}
	}
	x++;
	printf("\n");
	}
	return 0;
}