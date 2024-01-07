#include <stdio.h>

struct student {
    char name[50];
    int roll_number;
    float marks[5];
};

void display_total_marks(struct student s[], int n) {
    int i, j;
    float total_marks;

    for (i = 0; i < n; ++i) {
        total_marks = 0;
        for (j = 0; j < 5; ++j) {
            total_marks += s[i].marks[j];
        }
        printf("Total marks of %s: %.2f\n", s[i].name, total_marks);
    }
}

int main() {
    int n, i, j;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct student s[n];

    for (i = 0; i < n; ++i) {
        printf("\nEnter information for student %d:\n", i + 1);
        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("Enter roll number: ");
        scanf("%d", &s[i].roll_number);
        printf("Enter marks for 5 subjects: ");
        for (j = 0; j < 5; ++j) {
            scanf("%f", &s[i].marks[j]);
        }
    }

    display_total_marks(s, n);

    return 0;
}
