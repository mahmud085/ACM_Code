#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char b[1000];
	long  a,n,c,d,e,f,g,i=0,j,l,k,s;
//	scanf("%d",&n);
	while(scanf("%s",b)!=EOF)
	{	l=strlen(b);
		s=0;
	
	
		if(b[0]==45)//&&b[1]==49)
			break;	
	if(b[0]==48&&b[1]==120)
	{	
		for(f=l-1,k=0;f>1;f--)
		{	
		if(b[f]==65)
			c=10;
	
		else if(b[f]==66)
			c=11;
		else if	(b[f]==67)
			c=12;
		else if(b[f]==68)
		c=13;
		else if(b[f]==69)		
		c=14;
		else if(b[f]==70)
		c=15;
		else
		c=b[f]-48;
			s+=c*pow(16,k);
			k++;
		}
		printf("%ld",s);
	}
	else
	{
		n=0;j=l-1;
		for(g=0;g<l;g++)
		{
			e=b[g]-48;
			n+=e*pow(10,j);
			j--;
		}
		i=0;
while(n!=0)
{
	//l=strlen(a);
	a=n%16;
	n=n/16;
	if(a>=10&&a<=15)
	{
	if(a==10)
		b[i]=65;
	else if(a==11)
		b[i]=66;
else if(a==12)
		b[i]=67;

else if(a==13)
		b[i]=68;
else if(a==14)
		b[i]=69;
else if(a==15)
		b[i]=70;
	}
	else
		b[i]=a;
	i++;
}
printf("0x");
	for(j=i-1;j>=0;j--)
	{	
		d=b[j];
		if(d>64&&d<71)
		printf("%c",d);
		else
		printf("%ld",b[j]);
	}
}
	printf("\n");
	}
return 0;
}

