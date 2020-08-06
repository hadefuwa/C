#include <stdio.h>

int main()
{

    while (1)
    {
        int i = 0;
        int n = 0;
        long counter = 0;

        printf("\nEnter a number:");
        scanf("%d", &n);

        for (i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                counter++;
            }
        }

        if (counter < 3)
        {
            printf("\n%d is a prime number \n", n);
        }
        else
        {
            printf("\n%d is not a prime number.\n", n);
        }
    }
    return 0;
}