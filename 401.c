#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int i,j,b,c,d,e;
while(gets(a))
{
	b=strlen(a);
	
	
	for(i=0,j=b-1;i<=j;i++,j--)
	{
		//if(a[i]>='A'&&a[i]<='Z')
		{
		if(a[i]==a[j])
			d=1;
		else
		{
			d=0;
			break;
		}
		}
	}

	if(d==1)
	{
		for(i=0,j=b-1;i<=j;i++,j--)
		{
			if(a[i]=='A'||a[i]=='H'||a[i]=='8'||a[i]=='I'||a[i]=='V'||a[i]=='X'||a[i]=='T'||a[i]=='W'||a[i]=='O'||a[i]=='M'||a[i]=='U'||a[i]=='Y')
			{
				if(a[i]==a[j])
				{
					c=0;
				}
			}
			else
			{
				c=1;
				break;
			}
		}
		if(c==0)
			printf("%s -- is a mirrored palindrome.\n\n",a);
		if(c==1)
		printf("%s -- is a regular palindrome.\n\n",a);
	}
	if(d==0)
	{
		for(i=0,j=b-1;i<=j;i++,j--)
		{	
			if(a[i]=='A'||a[i]=='H'||a[i]=='I'||a[i]=='V'||a[i]=='8'||a[i]=='X'||a[i]=='T'||a[i]=='W'||a[i]=='O'||a[i]=='M'||a[i]=='U'||a[i]=='Y')
			{
				if(a[i]==a[j])
				{
					e=0;
				}
			}
			else if((a[i]=='S'&&a[j]=='2')||(a[i]=='2'&&a[j]=='S'))
			{
				e=0;
			}
			else if((a[i]=='3'&&a[j]=='E')||(a[i]=='E'&&a[j]=='3'))
			{
				e=0;
			}
			else if((a[i]=='L'&&a[j]=='J')||(a[i]=='J'&&a[j]=='L'))
			{
				e=0;
			}
			else if((a[i]=='Z'&&a[j]=='5')||(a[i]=='5'&&a[j]=='Z'))
			{
				e=0;
			}
			else
			{
				e=1;
				break;
			}
		}
			if(e==0)
			printf("%s -- is a mirrored string.\n\n",a);
			if(e==1)
				printf("%s -- is not a palindrome.\n\n",a);
		}

}
return 0;
}

