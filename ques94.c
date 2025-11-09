#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50], longest[50] = "";
    int i, j = 0;
    int max = 0;

    printf("Enter a sentence: ");
    if (!fgets(str, sizeof str, stdin)) return 0;         // safe input
    // remove trailing newline from fgets
    size_t slen = strlen(str);
    if (slen > 0 && str[slen-1] == '\n') str[slen-1] = '\0';

    int len = (int) strlen(str);                         // store length in an int
    for (i = 0; i <= len; i++) {                         // <= to process final word
        if (str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';
            if (j > 0 && j > max) {                     // j is current word length
                max = j;
                strcpy(longest, word);
            }
            j = 0;                                      // reset for next word
        }
    }

    if (max > 0)
        printf("Longest word: %s\nLength: %d\n", longest, max);
    else
        printf("No words found.\n");

    return 0;
}