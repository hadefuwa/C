#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i = 0;
    int n = 0;
    long counter = 0;

    printf("\nEnter a number:");
    scanf("%d", &n);

    for (i = 2; i <= n - 1; i++)
    //divide n by 2 all the way up to n
    //if it is divisible by any number from 2-n then its not prime
    //also since no number past half of that number can successfully divide into it, then we only need to check the half range
    //6 cannot possibly divide into 10
    //88 cannot possible divide into 100
    //^ both numbers are past half way mark
    //so we are only checking n divided by 2 (n/2) range
    {
        if (n % i == 0)
        {
            printf("\n%d is NOT a prime number \n", n);
            exit(0);
        }
    }
    printf("\n%d is a prime number \n", n);
    return 0;
}