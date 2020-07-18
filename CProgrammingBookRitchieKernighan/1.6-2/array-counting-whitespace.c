
//The C Programming Language. 2nd Edition
//Book by Brian Kernighan and Dennis Ritchie
//1.6 Arrays
//test update

#include <stdio.h>
/* count digits, white space, others */
int main()
{
    int c, i, noWhiteSpace, noOther;
    int noDigits[10];

    noWhiteSpace = 0, noOther = 0;

    for (i = 0; i < 10; ++i)
    {
        noDigits[i] = 0;
    }

    while ((c = getchar()) != EOF)
    {
        if (c >= '0' && c <= '9')
        {
            ++noDigits[c - '0'];
            /*The character 0 is different from the number 0.
            In ASCII, the character '0' is at position 48. 
            If you have entered '0', and you want to get 0, subtract '0' from it. 
            '1' minus '0' will have a difference of 1. 
            when c is 1
            [c - '0'] =1;
            [49-48] = 1;
            */
        }
        else if (c == ' ' || c == '\n' || c == '\t')
        {
            ++noWhiteSpace;
        }
        else
        {
            ++noOther;
        }
    }
    printf("Number of Digits \n");
    printf("0 1 2 3 4 5 6 7 8 9 \n");

    for (i = 0; i < 10; ++i)
    {
        printf("%d ", noDigits[i]);
    }
    printf("\n\nWhite Space = %d \n\nOther = %d\n", noWhiteSpace, noOther);
}
