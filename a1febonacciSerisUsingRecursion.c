#include <stdio.h>

int fibonacci(int num) {
    if (num == 0 || num == 1) {
        return num;
    } else {
        return fibonacci(num - 1) + fibonacci(num - 2);
    }
}

int main() {
    int terms, i;

    printf("Enter the number of terms in the sequence: ");
    scanf("%d", &terms);

    printf("Fibonacci sequence: ");
    for (i = 0; i < terms; ++i) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}
