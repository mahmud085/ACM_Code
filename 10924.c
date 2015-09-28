#include<stdio.h>
int main()
{
	char a[21];
	int f=0,i,j,c,k,s;
	while(gets(a))
	{f=0;s=0;
	for(i=0;a[i]!='\0';i++)
	{
if(a[i]>='a'&&a[i]<='z')
	{	j=96;
		k=a[i];
		c=k-j;
		s+=c;

	}
if(a[i]>='A'&&a[i]<='Z')
	{	j=38;
		k=a[i];
		c=k-j;
		s+=c;
	}

	}f=0;
	for(i=2;i<s;i++)
	{
		if(s%i==0)
		{
			f=1;
			break;
		}
	}
	if(f==1)
		printf("It is not a prime word.\n");
	if(f==0)
		printf("It is a prime word.\n");

	}
	return 0;
}