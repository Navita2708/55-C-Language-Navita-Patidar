#include <stdio.h>
#include <stdlib.h>

int main() {
    double num1, num2, sum;

    printf("Enter two numbers: ");

    // Validate that the user enters two valid numbers
    if (scanf("%lf %lf", &num1, &num2) != 2) {
        printf("Invalid input. Please enter numeric values only.\n");
        return 1; // Exit with error code
    }

    // Perform addition
    sum = num1 + num2;

    // Display result
    printf("Sum of %.2lf and %.2lf is: %.2lf\n", num1, num2, sum);

    return 0; // Successful execution
}
