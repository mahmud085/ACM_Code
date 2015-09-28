#include <stdio.h>
#include<stdlib.h>
#include <math.h>
int main()
{
    int numbers[46350];
    int primes[5000];
    int i,j,l,counter=0,n,count,pos;
    for(j = 4 ; j < 46350 ; j+=2)
    {
        numbers[j] = 1;
    }
    primes[counter++] = 2;
    for(i = 3 ; i <= 46350 ; i++)
    {
        if(numbers[i] == 0)
        {
            primes[counter++] = i;
            for(j = i*i ; j < 46350  && j > 0; j+= i*2)
            {
                numbers[j] = 1;
            }
        }
    }
    while(scanf("%d", &n) && n!=0)
    {
        printf("%d =", n);
        count = 0;
        if(n<0)
        {
            printf(" %d", -1);
            count++;
        }
        pos = sqrt(abs(n));
        for(i = 0 ; i <counter && primes[i] <= pos ; i++)
        {
            while(n%primes[i] == 0)
            {
                if(count != 0)
                    printf(" x %d", primes[i]);
                else
                    printf(" %d", primes[i]);
                count++;
                n /= primes[i];
            }
        }

        if(n!=-1 && n!=1)
        {
            if(count != 0)
                printf(" x %d", abs(n));
            else
                printf(" %d", abs(n));
        }
        printf("\n");
    }
    return 0;
}
