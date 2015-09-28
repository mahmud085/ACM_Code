#include<cstdio>
#include<stdlib.h>
#include<string>
#include<cstring>
#include<map>
#include<algorithm>
using namespace std;
map<char,int>mp;
char arr[101],ar2[37],ch;
struct tt
{
	int no;
	char chr;
}str[101];
bool comp(tt x,tt y)
{
	return x.no>y.no;
}
int main()
{
	int a,b,c,d,i,j,k,n,l;
	scanf("%d",&n);
	getchar();
	while(n--)
	{
		gets(arr);
		l=strlen(arr);
		for(i=0,j=0;i<l;i++)
		{
			ch=arr[i];
			if(ch!=' ')
			mp[ch]++;
			if(mp[ch]==1)
				ar2[j++]=ch;
		}
		for(i=0;i<j;i++)
		{
			ch=ar2[i];
			str[i].no=mp[ch];
			str[i].chr=ar2[i];
		}
		sort(str,str+j,comp);
		i=1,c=0;
		int sum=0;
		while(1)
		{
			for(k=1;k<=i;k++)
			{
				sum+=str[c++].no*(i+1);
			}
			i+=1;
			if(i==j)
				break;
		}

		printf("%d\n",sum);
		memset(str,0,sizeof(str));
		mp.clear();
	}
	return 0;
}