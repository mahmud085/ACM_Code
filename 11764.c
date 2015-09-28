#include<stdio.h>
int main()
{
int t,n,s,p,i,j,k,x=1;
int a[1000];
scanf("%d",&t);
for(i=1;i<=t;i++)
{s=0;p=0;
	scanf("%d",&n);
	for(j=0;j<n;j++)
		scanf("%d",&a[j]);
		for(k=0;k<n-1;k++)
		{		if(a[k]<a[k+1])
			s+=1;
		if(a[k]>a[k+1])
			p+=1;
		}
	

	printf("Case %d: %d %d",x,s,p);
x++;
	
printf("\n");
}





return 0;
}