#include <stdio.h>

//print a square (more like a rectangle) of stars

int main()
{

    int inputVar = 0;
    printf("Enter a number: ");
    scanf("%d", &inputVar);

    for (int i = 1; i <= inputVar; i++)
    {
        for (int j = 1; j <= inputVar; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}