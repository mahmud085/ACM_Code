#include<stdio.h>
int main()
{
long int i,n,j,s,t,r,p,l,k,m;
while(scanf("%ld",&n),n!=0)
{s=0;
	for(i=n;i>0;)
	
	{j=i%10;
	i=i/10;
    s=s+j;}t=0;
	for(k=s;k>0;)
	{
		l=k%10;
		k=k/10;
		t=l+t;}r=0;
	for(m=t;m>0;)
	{
		p=m%10;
		m=m/10;
		r=r+p;}
printf("%d",r);
printf("\n");
		
}
return 0;

}