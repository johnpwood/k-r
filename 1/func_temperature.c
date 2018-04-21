#include<stdio.h>

// Exercise 1-15

/* print Fahrenheit-Celsius table
   for fahr = 0, 20, ..., 300 */

float f2c(float);

int main()
{
        float fahr, celsius;
        int lower, upper, step;

        lower = 0;
        upper = 300;
        step = 20;

        fahr = lower;
        while (fahr <= upper) {
                celsius = f2c(fahr);
                printf("%3.0f\t%6.1f\n", fahr, celsius);
                fahr += step;
        }
}

float f2c(float f)
{
        return (5.0/9.0) * (f - 32.0);
}
