#include<stdio.h>
#include<math.h>

int main()
{
	 long i,j,s,n;
	   long data;
	int in;
	bool fl;
	int prime[] = {2, 3, 5, 7, 13, 17, 19, 31};
	int notPerfect[] = {11, 23, 29};

	
	while(scanf("%ld",&j),j!=0)
	{
		data = ( pow (2 ,(j - 1)) ) * (( pow(2, j))-1);
		fl = false;
		for (int i = 0; i < 8; ++i)
		{
			if (prime[i] == j)
			{
				printf("Perfect: %ld!\n",data);
				fl = true;
			}
		}
		if (fl) continue;

		if (notPerfect[0] == j || notPerfect[1] == j || notPerfect[2] ==j)
		{
				printf("Given number is prime. But, NO perfect number is available.\n");
		}
		else
				printf("Given number is NOT prime! NO perfect number is available.\n");
         

	}
	return 0;
}
