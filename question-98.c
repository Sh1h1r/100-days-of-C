#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[200];
    char *words[50]; 
    int wordCount = 0;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    name[(int)strcspn(name, "\n")] = '\0';
    char *token = strtok(name, " ");
    while(token != NULL) {
        words[wordCount++] = token;
        token = strtok(NULL, " ");
    }
    for(int i = 0; i < wordCount - 1; i++) {
        if(isalpha(words[i][0])) {
            printf("%c.", toupper(words[i][0]));
        }
    }

    if(wordCount > 0)
        printf(" %s\n", words[wordCount - 1]);

    return 0;
}
