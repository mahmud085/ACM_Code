#include<stdio.h>
#include<math.h>
#define L 32005
long ps[L],prime[3450],arr[30];
long i,j,k,n,a,b,c,d,e,f,h,l,m;
int seive(void)
{
	k=1;
	prime[0]=2;
	for(i=3;i<(L);i+=2)
	{
		if(ps[i]==0)
		{
			prime[k++]=i;
			for(j=i*i;j<(L);j+=i+i)
				ps[j]=1;
		}
	}
return k;
}
int main()
{
	int res=seive();
	while(1)
	{
		scanf("%ld %ld",&a,&b);
		if(a==0&&b==0)
			break;
		if(a>b)
		{
			f=a;
			a=b;
			b=f;
		}
		j=0;
		while(prime[j]<a)
			j++;
		for(i=j;prime[i]<=b;i++)
		{
			if(((prime[i+1]-prime[i])==(prime[i+2]-prime[i+1]))&&(prime[i+2]<=b))
			{
				h=i;
				c=(prime[i+1]-prime[i]);
				arr[0]=prime[i];
				l=1;
				while(((prime[i+1]-prime[i])==c)&&prime[i+1]<=b)
				{
					arr[l++]=prime[i+1];
					i++;
				}
				if((prime[h]-prime[h-1])!=c&&(prime[i+1]-prime[i]!=c))
				{
					for(j=0;j<l;j++)
					{
						if(j>0)
							printf(" ");
						printf("%ld",arr[j]);
					}
					printf("\n");
				}
				
					i--;	
			
			}
		}		
	}
	return 0;
}
