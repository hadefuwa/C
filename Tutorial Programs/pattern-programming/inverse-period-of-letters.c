#include <stdio.h>

//print a pyramid of spaces with letters around it
/*
Like this;
**********
****__****
**______**
*________*

*/

int main()
{

    int inputVar = 0;
    printf("Enter a number: ");
    scanf("%d", &inputVar);

    for (int i = inputVar-1; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c", 65+j);
        }
        for (int k = 1; k < (inputVar-i); k++)
        {
            printf("  ");
        }        
        for (int l = i; l >= 0; l--)
        {
            printf("%c", 65+l);
        }
        printf("\n");
    }
    return 0;
}