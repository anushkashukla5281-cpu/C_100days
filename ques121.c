#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int age;

    // Create / open the file in write mode
    fp = fopen("info.txt", "w");

    // Check if file opened successfully
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Take input from user
    printf("Enter your name: ");
    scanf("%s", name);
    

    printf("Enter your age: ");
    scanf("%d", &age);

    // Write data to file using fprintf
    fprintf(fp, "Name: %s\nAge: %d\n", name, age);

    // Close the file
    fclose(fp);

    printf("File created successfully! Data written to info.txt\n");

    return 0;
}