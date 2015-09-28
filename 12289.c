#include<stdio.h>
#include<string.h>
int main()
{
	int n,i;

	char a[20],h[10];
	gets(h);
	sscanf(h,"%d",&n);
	for(i=0;i<n;i++)
	{
		gets(a);
	//	l=strlen(a);
		
		if((a[0]=='o'&&a[1]=='n')||(a[0]=='o'&&a[2]=='e')||(a[2]=='e'&&a[1]=='n'))
			printf("1\n");
		else if((a[0]=='t'&&a[1]=='w')||(a[0]=='t'&&a[2]=='o')||(a[2]=='o'&&a[1]=='w'))
			printf("2\n");
		else if((a[0]=='t'&&a[1]=='h'&&a[2]=='r'&&a[3]=='e')||(a[0]=='t'&&a[1]=='h'&&a[2]=='r'&&a[4]=='e'))
			printf("3\n");
		else if((a[0]=='t'&&a[1]=='h'&&a[3]=='e'&&a[4]=='e')||(a[0]=='t'&&a[2]=='r'&&a[3]=='e'&&a[4]=='e'))
			printf("3\n");
		else if((a[1]=='h'&&a[2]=='r'&&a[3]=='e'&&a[4]=='e'))
			printf("3\n");


	}
	return 0;
}