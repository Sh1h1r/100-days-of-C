#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp = fopen("info.txt", "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    int chars = 0, words = 0, lines = 0;
    char c;
    int inWord = 0;

    while ((c = fgetc(fp)) != EOF) {
        chars++;

        if (c == '\n') lines++;

        if (isspace(c))
            inWord = 0;
        else if (!inWord) {
            words++;
            inWord = 1;
        }
    }

    fclose(fp);

    printf("Characters: %d\n", chars);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}
