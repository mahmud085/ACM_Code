#include<stdio.h>
#include<string.h>

bool q[12];

int main()
{
    char w[20];
    int a,i,j,x=1,k,n;
   
    while(scanf("%d\n",&a),a!=0)
	{
        for(i=0;i<12;i++)
            q[i]=1;
        while(1)
        {
			
			gets(w);
            if(strcmp(w,"right on")==0)
                break;
           
            if(strcmp(w,"too high")==0)
                for(k=a;k<11;k++)
                    q[k]=0;
            else
                for(k=a;k>0;k--)
                    q[k]=0;

            scanf("%d\n",&a);
        }
        if(q[a]==1)
            printf("is may be honest\n");
        else
            printf("i s dishonest\n");
		
    }
    return 0;
}