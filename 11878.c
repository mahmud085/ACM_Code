#include<stdio.h>
#include<string.h>
int main()
{
	int a,b,d,n,s=0,i,l;
	char op,c[10],e;
		while(scanf("%d%c%d%c%s",&a,&op,&b,&e,&c)==5)
			{
			n=0;
			l=strlen(c);
			for(i=0;i<l;i++)
				n=n*10+c[i]-48;
		switch(op)
		{
		case '+':
			
			{	//	scanf("%d %c %d",&b,&ch,&c);
				d=a+b;
				//if(c==(a+b))
				//	s++;	
				break;
			}
		case '-':
			{
				//scanf("%d %c %d",&b,&ch,&c);
				d=a-b;
				//if(c==(a-b))
				//	s++;	
				break;
			}
		}
		
			if(d==n)
				s++;
	
		
	
		}//c=0;
		printf("%d\n",s);
	
		//printf("%d\n",s);
	return 0;
}
