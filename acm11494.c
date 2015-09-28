#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g,h;
	while(1)
	{
		scanf("%d %d %d %d",&a,&b,&c,&d);
		if(a==0&&b==0&&c==0&&d==0)
		break;
		if(a==c&&b==d)
		{
		printf("0\n");
		
		}
		else if(a==c||b==d)
		{
			printf("1\n");
		}
		 else if((a>c&&b>d)||(a<c&&b>d)||(a>c&&b<d)||(a<c&&b<d))
		{
			 if(a<c)
			 {g=c;
			 c=a;
				a=g;
			 }
			 if(b<d)
			 {h=d;
			 d=b;
				 b=h;
			 }
		e=a-c;
		f=b-d;
		
			if(e==f)
			printf("1\n");
		 
		 else
			printf("2\n");
		 }
	}
	return 0;
}