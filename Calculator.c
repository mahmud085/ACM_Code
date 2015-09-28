#include<stdio.h>
#include<math.h>
int main()
{
	char op;
	int a,b,r;
	printf("**************************");
	printf("   Mini Calculator  ");
	printf("**************************\n\n\n");
	printf("\t\t\t\t");
	printf("RULES\n");
	printf("\t**************************");
	printf("**************************\n\n");
	printf("IF YOU WANT TO CLEAR THE PREVIOUS RESULT ");
	printf("YOU HAVE TO PRESS C\n");
	printf("IF YOU WANT TO QUIT YOU HAVE TO PRESS Q\n\n");
	printf("\t**************************");
	printf("**************************\n\n");
	scanf("%d  ",&a);
while(1)
{if(r==0)
{scanf("%d  ",&a);	}
	scanf("%c",&op);
	
	switch(op)
	{
	case '+':
		scanf("%d",&b);
		r=b+a;	
		printf("%d\n",r);
		break;

	case '-':
		scanf("%d",&b);
		r=a-b;
		printf("%d\n",r);
			break;
	case '*':
		scanf("%d",&b);
		r=a*b;
		printf("%d\n",r);
		break;
	case '/':
		scanf("%d",&b);
		r=a/b;
		printf("%d\n",r);
		break;
	case '^':
		scanf("%d",&b);
		r=pow(a,b);
		printf("%d\n",r);
		break;
		
	case 'c':
		r=0;
		break;
	case 'q':
		{	goto end;
		}
	}a=r;
	
	
	
	}
end:
	return 0;
}