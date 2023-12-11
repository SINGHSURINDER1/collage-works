#include <stdio.h>

#define PI 3.14159

int main() {
    double radius, area_circle, perimeter_circle;
    double side, area_square, perimeter_square;
    double length, breadth, area_rectangle, perimeter_rectangle;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    perimeter_circle = 2 * PI * radius;
    area_circle = PI * radius * radius;

    printf("Perimeter of the circle: %lf\n", perimeter_circle);
    printf("Area of the circle: %lf\n", area_circle);

    printf("Enter the side of the square: ");
    scanf("%lf", &side);

    perimeter_square = 4 * side;
    area_square = side * side;

    printf("Perimeter of the square: %lf\n", perimeter_square);
    printf("Area of the square: %lf\n", area_square);

    printf("Enter the length and breadth of the rectangle: ");
    scanf("%lf %lf", &length, &breadth);

    perimeter_rectangle = 2 * (length + breadth);
    area_rectangle = length * breadth;

    printf("Perimeter of the rectangle: %lf\n", perimeter_rectangle);
    printf("Area of the rectangle: %lf\n", area_rectangle);

    return 0;
}
