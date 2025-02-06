#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char data[100];

    file = fopen("file.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }
    fprintf(file, "This is a new file created.\n");
    fclose(file);

    file = fopen("file.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }
    while (fgets(data, sizeof(data), file) != NULL) {
        printf("%s", data);
    }
    fclose(file);

    file = fopen("file.txt", "a");
    if (file == NULL) {
        printf("Error opening file for appending.\n");
        return 1;
    }
    fprintf(file, "Appending a new line to the file.\n");
    fclose(file);

    file = fopen("file.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }
    while (fgets(data, sizeof(data), file) != NULL) {
        printf("%s", data);
    }
    fclose(file);

    return 0;
}
