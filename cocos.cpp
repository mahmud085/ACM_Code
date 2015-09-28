
    #include<stdio.h>
    #include <math.h>
    long done=0,vs,vf,k,i,j,m,a,p;
    main()
    {
    while(1)
    {
    scanf("%ld",&a);
    if(a<0)
    break;
    m=a;
    done=0;
    i=sqrt(a)+1;
    for(j=i;j>=2;j--)

    {
    m=a;
    for(k=1;k<=j;k++)
    {
    vf=m/j;
    vs=m%j;
    if(vs==1&&(vs+vf)%j==0&&k!=j)
    {
    m=m-(vs+vf);
    }
    else
    break;
    }
    if(k==j&&vs==1)
    {
    m=m-vs-vf;
    if(m%j==0)
    {
    done=1;
    break;

    }


    }


    }
    if(done==1)
    printf("%ld coconuts, %ld people and 1 monkey\n",a,j);
    else
    printf("%ld coconuts, no solution\n",a);
    }

    return 0;
    }