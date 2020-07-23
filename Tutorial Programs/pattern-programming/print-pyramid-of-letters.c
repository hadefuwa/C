#include <stdio.h>

//print a downward stairs of blocks with spaces before each line 1 to N
/*
Like this;
     *
    ***
   *****
  *******
 *********
***********

*/

int main()
{

    int inputVar = 0;
    printf("Enter a number: ");
    scanf("%d", &inputVar);

    for (int i = 0; i < inputVar; i++)
    {
        for (int j = 1; j < inputVar-i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("%c", 64+i);
        }        
        for (int l = 2; l <= i; l++)
        {
            printf("%c", 64+i);
        }
        printf("\n");
    }
    return 0;
}