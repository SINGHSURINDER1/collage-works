#include <stdio.h>

struct student {
    char name[50];
    int roll_number;
    float marks;
};

int main() {
    int n, i;
    float total_marks = 0;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct student s[n];

    for (i = 0; i < n; ++i) {
        printf("\nEnter information for student %d:\n", i + 1);
        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("Enter roll number: ");
        scanf("%d", &s[i].roll_number);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
        total_marks += s[i].marks;
    }

    printf("\nTotal marks of individual students:\n");
    for (i = 0; i < n; ++i) {
        printf("%s: %.2f\n", s[i].name, s[i].marks);
    }

    printf("\nTotal marks of all students: %.2f\n", total_marks);

    return 0;
}
