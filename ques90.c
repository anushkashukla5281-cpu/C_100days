#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);   // read input including spaces

    for(i = 0; str[i] != '\0'; i++) {
        if(islower(str[i]))
            str[i] = toupper(str[i]);   // convert lowercase → uppercase
        else if(isupper(str[i]))
            str[i] = tolower(str[i]);   // convert uppercase → lowercase
    }

    printf("Toggled string: %s", str);

    return 0;
}