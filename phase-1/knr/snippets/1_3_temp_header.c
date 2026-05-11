#include <stdio.h>

int main() {
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("Fahrenheit to Celsius Converter\n");
    printf("  F  |  C\n");
    printf("-----|-----\n");
    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%4.0f | %5.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}