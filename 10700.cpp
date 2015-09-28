#include<stdio.h>
#include<string.h>
int main()
{
	char a[10000];
	long b,c,d,,i,j,k;
	while(gets(a))
	{s=0
		l=strlen(a);
		for(i=0;i<l;i++)
		{
			if(a[i]=='+')
			{
				while(a[i]!='+')
				{
					s+=(a[i-1]-48)+(a[i+1]-48);
					i+=2;
				}
			}
			if(a[i]=='*')
			{
				while(a[i+2]!='*')
				{
					s*=(a[i+1]-48);
					i+=2;
				}
			}
			i--;