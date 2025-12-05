#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char longest[100] = "";
    int maxLen = 0;
    printf("Enter a sentence: ");
    if(fgets(str, sizeof(str), stdin) == NULL) {
        printf("Error reading input.\n");
        return 1;
    }
    str[(int)strcspn(str, "\n")] = '\0';
    char *word = strtok(str, " ");
    while(word != NULL) {
        if((int)strlen(word) > maxLen) {
            maxLen = (int)strlen(word);
            strcpy(longest, word);
        }
        word = strtok(NULL, " ");
    }
    if(maxLen > 0)
        printf("Longest word: %s\n", longest);
    else
        printf("No words found.\n");
    return 0;
}
