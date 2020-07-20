#include <stdio.h>

//print a downward stairs of blocks with spaces before each line 1 to N
/*
Like this;
     *
    **
   ***
  ****
 *****
******

Input N-1 spaces then 1 *
Input N-2 spaces then 2 *
"
Input N-N spaces then N * 
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
        printf("\n");
    }
    return 0;
}