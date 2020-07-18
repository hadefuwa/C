#include <stdio.h>
#define IN 1  /* inside a word */
#define OUT 0 /* outside a word */
/* count lines, words, and characters in input */

int main()
{
    int c, counterState;
    int newLine = 0, newWord = 0, newChar = 0;

    counterState = OUT;
    // counterState is used to know if the program is IN or OUT of a word

    while ((c = getchar()) != EOF)
    {
        ++newChar;
        if (c == '\n')
        {
            ++newLine;
        }
        if (c == ' ' || c == '\n' || c == '\t')
        {
            counterState = OUT;
        }
        else if (counterState == OUT)
        {
            counterState = IN;
            ++newWord;
        }
    }

    printf("Lines Words Characters\n");
    printf("%d \t%d \t%d\n", newLine, newWord, newChar);
}

//currently counting spaces