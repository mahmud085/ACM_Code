#include<stdio.h>
#include<string.h>
int main()
{
	int s,t,i,j;
	char a[21];
	while(gets(a))
	{j=0;
		s=strlen(a);
		for(i=0;i<s;i++)
		{
			if(a[i]>='A'&&a[i]<='Z')
			{
				//if(a[i]!='A'&&a[i]!='E'&&a[i]!='I'&&a[i]!='O'&&a[i]!='U'&&a[i]!='H'&&a[i]!='W'&&a[i]!='Y')
				//{
					if(a[i]=='B'||a[i]=='F'||a[i]=='P'||a[i]=='V')
					{
						
						t=1;
			
					}
					
					 else if(a[i]=='C'||a[i]=='G'||a[i]=='J'||a[i]=='K'||a[i]=='Q'||a[i]=='S'||a[i]=='Z'||a[i]=='X')
					{
						
						t=2;
					
					}
					 else if(a[i]=='D'||a[i]=='T')
					{
						t=3;
					
					}
					else if(a[i]=='L')
					{
					
						t=4;
		
					}
					else if(a[i]=='M'||a[i]=='N')
					{
					
						t=5;
		
					}
					else if(a[i]=='R')
					{
			
						t=6;
		
					}
					//if(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'||a[i]=='H'||a[i]=='W'||a[i]=='Y')
				else
				{	t=0;
					j=t;
				}
	
						if(j!=t)
						{printf("%d",t);
						j=t;}
						
					
			//}
				//if(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'||a[i]=='H'||a[i]=='W'||a[i]=='Y')
				//{	t=0;
				//	j=t;
				//}
			}			
			
		}
		printf("\n");
	}
	return 0;
}