#include <stdio.h>

int main() {
FILE *fp;
char ch;
int characters = 0, words = 1, lines = 1;

    fp = fopen("ques123.c", "r"); // open file

    if(fp == NULL) {
        printf("File not found!\n");
        return 0;
    }

    while((ch = fgetc(fp)) != EOF) {
        characters++;
        if(ch == ' ' || ch == '\n')
words++;

    if(ch == '\n')
    lines++;
    }

    fclose(fp);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}