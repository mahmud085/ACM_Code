#include<cstdio>
#include<cstring>
#include<queue>
#include<stack>
using namespace std;
int main()
{
	char ch[100001],arr[100001],ar2[100001];
	long a,b,i,j,k,l,flag,m;
	stack<char>q;
	while(gets(ch))
	{flag=0;
		l=strlen(ch);
		j=0;m=0;
		for(i=0;i<l;i++)
		{
			if((ch[i]>='a'&&ch[i]<='z')||(ch[i]>='A'&&ch[i]<='Z')||ch[i]=='_')
				arr[j++]=ch[i];
			else if(ch[i]=='[')
			{
				for(k=i+1;k<l;k++)
				{
					if(ch[k]==']'||ch[k]=='[')
						break;
					else if((ch[k]>='a'&&ch[k]<='z')||(ch[k]>='A'&&ch[k]<='Z')||ch[k]=='_')
					{
						flag=1;
						q.push(ch[k]);
					}
				}
					i=k-1;
					if(flag==1)
					{
						while(!q.empty())
						{
						ar2[m++]=q.top();
						q.pop();
						}
					}
			}

		}
		for(i=m-1;i>=0;i--)
			printf("%c",ar2[i]);
		for(i=0;i<j;i++)
			printf("%c",arr[i]);
		printf("\n");
	}
	return 0;
}