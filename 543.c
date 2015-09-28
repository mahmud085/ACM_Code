#include<stdio.h>
#include<math.h>
#define L 1000000
__int64 a[L],b[1000000];
	
int main()	
{	

		__int64 c,d,e,f,g,i,j,k,l,m,n,s;
	
		for(i=3;i<L;i+=2)
		{
			if(a[i]==0)
			{
            for(j=i*i;j<L;j+=i+i)
			a[j]=1;
		    }
		}
		//	b[0]=2;
		k=0;
	    for(i=3;i<L;i+=2)
		{
			if(a[i]==0)
			b[k++]=i;

		}
	while(1)
	{
		scanf("%I64d",&n);
l=n;
		//l=sqrt(n);
	if(n==0)
		break;
	
    m=0;s=0;
	//memset(a,0,sizeof(a));
    
    for(i=0;i<k;i++)
	{
	
			c=n-b[i];
			if(a[c]==0)
			{
				s=1;
				break;
			}
		
	}
	if(s==1)
printf("%I64d = %I64d + %I64d\n",n,b[i],c);
	else
		printf("Goldbach's conjecture is wrong.\n");
}
return 0;
}
