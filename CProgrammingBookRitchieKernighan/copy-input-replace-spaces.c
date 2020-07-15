//chapter 1 - 1.5.3 Line Counting

/* Exercise 1-9. Write a program to copy its input to its output, 
replacing each string of one or
more blanks by a single blank. */

#include <stdio.h>

#define EOL '\n'

int main(void)
{
    int c;

    while ((c = getchar()) != EOL)
    // keep taking characters aslong as its not equal to end of line
    {

        // if any character equals a space then...
        if (c == ' ')
        {

            while ((c = getchar()) == ' ')
            {
                // whilst the character is a space
                // keep accepting the space
                //but don't do anything with it;
                ;
            }
            // then when char is no longer = to space
            // break out of the while loop

            putchar(' '); //then put one space in the place of all
            //the previous spaces

            // once the character is end of line,
            //end the whole while loop
            if (c == EOL)
            {
                break;
            }
        }
        putchar(c); //print the inputted characters
    }
}
