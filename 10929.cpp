#include<stdio.h>
#include<string.h>
int main()
{
	char a[1001];
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
			b=t%11;
			s=b;
		}
		if(b==0)
		{
			for(j=0;j<l;j++)
			{
				printf("%ld",a[j]-48);
			}
			printf(" is a multiple of 11.\n");
		}
		else
		{
			for(j=0;j<l;j++)
			{
				printf("%ld",a[j]-48);
			}
			printf(" is not a multiple of 11.\n");
		}
	}
	return 0;
}