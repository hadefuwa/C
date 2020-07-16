
//From the Book The C-programming Language Ritchie & Kernighan
//Exercise 1-12. Write a program that prints its input one word per line.

#include <stdio.h>

int main(void)
{
    int c;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {

            while ((c = getchar()) == ' ')
            {
                ;
            }

            putchar('\n');

            if (c == EOF)
            {
                break;
            }
        }
        putchar(c);
    }
    return 0;
}
