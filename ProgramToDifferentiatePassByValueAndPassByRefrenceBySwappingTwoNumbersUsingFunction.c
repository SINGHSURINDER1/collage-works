#include <stdio.h>
void swap_by_value(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}
void swap_by_reference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int num1 = 10, num2 = 20;

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
    swap_by_value(num1, num2);

    printf("After swapping by value: num1 = %d, num2 = %d\n", num1, num2);
    swap_by_reference(&num1, &num2);

    printf("After swapping by reference: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}