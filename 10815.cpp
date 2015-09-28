#include<cstdio>
#include<cstring>
#include<string>
#include<map>
#include<cstdlib>
#include<algorithm>
using namespace std;
struct data
{
	char name[5001];
}x[5001];

int main()
{
	map<string,int>sam;
	int i,j,k=0,l,d,m,n;
	char ch[201],str[201],ch2;
	while(scanf("%s",ch)==1)
	{int fl=0;
		//if(ch[0]=='\0')
		//	break;
		l=strlen(ch);
		i=n=0;
		while(i<l)
		{
			j=0;
		for(i=n;i<l;i++)
		{
			if((ch[i]>='a'&&ch[i]<='z'))
			{
				str[j++]=ch[i];
			}
			else if(ch[i]>='A'&&ch[i]<='Z')
			{
					str[j++]=ch[i]+32;
			}
			else
			{
				//str[j++]='\0';
				break;
			}

		}
		
		str[j++]='\0';

		sam[str]++;
		 
		if(sam[str]==1&&str[0]!='\0')
		{
			strcpy(x[k].name,str);
			k++;
		}
		n=i+1;
		}
	}
	qsort(x,k,5001,(int(*)(const void*,const void*))strcmp);
		for(i=0;i<k;i++)
		{
			printf("%s\n",x[i].name);
		}
	
	return 0;
}