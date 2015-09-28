#include<stdio.h>
#include<string.h>
int main()
{	char a[2000];
int b,c,d,e,f,s,t,g,i,j,k,l;
	while(1)
	{f=0;
		gets(a);
		l=strlen(a);
		if(!strcmp(a,"*"))
			break;
		for(i=0;i<l;i++)
		{c=0,d=0;
			if(a[0]>='a'&&a[0]<='z')
			{
				e=a[0]-97;
			}
			if(a[0]>='A'&&a[0]<='Z')
			{
				e=a[0]-65;
			}
				if(a[i]==' ')
			{	
				if(a[i+1]>='A'&&a[i+1]<='Z')
					c=a[i+1]-65;
				if(a[i+1]>='a'&&a[i+1]<='z')
				{
					c=a[i+1]-97;
				}
				if(e==c)
					f=0;
				else
				{
					f=1;
					break;
				}
			}
		}
			

			
		
		if(f==0)
			printf("Y\n");
		else
			printf("N\n");
	}
return 0;
}