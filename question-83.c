#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int vowels = 0, consonants = 0;
    int i = 0;

    while(str[i] != '\0' && str[i] != '\n') {
        char ch = str[i];

        if(ch >= 'A' && ch <= 'Z')
            ch = ch + 32;

        if((ch >= 'a' && ch <= 'z')) {
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                vowels++;
            else
                consonants++;
        }
        i++;
    }

    printf("Vowels=%d, Consonants=%d\n", vowels, consonants);

    return 0;
}
