#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stack>
#include<queue>
#include<algorithm>
#define max 380
#define len 1000
int arr[max][len];
using namespace std;
void fact()
{
	int i,j;
	arr[0][0]=arr[1][0]=1;
	for(i=2;i<max;i++)
	{
		for(j=0;j<len;j++)
		{
			arr[i][j]+=arr[i-1][j]*i;
			if(arr[i][j]>9)
			{
			arr[i][j+1]+=arr[i][j]/10;
			arr[i][j]%=10;
			}
		}
	}
}
int main()
{
	fact();
	int a,b,d,c,i,sum[10];
	while(scanf("%d",&a),a!=0)
	{
		memset(sum,0,sizeof(sum));
		for(i=len-1;i>=0;i--)
		{
			if(arr[a][i]!=0)
				break;
		}
		printf("%d!--\n",a);
		for(;i>=0;i--)
		{
			c=arr[a][i];
			sum[c]++;
		}
		printf(" (0)%5d (1)%5d (2)%5d (3)%5d (4)%5d\n",sum[0],sum[1],sum[2],sum[3],sum[4]);
		printf(" (5)%5d (6)%5d (7)%5d (8)%5d (9)%5d\n",sum[5],sum[6],sum[7],sum[8],sum[9]);
	}
	return 0;
}




