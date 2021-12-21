#include <stdio.h>

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300 */
main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;  /* lower limit of temperature table */
    upper = 300; /* upper limit of temperature table */
    step = 20; /* step size */

    fahr = lower;
    while (fahr<upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f \t %6.1f\n", fahr, celsius);
        /* 6.1 espaço de 6 caracteres, com um digito apos a virgula */
        fahr = fahr + step;
    }
}