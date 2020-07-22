#include <stdio.h>

//print a diamond
/*
Like this;
     *
    ***   
   *****
  *******
 *********
***********
 *********
  *******
   *****
    ***
     *
*/

int main()
{

    int inputVar = 0;
    printf("Enter a number: ");
    scanf("%d", &inputVar);

    for (int i = inputVar; i > 0; i--)
    {
        for (int l = 0; l < i - 1; l++) //done
        {
            printf(" ");
            /*
            ____
            ___
            __
            _
            */
        }

        for (int m = inputVar; m > i; m--) //done
        {
            printf("\u2588");
            /*
               *
              **
             ***
            ****
            */
        }

        for (int j = inputVar; j > i; j--) //done
        {
            printf("\u2588");
            /*
            *
            **
            ***
            ****
            */
        }
        printf("\n");
    }
    for (int i = inputVar-1; i > 0; i--)
    {
        for (int j = inputVar; j > i; j--)//done
        {
            printf(" ");
            /*
            _
            __
            ___
            ____
            */
        }

        for (int k = 0; k < i-1; k++) //done
        {
            printf("\u2588");
        }
        for (int l = 0; l < i-1; l++) 
        {
            printf("\u2588");
            /*
            ****
            ***
            **
            *
            */
        }

        printf("\n");
    }
    return 0;
}