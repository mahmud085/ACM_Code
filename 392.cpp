#include<cstdio>
#include<cstring>
#include<cmath>
//using namespace std;
int arr[100];
int main()
{
	int a,b,c,d,e,i,j,k,l,n;
	while(scanf("%d",&a)!=EOF)
	{
		arr[0]=a;
		e=0;
		for(i=1;i<=8;i++)
			scanf("%d",&arr[i]);
		b=8;c=0;
		for(i=0;i<8;i++)
		{
			if(arr[i]!=0)
			{
				d=arr[i];
				if(c==0)
					{
						if(arr[i]<0)
						printf("-");
						c=1;
					}
					else if(arr[i]>0&&c==1)
					printf(" + ");
					else if(arr[i]<0&&c==1)
					printf(" - ");
					d=arr[i];
					if(d<0)
						d=d*-1;
					if(b!=1&&d!=1)	
					printf("%dx^%d",d,b);
					if(b==1&&d!=1)
					printf("%dx",d);
					if(b==1&&d==1)
						printf("x");
					if(b!=1&&d==1)
						printf("x^%d",b);
				
			}
			else e++;
			b--;
		}
		if(arr[8]!=0)
		{
			d=arr[i];
			if(d>0)
			{
				if(c==1)
				printf(" + %d",d);
				else
					printf("%d",d);
			}
			else
			{
				if(c!=1)
					printf("%d",d);
				else{
				d=d*-1;
			printf(" - %d",d);
				}
			}
		}
		else
			e++;
		if(e==9)
			printf("0");
		printf("\n");
	}
	return 0;
}
