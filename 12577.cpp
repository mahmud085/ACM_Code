#include<stdio.h>
#include<string.h>
char arr[7];
int main()
{
	int i=1,j,k;
	while(gets(arr))
	{
		if(!strcmp(arr,"*"))
			break;
		if(strcmp(arr,"Hajj")==0)
			printf("Case %d: Hajj-e-Akbar\n",i);
		else
			printf("Case %d: Hajj-e-Asghar\n",i);
		i++;
	}
	return 0;
}