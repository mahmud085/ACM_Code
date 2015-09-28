#include<stdio.h>
#include<string.h>
int main()
{int c,i,j,t,x=1,s;
	char a[1000];
	char b[10];
	gets(b);
	sscanf(b,"%d",&t);
		for(j=1;j<=t;j++)
		{
	s=0;
	gets(a);
	c=strlen(a);
	for(i=0;i<=c;i++)
	{
		if(a[i]=='a'||a[i]=='d'||a[i]=='g'||a[i]=='j'||a[i]=='m'||a[i]=='p'||a[i]=='t'||a[i]=='w'||a[i]==' ')
		{
			s++;
		}
		if(a[i]=='b'||a[i]=='e'||a[i]=='h'||a[i]=='k'||a[i]=='n'||a[i]=='q'||a[i]=='u'||a[i]=='x')
		{
			s+=2;
		}
		if(a[i]=='c'||a[i]=='f'||a[i]=='i'||a[i]=='l'||a[i]=='o'||a[i]=='r'||a[i]=='v'||a[i]=='y')
		{
			s+=3;
		}
		if(a[i]=='s'||a[i]=='z')
		{
			s+=4;
		}
	
	}	
	printf("Case #%d: %d\n",x,s);
	x++;
		}
	return 0;
}

