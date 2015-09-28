#include<stdio.h>
#include<string.h>
int main()
{
	int e,i,k,t,s,c;
	char a[150];
	char h[100];
	gets(h);
	sscanf(h,"%d",&t);
	for(i=0;i<t;i++)
	{	s=0;
		c=0;
		gets(a);
		e=strlen(a);
		for(k=0;k<e;k++)
		{	
		if(a[k]=='M')
			c++;
		if(a[k]=='F')
			s++;
			
		}
			if(c==1&&s==1)
			{
				printf("NO LOOP\n");
			}
			else if(c==s)
			printf("LOOP\n");
			
			else
			printf("NO LOOP\n");
	}
return 0;	
}
