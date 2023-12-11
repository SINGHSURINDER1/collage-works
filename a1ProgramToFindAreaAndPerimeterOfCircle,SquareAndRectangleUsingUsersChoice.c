#include <stdio.h>

#define PI 3.14159

int main() {
    int choice;
    float radius, side, length, breadth, area, perimeter;

    printf("Enter your choice:\n");
    printf("1. Circle\n");
    printf("2. Square\n");
    printf("3. Rectangle\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);

            perimeter = 2 * PI * radius;
            area = PI * radius * radius;

            printf("Perimeter of the circle: %f\n", perimeter);
            printf("Area of the circle: %f\n", area);
            break;

        case 2:
            printf("Enter the side of the square: ");
            scanf("%f", &side);

            perimeter = 4 * side;
            area = side * side;

            printf("Perimeter of the square: %f\n", perimeter);
            printf("Area of the square: %f\n", area);
            break;

        case 3:
            printf("Enter the length and breadth of the rectangle: ");
            scanf("%f %f", &length, &breadth);

            perimeter = 2 * (length + breadth);
            area = length * breadth;

            printf("Perimeter of the rectangle: %f\n", perimeter);
            printf("Area of the rectangle: %f\n", area);
            break;

        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}
