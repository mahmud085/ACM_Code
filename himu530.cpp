#include<stdio.h>
int n,r,i,count;
double denominator,numerator,combination;
int main()
{
    //freopen("input.txt","r",stdin);
    while(scanf("%d %d",&n,&r)==2)
    {
        if(n==0&&r==0) break;
        if(r==0) printf("1\n");
        else if(r==1) printf("%d\n",n);
        else
        {
            if(n-r<r) r=n-r;
            for(i=n-1,denominator=n,count=1;;i--)
			{
                denominator*=i;
                count++;
                if(count==r) break;
            }
            for(i=r-1,numerator=r;i>1;i--)
                numerator*=i;

            combination=denominator/numerator;
            printf("%.0lf\n",combination);
        }
    }
return 0;
}