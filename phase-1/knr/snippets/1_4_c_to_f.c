#include <stdio.h>

int main() {
    float celsius, fahr;
    float lower, upper, step;

    lower = -50;
    upper = 50;
    step = 10;

    celsius = lower;
    printf("Celsius to Fahrenheit Converter\n");
    printf("  C  |  F\n");
    printf("-----|-----\n");
    while (celsius <= upper) {
        fahr = (9.0 / 5.0) * celsius + 32;
        printf("%4.0f | %5.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}