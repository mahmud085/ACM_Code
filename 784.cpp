#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;
int sts[100][100];
int main()
{
	stack<int> st1,st2;
	char ch[100],arr[31][82];
	int a,b,c,d,e,f,i,j,k,n,l,s,t1,t2,t,len,w[100];
	scanf("%d",&n);
	getchar();
	for(t=1;t<=n;t++)
	{
		
		i=0;
		while(1)
		{
			gets(ch);
			len=strlen(ch);
			s=0;
			w[i]=len;
			for(j=0;j<len;j++)
			{
				//scanf("%c",&ch);
				arr[i][j]=ch[s];
				s++;
			}
		//	getchar();
			i++;
		if(ch[0]=='_')
			break;
		}
		for(c=0;c<i;c++)
		{
			for(d=0;d<w[c];d++)
			{f=0;
				if(arr[c][d]=='*')
				{
					sts[c][d]=1;
						st1.push(c);
						st2.push(d);
						
						while((!st1.empty())&&(!st2.empty()))
						{
							t1=st1.top();
							t2=st2.top();
							st1.pop();
							st2.pop();
						for(k=t1-1;k<=t1+1;k++)
						{
							for(l=t2-1;l<=t2+1;l++)
							{
								if(k<0||l<0)
									continue;
								if(k>=i||l>=w[c])
									continue;
								if(arr[k][l]==' ')
								{
									if(sts[k][l]==0)
									{
									
										st1.push(k);
										st2.push(l);
										sts[k][l]=1;
										
									}
								
								}
							
								
							}
						}
						}
						
				}
			}
		}
		for(e=0;e<i;e++)
		{
			for(f=0;f<w[e];f++)
			{
				if(sts[e][f]==1)
					printf("#");
				else
					printf("%c",arr[e][f]);
			}
			printf("\n");
		}
		
		memset(sts,0,sizeof(sts));
		memset(w,0,sizeof(w));
	}

return 0;
}