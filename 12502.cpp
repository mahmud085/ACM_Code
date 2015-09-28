#include<stdio.h>
int main()
{
	int x,y,z,b,i,n;
	double c;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d %d %d",&x,&y,&z);
	//	c=(double)((x+(x-4))/(x+y));
		
		printf("%.0lf\n",(double)((z*(x+(x-y)))/(x+y)));
	}
	return 0;
}