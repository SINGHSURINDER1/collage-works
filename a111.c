#include <stdio.h>

struct student {
    char name[50];
    int roll;
    int marks[5];
} s[5];

void display(struct student s) {
    printf("Name: %s\n", s.name);
    printf("Roll number: %d\n", s.roll);
    printf("Marks: ");
    for (int i = 0; i < 5; ++i) {
        printf("%d ", s.marks[i]);
    }
    printf("\n");
}

void total_marks(struct student s) {
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += s.marks[i];
    }
    printf("Total marks: %d\n", sum);
}

int main() {
    printf("Enter information of students:\n");
    // storing information
    for (int i = 0; i < 5; ++i) {
        s[i].roll = i + 1;
        printf("\nFor roll number %d,\n", s[i].roll);
        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("Enter marks in 5 subjects: ");
        for (int j = 0; j < 5; ++j) {
            scanf("%d", &s[i].marks[j]);
        }
    }

    printf("\nDisplaying Information:\n\n");
    // displaying information
    for (int i = 0; i < 5; ++i) {
        display(s[i]);
        total_marks(s[i]);
        printf("\n");
    }
    return 0;
}
