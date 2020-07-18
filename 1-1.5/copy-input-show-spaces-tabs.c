//chapter 1 - 1.5.3 Line Counting

/* Exercise 1-9. Write a program to copy its input to its output, 
replacing each string of one or
more blanks by a single blank. */

#include <stdio.h>

#define EOL '\n'

int main(void)
{
    int c; // int is used instead of char c - this is to allow the compiler to store the EOF value into 'c' correctly - char will not always store correctly (depending on whether unsigned or signed).

    while ((c = getchar()) != EOL)
    // keep taking characters as long as its not equal to end of line
    {

        if (c == '\t')
        {

            putchar('\\');
            putchar('t');

            if (c == EOL)
            {
                break;
            }
        }
        else if (c == '\b')
        {
            putchar('\\');
            putchar('b');

            if (c == EOL)
            {
                break;
            }
        }
        putchar(c);
    }
}

//page 21