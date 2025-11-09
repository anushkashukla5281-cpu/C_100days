#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int age;

    fp = fopen("info.txt", "w"); // open file

    printf("Enter name: ");
    scanf("%s", name); // simple name input (no spaces)

    printf("Enter age: ");
    scanf("%d", &age);

    fprintf(fp, "Name: %s\nAge: %d", name, age); // write to file

    fclose(fp); // close file

    printf("File created successfully! Data written to info.txt\n");

    return 0;