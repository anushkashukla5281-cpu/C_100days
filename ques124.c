#include <stdio.h>

int main() {
    FILE *src, *dest;
    char sourceFile[50], destFile[50];
    char ch;

    // Take file names from user
    printf("Enter source file name: ");
    scanf("%s", sourceFile);

    printf("Enter destination file name: ");
    scanf("%s", destFile);

    // Open source file in read mode
    src = fopen(sourceFile, "r");

    if(src == NULL) {
        printf("Source file not found!\n");
        return 0;
    }

    // Open destination file in write mode
    dest = fopen(destFile, "w");

    // Copying character by character
    while((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);

    printf("File copied successfully to %s\n", destFile);

    return 0;
}   