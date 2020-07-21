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

break this into 4 triangle loops; space, stars, space, stars
*/

int main()
{

    int inputVar = 0;
    printf("Enter a number: ");
    scanf("%d", &inputVar);

    for (int i = inputVar; i > 0; i--)
    {
        for (int j = 0; j < inputVar-i; j++)
        {
            printf(" ");
            /*
            This loop prints spaces in the pattern
            _
            __
            ___
            ____
            _____
            ______
            */ 
        }
        for (int k = 0; k < i; k++)
        {
            printf("\u2588");
            /*
            This loop prints the left side of the triangle
            *****
             ****
              ***
               **
                *
            */
        }        
        for (int l = 0; l < i; l++)
        {
            printf("\u2588");
            /*
            This loop prints the right side of the triangle
            *****
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