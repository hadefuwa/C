#include <stdio.h>

//Program to take input from user and output it to the screen

main()
{
    int c;
    c = getchar();
    while (c != EOF)
    {
        putchar(c);
        c = getchar();
    }
}
