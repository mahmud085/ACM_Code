#include<stdio.h>
#include<string.h>
int main()
{int c,d,e,t,f,i;
	char a[21];
	char b[21];
	char h[10];
	gets(h);
	sscanf(h,"%d",&t);
	for(e=1;e<=t;e++)
	{
	scanf("%s",a);
	scanf("%s",b);
	c=strlen(a);
	d=strlen(b);
	if(c==d)
	{
	for(i=0;i<c;i++)
	{f=1;
		if(a[i]==b[i])
		f=1;
		
		else
		{
		 if ((a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')&&(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u'))
		 {
			 f=1;
			 }
		else
			f=0;
		break;
		}
	}
	if(f==1)
		printf("Yes\n");
	else
	//if(f==0)
	printf("No\n");
	}
	else
	printf("No\n");
	
	}
	return 0;
}