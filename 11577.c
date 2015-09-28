#include<stdio.h>
#include<string.h>
//#include<algorithm>
//using namespace std;
int r[52];
int main()
{
	char a[1000],h[10],g;
	int b,c,d,f,i,j,k,l,max,n;
	gets(h);
	sscanf(h,"%d",&n);
	for(f=0;f<n;f++)
	{	
		k=0;
		gets(a);
		l=strlen(a);

	for(i=0;i<l;i++)
	{
		if(a[i]>='a'&&a[i]<='z')
		{
			b=a[i]-97;
			r[b]++;
		}
		else if(a[i]>='A'&&a[i]<='Z')
		{
			b=a[i]-65;
			r[b]++;
		}
	}
		max=r[0];
		for(i=0;i<26;i++)
		{
			if(r[i]>max)
				max=r[i];
		}
		for(j=0;j<26;j++)
		{
			if(r[j]==max)
			printf("%c",j+97);
		}
		printf("\n");	
	memset(r,0,sizeof(r));
	}
	return 0;
}
