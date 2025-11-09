#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i, lastSpace = -1;

    printf("Enter your full name: ");
    gets(name); // you can also use fgets(name, sizeof(name), stdin)

    // find last space (before surname)
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ')
            lastSpace = i;
    }

    printf("Result: ");

    // print initials
    if (name[0] != ' ')
        printf("%c.", name[0]);

    for (i = 0; i < lastSpace; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ')
            printf("%c.", name[i + 1]);
    }

    // print surname
    if (lastSpace != -1)
        printf("%s", &name[lastSpace + 1]);

    return 0;
}