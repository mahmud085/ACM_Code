#include<stdio.h>
#include<string.h>
	char op,a[1000000];
	 unsigned  long long q[1000000];
int main()
{
	   unsigned long long b,z,e,f,d,s,n,k,t,c,i,j,l;
	//char op,a[1000];
	while(scanf("%s %c %llu",a,&op,&b)!=EOF)
	{n=0;
		l=strlen(a);
		switch(op)
		{
		case '/':
			{
				s=0;k=0;z=0;f=0;
			if(a[0]=='0'&&a[1]=='\0')
				printf("0");
			else
			{
				for(i=0;i<l;i++)
				{
				    t=s*10+a[i]-48;
				    c=t/b;
				    s=t%b;
				    if(c!=0)
				    f=1;
				    if(f==1)
				    q[k++]=c;
				    //s=c;
				}
            for(j=0;j<k;j++)
            {
                printf("%llu",q[j]);
            }
			if(f==0)
				printf("0");
			}
            printf("\n");
            break;
			}
		case '%':
			{
				if(a[0]=='0'&&a[1]=='\0')
				printf("0\n");
				else
				{
			    s=0;
				//scanf(" %lld",&b);
				for(i=0;i<l;i++)
				{
					t=s*10+a[i]-48;
					c=t%b;
					//c=t/b;
					s=c;
				}
				printf("%llu\n",c);
				}
				break;
			}
		}
	}

	return 0;
}
