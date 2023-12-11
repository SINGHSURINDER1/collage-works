#include <stdio.h>

int main() {
    int m, n, p, q, i, j, k;
    float first[10][10], second[10][10], multiply[10][10], sum = 0;

    printf("Enter the number of rows and columns of first matrix: ");
    scanf("%d %d", &m, &n);

    printf("Enter the elements of first matrix:\n");
    for (i = 0; i < m; ++i) {
        for (j = 0; j < n; ++j) {
            scanf("%f", &first[i][j]);
        }
    }

    printf("Enter the number of rows and columns of second matrix: ");
    scanf("%d %d", &p, &q);

    if (n != p) {
        printf("Matrices cannot be multiplied.\n");
    } else {
        printf("Enter the elements of second matrix:\n");
        for (i = 0; i < p; ++i) {
            for (j = 0; j < q; ++j) {
                scanf("%f", &second[i][j]);
            }
        }

        for (i = 0; i < m; ++i) {
            for (j = 0; j < q; ++j) {
                for (k = 0; k < p; ++k) {
                    sum += first[i][k] * second[k][j];
                }

                multiply[i][j] = sum;
                sum = 0;
            }
        }

        printf("Product of the matrices:\n");
        for (i = 0; i < m; ++i) {
            for (j = 0; j < q; ++j) {
                printf("%.2f\t", multiply[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
