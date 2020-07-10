#include <stdio.h>

main() {
        float fahr, celsius, temp;

        start:
        printf("\n\t\t Temperature Conversion Table\n\n");
        printf("\n1.Fahrenheit To Celsius");
        printf("\n2.Celsius To Fahrenheit");
        printf("\n\n");
        int option = 0;
        scanf("%d", &option);

        printf("Enter Temperature: ");
        scanf("%f", &temp);

        if (option == 1) {
                fahr = (temp - 32.0) * (5.0 / 9.0);
                printf("\n%3.0f Fahrenheit = %6.1f Celcius\n", temp, fahr);

        } else if (option == 2) {
                celsius = (temp * (9.0 / 5.0) + 32);
                printf("\n%3.0f Celcius = %6.1f Fahrenheit\n", temp, celsius);
        }

        goto start;

        return 0;

}
