#include <stdio.h>

/* v1: count lines in input */
/* v2: count spaces in input */

/*
' '      space 
'\t'     horizontal tab 
'\n'     newline
'\v'     vertical tab 
'\f'     feed 
'\r'     carriage return   
*/

int main()
{
    int c, nl;
    nl = 0;
    while ((c = getchar()) != EOF)
        if (c == ' ')
            ++nl;
    printf("%d\n", nl);

    //CTRL + Z to enter EOF in windows

    return 0;
}
