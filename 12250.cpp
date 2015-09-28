#include<stdio.h>
#include<string.h>
int main()
{
	char a[15];
	int x=1;
	while(gets(a))
	{	
		if(!strcmp(a,"#"))
			break;
		if(strcmp(a,"HELLO")==0)
			printf("Case %d: ENGLISH\n",x);
		else if(strcmp(a,"HOLA")==0)
			printf("Case %d: SPANISH\n",x);
		else if(strcmp(a,"HALLO")==0)
			printf("Case %d: GERMAN\n",x);
		else if(strcmp(a,"BONJOUR")==0)
			printf("Case %d: FRENCH\n",x);
		else if(strcmp(a,"CIAO")==0)
			printf("Case %d: ITALIAN\n",x);
		else if(strcmp(a,"ZDRAVSTVUJTE")==0)
			printf("Case %d: RUSSIAN\n",x);
		else
			printf("Case %d: UNKNOWN\n",x);
		x++;
	}
	return 0;
}