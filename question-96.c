#include <stdio.h>
#include <string.h>
void reverseWord(char *start, char *end) {
    char temp;
    while(start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    str[(int)strcspn(str, "\n")] = '\0';

    int i = 0;
    while(str[i] != '\0') {
        if(str[i] == ' ') {
            i++;
            continue;
        }

        char *start = &str[i];
        char *end = start;
        while(str[i] != ' ' && str[i] != '\0') {
            end = &str[i];
            i++;
        }

        reverseWord(start, end);
    }

    printf("Sentence with reversed words: %s\n", str);
    return 0;
}
