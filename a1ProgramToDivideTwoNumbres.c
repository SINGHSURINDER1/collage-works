#include <stdio.h>

int main() {
    int num1, num2;
    float quotient;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    quotient = (float)num1 / num2;

    printf("Quotient: %.2f\n", quotient);

    return 0;
}
