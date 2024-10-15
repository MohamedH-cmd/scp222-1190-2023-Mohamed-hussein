#include <stdio.h>

int main(void) {

    int start, end, increment, f;
    float celsius;

    // Take user input for start, end, and increment
    printf("Enter starting Fahrenheit value: ");
    scanf("%d", &start);
    printf("Enter ending Fahrenheit value: ");
    scanf("%d", &end);
    printf("Enter increment value: ");
    scanf("%d", &increment);

    // Print table header
    printf("\nFahrenheit   Celsius\n");
    printf("--------------------\n");

    for (f = start; f <= end; f += increment) {
        celsius = (f - 32) * 5.0 / 9.0;
        printf("%10d %10.1f\n", f, celsius);
    }

    return 0;
}
