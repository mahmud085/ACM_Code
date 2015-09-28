#include<iostream>
#include<cmath>
#include<cstring>
#include<cstdio>
#include<cstdlib>
using namespace std;

int main()
{
int sam,t=1;

double u,v,dp,t1,t2,td;

cin>>sam;
while(sam--)
{
    scanf("%lf%lf%lf",&dp,&v,&u);
    if(v==0 || u == 0 || v >=u)
    {
        printf("Case %d: can't determine\n",t++);
        continue;
    }
    t1 = (1.0*dp)/(u*1.0);
    t2 = (1.0*dp)/(sqrt((u*u)-(v*v))*1.0);

    td = fabs(t2-t1);

    printf("Case %d: %.3lf\n",t++,td);
}

return 0;
}
