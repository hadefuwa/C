#include <stdio.h>

int main()
{
    /*
    Print the following
    1
    11
    121
    1231
    12341
    */
    int input = 0;
    printf("Enter number: ");
    scanf("%d", &input);

    for (int i = input; i > 0; i--)
    {
        
        for (int j = 1; j <= input-i; j++)
        {
            printf("%d", j);
        }
        printf("1\n");
    }

    return 0;
}