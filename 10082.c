#include<stdio.h>
#include<string.h>
int main()
{
	int b,s;
	char a[1000];
while(gets(a))
{
	s=strlen(a);
	for(b=0;b<s;b++)
	{
		if(a[b]=='F'||a[b]=='J'||a[b]=='T'||a[b]=='.')
		printf("%c",a[b]-2);
		else if(a[b]=='G'||a[b]=='K'||a[b]=='L'||a[b]=='P'||a[b]=='H'||a[b]=='/')
			printf("%c",a[b]-1);
		else if(a[b]=='9'||a[b]=='8'||a[b]=='7'||a[b]=='6'||a[b]=='5'||a[b]=='4'||a[b]=='3'||a[b]=='2')
			printf("%c",a[b]-1);
		else if(a[b]=='-')
			printf("%c",a[b]+3);
		else if(a[b]=='=')
			printf("%c",a[b]-16);
		else if(a[b]=='0')
			printf("%c",a[b]+9);
		else if(a[b]=='B')
			printf("%c",a[b]+20);
		else if(a[b]==92)
			printf("%c",a[b]+1);
		else if(a[b]=='1')
			printf("`");
		else if(a[b]==']')
			printf("%c",a[b]-2);
		else if(a[b]=='[')
			printf("P");
		else if(a[b]=='M')
			printf("%c",a[b]+1);
		else if(a[b]=='X')
			printf("%c",a[b]+2);
		else if(a[b]=='N')
			printf("%c",a[b]-12);
		else if(a[b]=='I')
				printf("%c",a[b]+12);
		else if(a[b]=='S')
			printf("%c",a[b]-18);
		else if(a[b]=='E')
			printf("%c",a[b]+18);
		else if(a[b]=='D')
			printf("%c",a[b]+15);
		else if(a[b]==';')
			printf("%c",a[b]+17);
		else if(a[b]=='W'||a[b]=='O')
			printf("%c",a[b]-6);
		else if(a[b]=='R')
			printf("%c",a[b]-13);
		else if(a[b]=='Y')
			printf("%c",a[b]-5);
		else if(a[b]=='U')
			printf("%c",a[b]+4);
		else if(a[b]=='C')
			printf("%c",a[b]+21);
		else if(a[b]=='V')
			printf("%c",a[b]-19);
		else if(a[b]==',')
			printf("%c",a[b]+33);
		else if(a[b]==' ')
			printf(" ");
		else if(a[b]==39)
			printf(";");
		else
			printf("%c",a[b]);
	}
	printf("\n");
}
	return 0;
}
