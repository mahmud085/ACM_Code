#include<stdio.h>
#include<string.h>
int main()
{
	char a[150];
	int c,i,j,s;
	while(gets(a))
	{c=0;
		s=strlen(a);
		for(i=0;i<s;i+=1)
		{	 
			if(a[i]=='!')
			{
				printf("\n");
				//i++;
				
			}
			if(a[i]>='0'&&a[i]<='9')
			{
			 if(a[i+1]>='A'&&a[i+1]<='Z')
			{
				c=a[i]-48;
				for(j=0;j<c;j++)
				{
				
					printf("%c",a[i+1]);
				}i++;c=0;
			}
			else if(a[i+1]=='b')
			{
			c=a[i]-48;
			for(j=0;j<c;j++)
				{
					
					printf(" ");
				}i++;c=0;
			}
				
			else if(a[i+1]=='*')
			{
				c=a[i]-48;
			for(j=0;j<c;j++)
				{
					
					printf("*");
				}i++;c=0;
			}
			 else if(a[i+1]>='0'&&a[i+1]<='9')
			{	
				 c=c+(a[i]-48);//+(a[i+1]-48);

				if(a[i+2]>='A'&&a[i+2]<='Z')
				{	
					c+=a[i+1]-48;
					for(j=0;j<c;j++)
				{	
					printf("%c",a[i+2]);
				}
					i++;c=0;
				}	
				else if(a[i+2]=='b')
				{
				c=c+(a[i+1]-48);
				for(j=0;j<c;j++)
				{
					
					printf(" ");
				}i++;c=0;
				}
				else if(a[i+2]=='*')
				{
				c=c+(a[i+1]-48);
				for(j=0;j<c;j++)
				{
					
					printf("*");
				}i++;c=0;
				}
			
		//		i++;
			
			}
			
			}
		//	if(i==(s-1))
		//		printf("\n");
		}
		
		printf("\n");
	}
	return 0;
}