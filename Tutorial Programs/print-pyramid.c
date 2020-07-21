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

N-1 spaces + i *'s +  
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
        for (int k = 0; k <= i; k++)
        {
            printf("\u2588");
        }        
        for (int l = 1; l <= i; l++)
        {
            printf("\u2588");
        }
        printf("\n");
    }
    return 0;
}