#include<stdio.h>
#include<string.h>
//#include<algorithm>
//using namespace std;
int r[52];
int main()
{
	char a[1000],h[10],g;
	int b,c,d,f,i,j,k,l,m=0,n;
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
		
	}
	for(j=0;j<26;j++)
		{
			if(r[j]>m)
				m=r[j];
			//printf("%c %d\n",j+65,r[j]);
		}
	while(1)
	{
		for(i=0;i<26;i++)
		{
			if(r[i]==m)
				printf("%c %d\n",i+65,m);
		}
		m--;
			if(m==0)
				break;
	}
		//printf("\n");	
	memset(r,0,sizeof(r));
	
	return 0;
}
