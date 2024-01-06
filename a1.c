#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    char filename[100], c;

    printf("Enter the filename to open for reading and writing: ");
    scanf("%s", filename);

    // Open file for both reading and writing
    fptr = fopen(filename, "w+");

    if (fptr == NULL) {
        printf("Cannot open file %s \n", filename);
        exit(0);
    }

    // Write to file
    printf("Enter contents to write to file: \n");
    while ((c = getchar()) != EOF) {
        fputc(c, fptr);
    }

    // Reset file pointer to start of file
    fseek(fptr, 0, SEEK_SET);

    // Read from file
    printf("\nContents of file %s: \n", filename);
    while ((c = fgetc(fptr)) != EOF) {
        printf("%c", c);
    }

    fclose(fptr);
    return 0;
}
