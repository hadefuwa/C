#include <stdio.h>

/*
Print The Following;
1
12
123
1234
*/

int main()
{
    int inputVar = 0;
    printf("Enter a number: ");
    scanf("%d", &inputVar);

    for (int i = 1; i <= inputVar; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}