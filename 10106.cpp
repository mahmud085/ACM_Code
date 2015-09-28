#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;
char array1[1000],array2[1000];
long s[1000];
int main()
{
	long a,b,c,d,e,f,g,h,l1,l2,car,i,j,k,l,m,n;
	while(gets(array1))
	{
		gets(array2);
		l1=strlen(array1);
		l2=strlen(array2);
		k=0;
		for(i=l2-1;i>=0;i--)
		{f=0;
			car=0;
			if(i<l2-1)
			k++;
			c=array2[i]-48;
			g=k;
			for(j=l1-1;j>=0;j--)
			{
				d=array1[j]-48;
				e=c*d+f;
				f=(s[g]+e)/10;
				s[g]=(s[g]+e)%10;
				g++;
			}
			if(f>0)
				s[g++]=f;
		}
		h=g-1;
		while(s[h]==0)
		{h--;
		if(h==-1)
			break;
		}
		if(h==-1)
			printf("0");
		else
		{
		while(h!=-1)
			printf("%ld",s[h--]);
		}
		printf("\n");
		memset(s,0,sizeof(s));
		memset(array1,'0',sizeof(array1));
			memset(array2,'0',sizeof(array2));
	}


return 0;
}