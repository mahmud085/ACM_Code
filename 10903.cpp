#include<stdio.h>
#include<string.h>
char a[10],b[10];
int w[110],l[110];
int main()

{
	int c,d,e,f,i,j,n,q,r;
	double g,h;
	while(scanf("%d %d",&c,&d),c!=0)
	{
		for(i=1;i<=d;i++)
		{
			scanf("%d %s %d %s",&e,&a,&f,&b);
			if((!strcmp(a,"paper"))&&(!strcmp(b,"rock")))
			{w[e]++;l[f]++;}
			else if((!strcmp(b,"paper"))&&(!strcmp(a,"rock")))
			{l[e]++;w[f]++;}
			else if((!strcmp(a,"rock"))&&(!strcmp(b,"scissors")))
			{	w[e]++;l[f]++;}
			else if((!strcmp(b,"rock"))&&(!strcmp(a,"scissors")))
			{l[e]++;w[f]++;}
			
			else if((!strcmp(a,"scissors"))&&(!strcmp(b,"paper")))
			{w[e]++;l[f]++;}
			else if((!strcmp(b,"scissors"))&&(!strcmp(a,"paper")))
			{l[e]++;w[f]++;}
		}
		for(j=1;j<=c;j++)
		{
			q=w[j];r=l[j];
			g=double(q)/double(r+q);
			printf("%.3lf\n",g);
		}
		memset(w,0,sizeof(w));
		memset(l,0,sizeof(l));
		if(c!=0)
			printf("\n");
	}
	return 0;
}