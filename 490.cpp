#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<stack>
#include<queue>
using namespace std;
char arr[105],arr2[105][105];
int main()
{
	long a,b,c,d,f,i,j,k,l;
	for(i=0;i<105;i++)
	{
		for(j=0;j<105;j++)
			arr2[i][j]=' ';
	}
	i=0;f=0;
	while(gets(arr))
	{
		l=strlen(arr);
		for(j=0;j<l;j++)
		arr2[i][j]=arr[j];
		arr2[i][l]=' ';
		if(l>f)
			f=l;
		i++;
	}
	for(k=0;k<f;k++)
	{
		for(j=i-1;j>=0;j--)
		{
				printf("%c",arr2[j][k]);
			
		}
		printf("\n");
	}
return 0;
}