#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i;

    printf("Enter your full name: ");
    gets(name);  // or use fgets(name, sizeof(name), stdin)

    printf("Initials: ");

    // Print first character (first initial)
    if (name[0] != ' ')
        printf("%c", name[0]);

    // Print characters after spaces
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0')
            printf("%c", name[i + 1]);
    }

    return 0;
}