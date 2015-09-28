#include<stdio.h>
#include<string.h>
int main()
{
	int a,b,T,t,i,j,k,n,l,Index;
	char ha[2005],temp[10],in[2000];
	scanf("%d\n",&n);
	for(t=1;t<=n;t++)
	{
		gets(ha);
		l=strlen(ha);
		memset(temp,'\0',sizeof(temp));
		Index=k=0;
		printf("Message #%d\n",t);
		for(j=0;j<l;j++)
		{
			if(ha[j] != ' ' )
                temp[Index++] = ha[j];

            if(ha[j] == ' ' || ha[j+1]=='\0')
            {
                if(strcmp(temp,".-" ) == 0)in[k++] = 'A';
                else if(strcmp(temp,"-..." ) == 0)in[k++] = 'B';
                else if(strcmp(temp,"-.-." ) == 0)in[k++] = 'C';
                else if(strcmp(temp,"-.." ) == 0)in[k++] = 'D';
                else if(strcmp(temp,"." ) == 0)in[k++] = 'E';
                else if(strcmp(temp,"..-." ) == 0)in[k++] = 'F';
                else if(strcmp(temp,"--." ) == 0)in[k++] = 'G';
                else if(strcmp(temp,"...." ) == 0)in[k++] = 'H';
                else if(strcmp(temp,".." ) == 0)in[k++] = 'I';
                else if(strcmp(temp,".---" ) == 0)in[k++] = 'J';
                else if(strcmp(temp,"-.-" ) == 0)in[k++] = 'K';
                else if(strcmp(temp,".-.." ) == 0)in[k++] = 'L';
                else if(strcmp(temp,"--" ) == 0)in[k++] = 'M';
                else if(strcmp(temp,"-." ) == 0)in[k++] = 'N';
                else if(strcmp(temp,"---" ) == 0)in[k++] = 'O';
                else if(strcmp(temp,".--." ) == 0)in[k++] = 'P';
                else if(strcmp(temp,"--.-" ) == 0)in[k++] = 'Q';
                else if(strcmp(temp,".-." ) == 0)in[k++] = 'R';
                else if(strcmp(temp,"..." ) == 0)in[k++] = 'S';
                else if(strcmp(temp,"-" ) == 0)in[k++] = 'T';
                else if(strcmp(temp,"..-" ) == 0)in[k++] = 'U';
                else if(strcmp(temp,"...-" ) == 0)in[k++] = 'V';
                else if(strcmp(temp,".--" ) == 0)in[k++] = 'W';
                else if(strcmp(temp,"-..-" ) == 0)in[k++] = 'X';
                else if(strcmp(temp,"-.--" ) == 0)in[k++] = 'Y';
                else if(strcmp(temp,"--.." ) == 0)in[k++] = 'Z';
                else if(strcmp(temp,"-----" ) == 0)in[k++] = '0';
                else if(strcmp(temp,".----" ) == 0)in[k++] = '1';
                else if(strcmp(temp,"..---" ) == 0)in[k++] = '2';
                else if(strcmp(temp,"...--" ) == 0)in[k++] = '3';
                else if(strcmp(temp,"....-" ) == 0)in[k++] = '4';
                else if(strcmp(temp,"....." ) == 0)in[k++] = '5';
                else if(strcmp(temp,"-...." ) == 0)in[k++] = '6';
                else if(strcmp(temp,"--..." ) == 0)in[k++] = '7';
                else if(strcmp(temp,"---.." ) == 0)in[k++] = '8';
                else if(strcmp(temp,"----." ) == 0)in[k++] = '9';
                else if(strcmp(temp,".-.-.-" ) == 0)in[k++] = '.';
                else if(strcmp(temp,"--..--" ) == 0)in[k++] = ',';
                else if(strcmp(temp,"..--.." ) == 0)in[k++] = '?';
                else if(strcmp(temp,".----." ) == 0)in[k++] = '\'';
                else if(strcmp(temp,"-.-.--" ) == 0)in[k++] = '!';
                else if(strcmp(temp,"-..-." ) == 0)in[k++] = '/';
                else if(strcmp(temp,"-.--." ) == 0)in[k++] = '(';
                else if(strcmp(temp,"-.--.-" ) == 0)in[k++] = ')';
                else if(strcmp(temp,".-..." ) == 0)in[k++] = '&';
                else if(strcmp(temp,"---..." ) == 0)in[k++] = ':';
                else if(strcmp(temp,"-.-.-." ) == 0)in[k++] = ';';
                else if(strcmp(temp,"-...-" ) == 0)in[k++] = '=';
                else if(strcmp(temp,".-.-." ) == 0)in[k++] = '+';
                else if(strcmp(temp,"-....-" ) == 0)in[k++] = '-';
                else if(strcmp(temp,"..--.-" ) == 0)in[k++] = '_';
                else if(strcmp(temp,".-..-." ) == 0)in[k++] = char(34);
                else if(strcmp(temp,".--.-." ) == 0)in[k++] = '@';

                if(ha[j+1] == ' ' )
                {
                    in[k++] = ' ';
                    j++;
                }
                memset(temp,'\0',sizeof(temp));
                Index = 0;
            }
        }
        in[k] = '\0';
        printf("%s\n",in);
        if(t != n)
            printf("\n");
    }
    return 0;
}
