#include <stdio.h>

//print a downward stairs of blocks with spaces before each line
int main()
{

    int inputVar = 0;
    printf("Enter a number: ");
    scanf("%d", &inputVar);

    for (int i = 1; i <= inputVar; i++)
    {
        for (int j = 1; j < i; j++)
        {
            printf(" ");
        }
        for (int k = i; k <= inputVar; k++)
        {
            printf("\u2588");
        }
        printf("\n");
    }
    return 0;
}