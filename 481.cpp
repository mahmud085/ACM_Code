#include<stdio.h>
#include<string.h>
#define L 100001
#define inf 999999
int i,n,j,k,seq[L],ind[L],arr[L],p[L];
void takeinput()
{
	i=0;
	while(scanf("%d",&n)!=EOF)
	{
		seq[i]=n;
	i++;
	}
	n=i;
}
int lis()
{
	ind[0]=-inf;
	for(i=1;i<=n;i++)
		ind[i]=inf;
	int lislength=0;
	for(i=0;i<n;i++)
	{
		int high,mid,low;
		low=0;high=lislength;
		while(low<=high)
		{
			mid=(low+high)/2;
			if(ind[mid]<seq[i])
				low=mid+1;
			else
				high=mid-1;
		}
		ind[low]=seq[i];
		p[i]=low;
		if(lislength<low)
			lislength=low;
	}
	
	return lislength;
}
void find(int m)
{
	int k,l;
	k=0;
	for(l=0+1;l<=n;l++)
	{
		if(p[l]>=p[k])
			k=l;
	}
	int temp=p[k]-1;
	arr[temp]=seq[k];
	temp--;
	for(l=k-1;l>=0;l--)
	{
		if(seq[l]<seq[k]&&p[l]==p[k]-1)
		{
			k=l;
			arr[temp]=seq[l];
			temp--;
		}
	}
	
	for(k=0;k<m;k++)
	{
		printf("%d",arr[k]);
		if(k!=m)
			printf("\n");
	}
}
int main()
{
	takeinput();
	int result=lis();
	printf("%d\n-\n",result);
	find(result);
return 0;

}