#include <stdio.h>

union student {
    char firstName[50];
    int roll;
    float marks;
} s;

int main() {
    printf("Enter information of student:\n");
    printf("Enter first name: ");
    scanf("%s", s.firstName);
    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("\nDisplaying Information:\n\n");
    printf("First name: ");
    puts(s.firstName);
    printf("Roll number: %d\n", s.roll);
    printf("Marks: %.1f", s.marks);
    printf("\n");
    return 0;
}
