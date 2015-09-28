#include <stdio.h>
#include <string.h>
#include <stack>
using namespace std;

char arr[208];

stack <char> st;

int main()
{
	int a,b,i,j,k,t,l;
	char c;
	scanf("%d",&t);
	getchar();
	while(t--)
	{
		gets(arr);
		//st.push('(');
		l=strlen(arr);
		//s[a++]=')';
		//s[a]='\0';
		for(i=0;i<l;i++)
		{
			if(arr[i]=='(' || arr[i]== '[')
				st.push(arr[i]);
			else
			{
				if(!st.empty())
				{
					c=st.top();
					if(c=='(' && arr[i]==')')
						st.pop();
					else if(c=='[' && arr[i]==']')
						st.pop();
					else
						st.push(arr[i]);
				}
				else st.push(arr[i]);
			}
		}
		if(st.empty())
			printf("Yes\n");
		else printf("No\n");
		while(!st.empty())
			st.pop();
	}
	return 0;
}