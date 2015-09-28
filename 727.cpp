#include<stdio.h>
#include<string.h>
#include<stack>
using namespace std;
char str[100],p[100],ch[10],c1;
stack<char>a;
int pre(char c)
	{
		int m;
		if(c=='+'||c=='-')
		 m=1;
		else if(c=='*'||c=='/')
		 m=2;
		 
		 return m;
	}
int main()
{
	int i,j,k,c,o,l,d,n,t;
	scanf("%d\n\n",&t);
	for(k=1;k<=t;k++)
	{int l=0;
		while(gets(ch))
		{
			if(ch[0]=='\0')
				break;
			c1=ch[0];
			str[l++]=c1;
		}
		str[l++]='\0';
		str[l++]=')';
		
		a.push('(');
		j=0;
		for(i=0;i<l;i++)
		{
			if((str[i]>='A'&&str[i]<='Z')||(str[i]>='0'&&str[i]<='9'))
			p[j++]=str[i];
		else if(str[i]=='(')
			a.push( '(' );
		else if(str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='/')
		{
			c=a.top();
			n=pre(c);
			o=pre(str[i]);
			while(1)
			{
				if(a.top()=='(')
				{
					break;
				}
				if(pre(a.top())<o)
					break;

				p[j++]=a.top();
				a.pop();

			}
			a.push(str[i]);

		}
		else if(str[i]==')')
		{
			while(1)
			{
				if(a.top()=='(')
				{
					a.pop();
					break;
				}

					p[j++]=a.top();
					a.pop();

			}
		}
		}
		for(d=0;d<j;d++)
			printf("%c",p[d]);
		printf("\n");
		if(k!=t)
			printf("\n");
	}
	return 0;
}