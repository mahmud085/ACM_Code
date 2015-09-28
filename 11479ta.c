#include<stdio.h>
int main()
{
	int t,i,x=1;
	long int a,b,c;
    scanf("%d",&t);
	for(i=1;i<=t;i++)
{
		scanf("%ld %ld %ld",&a,&b,&c);
	if((a+b)<=c||(b+c)<=a||(c+a)<=b)
		printf("Case %d: Invalid",x);
	    else if((a==b)&&(b==c))
        printf("Case %d: Equilateral",x);	
     	else if((a==b)||(a==c)||(b==c))
	    printf("Case %d: Isosceles",x);
	    else if((a!=b)||(b!=c)||(a!=c))
		printf("Case %d: Scalene",x);
		printf("\n");x++;
	

}
	return 0;
}