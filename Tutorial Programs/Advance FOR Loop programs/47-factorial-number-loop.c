#include <stdio.h>

int main()
{

    int i = 0;
    int n = 0;
    int factorial = 1;

    printf("\nEnter a number:");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        factorial=factorial*i;
    }

    printf("\nfactorial is %d\n", factorial);


    return 0;
}