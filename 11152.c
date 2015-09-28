    #include<stdio.h>
    #include<math.h>

    int main()
    {
    long double s,a,b,c,v,q,w,t,y;
    while(scanf("%Lf%Lf%Lf",&a,&b,&c)!=EOF)
    {
    s=(a+b+c)/2;
    t=sqrt(s*(s-a)*(s-b)*(s-c));
    q=3.141592653589793*pow((t/s),2);
    v=t-q;
    w=3.141592653589793*pow(((a*b*c)/(4*t)),2);
    y=w-(v+q);
    printf("%.4Lf %.4Lf %.4Lf\n",y,v,q);
    }
    return 0;
    }
