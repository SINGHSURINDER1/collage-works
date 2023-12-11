#include <stdio.h>

int main() {
    int arr[100], n, i, key;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; ++i) {
        if (arr[i] == key) {
            printf("%d found at index %d.\n", key, i);
            break;
        }
    }

    if (i == n) {
        printf("%d not found in the array.\n", key);
    }

    return 0;
}
