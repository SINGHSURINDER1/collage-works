#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    // strlen() function to find the length of a string
    printf("Length of the first string: %d\n", strlen(str1));
    printf("Length of the second string: %d\n", strlen(str2));

    // strcat() function to concatenate two strings
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);

    // strcmp() function to compare two strings
    if (strcmp(str1, str2) == 0) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }

    // strcpy() function to copy one string to another
    strcpy(str1, str2);
    printf("Copied string: %s\n", str1);

    return 0;
}
