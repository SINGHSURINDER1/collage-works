#include <stdio.h>

int main() {
    int arr[100], n, i, max, index;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    index = 0;

    for (i = 1; i < n; ++i) {
        if (arr[i] > max) {
            max = arr[i];
            index = i;
        }
    }

    printf("The maximum element in the array is %d.\n", max);
    printf("The index of the maximum element in the array is %d.\n", index);

    return 0;
}
