#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{	int a[4];
	int b,c,d,i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<4;j++)
		{
		scanf("%d",&a[j]);
		}
	sort(a,a+4);
		//if(a==0||b==0||c==0||d==0)
		//{
		//	printf("banana\n");
		//}

		if(a[0]==a[1]&&a[1]==a[2]&&a[2]==a[3]&&a[3]==a[0])
		{
			printf("square\n");
			continue;
		}
	  if(a[0]==a[1]&&a[2]==a[3])
		{
			printf("rectangle\n");
			continue;
		}
	 if((a[0]+a[1]+a[2])>=(a[3]))//&&(a+c+d)>b&&(a+b+d)>c&&(b+c+d)>a)
		{
			printf("quadrangle\n");
			continue;
		}
		
			printf("banana\n");
	}
	return 0;
}
