#include<stdio.h>
#include<math.h>
long arr[10000000],arr2[10000000];
long zero(long a1,long a2)
{
	unsigned long j,k=0,t,s,r,cnt;
	unsigned long w,q,y,sum2,Min=999999999;
	double sum;
	r=a1;
	for(j=2;j*j<=a2;j++)
	{cnt=0;s=0;
		while(a2%j==0)
		{s=1;
			cnt++;
			a2/=j;
			if(cnt==1)
				arr[k]=j;
		}
		if(s==1)
		{
			arr2[k]=cnt;
			k++;
		}
	}
	if(a2!=1)
		{
			arr[k]=a2;
			arr2[k]=1;
			k++;
		}
	for(j=0;j<k;j++)
	{
		sum=1.0/arr2[j];
		y=arr[j];w=y;sum2=0;
		q=1;
		while(q!=0)
		{
			q=r/w;
			sum2+=r/w;
			w=w*y;
		}
		sum=sum*sum2;
		if(sum<Min)
			Min=sum;
	}
	return Min;
}
int main()
{
	double sum1;
	unsigned long a,b,m,c,n,i,a1,a2;
	while(scanf("%lu %lu",&n,&m)!=EOF)
	{sum1=0.0;
		b=zero(n,m);
		//c=zero(n,5);
		for(i=1;i<=n;i++)
		{
			sum1+=log10((double)i)/log10(double(m));
			
		}
		if (sum1-floor(sum1) < 1e-14)
            sum1++;
         else
            sum1 = floor(sum1 + 1);
		//sum1=ceil(sum1);
		
		if(n==0)
			printf("0 1\n",b);
			else
			printf("%lu %.0lf\n",b,sum1);
	}
	return 0;
}