#include <stdio.h>

//Program to take input from user and output it to the screen

main()
{
    int c; //We can't use char since c must be big enough to hold EOF in addition to any possible char. Therefore we use int.

    while ((c = getchar()) != EOF)
        putchar(c);
}
