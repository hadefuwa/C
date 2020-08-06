#include <stdio.h>

int main()
{

    int i = 0;
    int n = 0;
    long factorial = 1;

    printf("\nEnter a number:");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        factorial=factorial*i;
    }

    printf("\nfactorial is %.0ld \n", factorial);


    return 0;
}