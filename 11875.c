#include<stdio.h>
int main()
{
int t,n,a[1000],i,j,k,x=1,m;
scanf("%d",&t);
for(i=1;i<=t;i++)
{
	scanf("%d",&n);
	if(n%2!=0)
	if(n>1&&n<11)
	for(k=0;k<n;k++)
		scanf("%d",&a[k]);
	m=n/2;
	for(k=0;k<m;k++)
	{
		if(a[k]<a[k+1])
			j=a[k+1];
	if(a[k]>a[k+1])
	j=a[k+1];
	}
	printf("Case %d: %d",x,j);
	
		
	printf("\n");
	x++;
			
}
return 0;
}