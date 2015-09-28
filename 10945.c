#include<stdio.h>
#include<string.h>
int main()
{
	int c,s,d,e,f,i,j,k,l,m,n;
	char a[1000],b[1000];
	while(gets(a))
	{f=0;
		l=strlen(a);
		if(!strcmp(a,"DONE"))
			break;
	
		for(i=0,j=0;i<l;i++)
		{	

			if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')&&a[i]!='.'&&a[i]!=','&&a[i]!='!'&&a[i]!='?')
			{
				b[j]=a[i];
				j++;
			}
		}
		for(m=0,k=j-1;m<k;m++,k--)
		{
			if(b[m]>='a'&&b[m]<='z')
			{
				d=b[m]-97;
			}
			if(b[m]>='A'&&b[m]<='Z')
			{
				d=b[m]-65;
			}
			if(b[k]>='a'&&b[k]<='z')
			{
				e=b[k]-97;
			}
			if(b[k]>='A'&&b[k]<='Z')
			{
				e=b[k]-65;
			}
			if(d==e)
			{
				f=0;
			}
			else
			{
				f=1;
				break;
			}
			//printf("%c",b[k]);
		}
		if(f==0)
		printf("You won't be eaten!\n");
		else
			printf("Uh oh..\n");
	}
	return 0;
}