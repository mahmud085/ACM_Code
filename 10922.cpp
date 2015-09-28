#include<stdio.h>
#include<string.h>
int main()
{
	char a[1001];
	long b,c,d,e,f,i,j,l,s,t;

	while(1)
	{s=0;c=0;f=0;
		scanf("%s",a);
		l=strlen(a);
		if(a[0]=='0'&&a[1]=='\0')
			break;
		s=a[0]-48;
		for(i=1;i<l;i++)
		{
			s=s+a[i]-48;
	
		}
		while(s>9)
		{
			if(s%9==0)
			c++;
			else
				f=1;
			d=s;
			s=0;
			while(d!=0)
			{
				e=d%10;
				d=d/10;
				s+=e;
				
			}
		}
		if(s%9==0)
			c++;
		
			for(i=0;i<l;i++)
				printf("%d",a[i]-48);
			if(f!=1)
		{
			printf(" is a multiple of 9 and has 9-degree ");
				printf("%ld.\n",c);
			}
			else
				printf(" is not a multiple of 9.\n");
	}
return 0;
}
	