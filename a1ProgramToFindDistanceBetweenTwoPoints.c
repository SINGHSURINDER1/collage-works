#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2, distance;

    printf("Enter the coordinates of point 1 (x1, y1): ");
    scanf("%lf %lf", &x1, &y1);

    printf("Enter the coordinates of point 2 (x2, y2): ");
    scanf("%lf %lf", &x2, &y2);

    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("Distance between the two points: %lf\n", distance);

    return 0;
}
