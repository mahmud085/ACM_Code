#include<stdio.h>
#include<string.h>
int main()
{
	char a[10000];
	int n=0,l,b,c,d,e,f,i=0,s,t,u,v,w,x;
	while(gets(a))
	{
		if(n!=0)
		printf("\n");
		n=1;
		s=0,u=0,v=0,x=0,w=0;
		l=strlen(a);
		for(i=0;i<l;i++)
		{
			t=s*10+a[i]-48;
			b=t%4;
			t=u*10+a[i]-48;
			c=t%400;
			t=v*10+a[i]-48;
			d=t%100;
			t=w*10+a[i]-48;
			e=t%15;
			t=x*10+a[i]-48;
			f=t%55;
			s=b;
			u=c;
			v=d;
			w=e;
			x=f;
		}
		
		if(((b==0)&&(d!=0))||(c==0))
		{	
			printf("This is leap year.\n");
			if(e==0)
			{
				printf("This is huluculu festival year.\n");
			}
			if(f==0)
			{
				printf("This is bulukulu festival year.\n");
			}
		
		}
		else if(e==0)
			{
				printf("This is huluculu festival year.\n");
			
			}
	//	else if(f==0)
	//		{
	//			printf("This is bulukulu festival year.\n");
			
	//		}
		else
		{
		
				printf("This is an ordinary year.\n");
		}
		
	//printf("\n");
	}
	
	return 0;
}