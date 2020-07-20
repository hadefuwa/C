#include <stdio.h>

//print a downward stairs of blocks with spaces before each line
int main()
{

    int inputVar = 0;
    printf("Enter a number: ");
    scanf("%d", &inputVar);

    for (int i = inputVar; i >= 0; i--)
    {
        for (int j = inputVar; j > i; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("\u2588");
        }
        printf("\n");
    }
    return 0;
}