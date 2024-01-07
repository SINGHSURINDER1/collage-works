#include <stdio.h>

union student {
    char name[50];
    int roll_number;
    float marks;
};

int main() {
    union student s;

    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.roll_number);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("\nInformation of the student:\n");
    printf("Name: %s\n", s.name);
    printf("Roll number: %d\n", s.roll_number);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}
