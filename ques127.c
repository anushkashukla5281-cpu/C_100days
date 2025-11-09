#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fin, *fout;
    char ch;

    // Open input file in read mode
    fin = fopen("input.txt", "r");
    if (fin == NULL) {
        printf("Error: Could not open input.txt\n");
        return 1;
    }

    // Open output file in write mode
    fout = fopen("output.txt", "w");
    if (fout == NULL) {
        printf("Error: Could not create output.txt\n");
        fclose(fin);
        return 1;
    }

    // Read characters one by one, convert to upper case and write to output
    while ((ch = fgetc(fin)) != EOF) {
        fputc(toupper(ch), fout);
    }

    // Close both files
    fclose(fin);
    fclose(fout);

    printf("Conversion completed! Check output.txt\n");

    return 0;
}