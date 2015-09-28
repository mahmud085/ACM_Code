#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	while(1)
	{
		scanf("%d %d %d %d",&a,&b,&c,&d);
		if(a==0&&b==0&&c==0&&d==0)
		break;
		if(a==c&&b==d)
		{
		printf("0\n");
		
		}
		if(a>c&&b>d)
		{
		e=a-c;
		f=b-d;
		if(e==f)
			printf("1\n");
		else
			printf("2\n");
		
		}
		if(a<c&&b<d)
		{
		e=c-a;
		f=d-b;
		if(e==f)
			printf("1\n");
		else
			printf("2\n");

		}
		if(a>c&&b<d)
		{
		e=a-c;
		f=d-b;
		if(e==f)
			printf("1\n");
		else
			printf("2\n");
		
		}
		if(a<c&&b>d)
		{
		e=c-a;
		f=b-d;
		if(e==f)
			printf("1\n");
		else
			printf("2\n");
		
		}
	}
	
		return 0;
}