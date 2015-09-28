#include<stdio.h>
#include<math.h>
int main()
{
	long a,c,i,l,k,s=0,n;
	char b[10000];
	while(gets(b))
	{s=0;
		l=strlen(b);
	if(b[0]==48&&b[1]==120)//&&b[1]=='120')
	{	
		for(i=l-1,k=0;i>1;i--)
		{	c=b[i]-48;
			s+=c*pow(16,k);
			k++;
		}
		printf("%ld",s);
	}
	}
	return 0;
}