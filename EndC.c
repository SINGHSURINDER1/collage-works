#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr1, *ptr2, *ptr3;
    int n1 = 5, n2 = 7, n3 = 10, i;

    // malloc() function
    ptr1 = (int*)malloc(n1 * sizeof(int));
    printf("Memory successfully allocated using malloc.\n");

    // calloc() function
    ptr2 = (int*)calloc(n2, sizeof(int));
    printf("Memory successfully allocated using calloc.\n");

    // realloc() function
    ptr3 = (int*)realloc(ptr1, n3 * sizeof(int));
    printf("Memory successfully re-allocated using realloc.\n");

    // free() function
    free(ptr1);
    free(ptr2);
    free(ptr3);

    return 0;
}
