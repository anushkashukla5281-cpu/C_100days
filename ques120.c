#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int age;

    // Open file in write mode
    fp = fopen("info.txt", "w");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Taking user input
    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    // Writing to file using fprintf()
    fprintf(fp, "Name: %s\nAge: %d\n", name, age);

    // Close the file
    fclose(fp);

    printf("File created successfully! Data written to info.txt\n");

    return 0;
}
