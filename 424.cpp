#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;
char array[500];
long s[1000];
int main()
{
	long a,b,c,d,e=0,f,i,j,k,l; 
	while(1)
	{c=0;
		scanf("%s",array);
		l=strlen(array);
			if(strcmp(array,"0")==0)
				break;
			j=0;
			for(i=l-1;i>=0;i--)
			{
				b=array[i]-48+c;
				c=(s[j]+b)/10;
				s[j]=(s[j]+b)%10;
				j++; 
			}
			if(c>0)
			{
				s[j]+=c;
				j++;
			}
			if(e<j)
				e=j;
				
	}
	for(k=e-1;k>=0;k--)
	{
		
			printf("%ld",s[k]);

	}
	printf("\n");
	memset(s,0,sizeof(s));
return 0;
}