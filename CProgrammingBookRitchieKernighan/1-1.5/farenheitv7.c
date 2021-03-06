#include <stdio.h>

// v6: For loop added to print next X number of temperatures as well
// v7 define to remove magic numbers

#define TEMPCOEFFICIENT 32.0
#define FAHRENHEITCALC 5.0 / 9.0
#define CELSIUSCALC 9.0 / 5.0

main()
{
    float temp;

start:
    printf("\n\t\t Temperature Conversion Table\n\n");
    printf("\n1.Fahrenheit To Celsius");
    printf("\n2.Celsius To Fahrenheit");
    printf("\n\n");
    int option = 0;
    scanf("%d", &option);

    printf("Enter Temperature: ");
    scanf("%f", &temp);

    for (int loopCount = 0; loopCount < 5; loopCount++)
    {

        if (option == 1)
        {
            printf("\n%3.0f Fahrenheit = %6.1f Celsius\n", temp, (temp - TEMPCOEFFICIENT) * (FAHRENHEITCALC));
        }
        else if (option == 2)
        {
            printf("\n%3.0f Celsius = %6.1f Fahrenheit\n", temp, (temp * (CELSIUSCALC) + TEMPCOEFFICIENT));
        }
        temp++;
    }

    goto start;

    return 0;
}
