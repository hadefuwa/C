#include <stdio.h>
/* v1: count lines in input */
int main()
{
    int c, nl;
    nl = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++nl;
    printf("%d\n", nl);

    //CTRL + Z to enter EOF in windows

    return 0;
}
