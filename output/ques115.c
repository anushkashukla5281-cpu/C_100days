#include <stdio.h>
#include <string.h>

int main() {
    char s[100], t[100];
    scanf("%s", s);
    scanf("%s", t);

    // If lengths are different → Not Anagram
    if(strlen(s) != strlen(t)) {
        printf("Not Anagram");
        return 0;
    }

    int count[26] = {0}; // to count characters

    // Count characters in s
    for(int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
    }

    // Reduce count for characters in t
    for(int i = 0; t[i] != '\0'; i++) {
        count[t[i] - 'a']--;
    }

    // If any count is not zero → Not Anagram
    for(int i = 0; i < 26; i++) {
        if(count[i] != 0) {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");
    return 0;
}