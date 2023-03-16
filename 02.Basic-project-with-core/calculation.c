#include <stdio.h>

int main() {
    float num1, num2, result;
    printf("Please enter two numbers (ex: 4 8): ");
    scanf("%f %f", &num1, &num2);

    // Calculate the sum
    result = num1 + num2;

    // Display the result
printf("%.2f + %.2f = %.2f\n", num1, num2, result);

    return 0;
}