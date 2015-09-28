#include<stdio.h>
#include<string.h>
int main()
{
	char a[100000];
	long b,c,d,i,j,l,s,t;
	while(1)
	{s=0;
		scanf("%s",a);
		l=strlen(a);
		if(a[0]=='0'&&a[1]=='\0')
			break;
		s=a[0]-48;
		for(i=1;i<l;i++)
		{
			t=s*10+a[i]-48;
			b=t%17;
			s=b;
		}
		if(b==0)
		{
	
			printf("1\n");
		}
		else
		{
			printf("0\n");
		}
	}
	return 0;
}