#include<stdio.h>
int main()
{
int i,j,n,x,a[13],b[13];
x=1;
while(scanf("%d",&n),n>=0)
{
	for(i=0;i<12;i++)
	scanf("%d",&a[i]);
	
    for(j=0;j<12;j++)
    scanf("%d",&b[j]);
printf("Case %d:\n",x);
	
for(i=0,j=0;i<12;i++,j++)
	{
		if(n>=b[j])
		{
			printf("No problem! :D");
			n=n-b[j];
		}
		else
			printf("No problem. :(");
			n=n+a[i];
			
		printf("\n");
	}
	x++;
	
}
return 0;
}