#include <stdio.h>
#define EOL '\n'

// program to count number of characters entered

int main()
{
    long nc;
    int c;
    nc = 0;

    while ((c = getchar()) != EOF)
    {
        ++nc;
        if (c == EOL)
        {
            /* Print number of input characters (not including return character) */
            printf("%ld\n", nc - 1);
            nc = 0;
        }
    }

    return 0;
}