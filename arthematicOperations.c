#include <stdio.h>

int main() {
    int num1, num2, sum, sub, mult, mod;
    float div;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    sum = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = (float)num1 / num2;
    mod = num1 % num2;

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", sub);
    printf("Product: %d\n", mult);
    printf("Quotient: %.2f\n", div);
    printf("Remainder: %d\n", mod);

    return 0;
}
