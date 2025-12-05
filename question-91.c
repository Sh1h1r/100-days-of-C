#include <stdio.h>
#include <string.h>  
#include <ctype.h>   

int main() {
    char str[100];
    int i, j;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    for(i = 0, j = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if(ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
            str[j++] = str[i];  
        }
    }
    str[j] = '\0'; 

    printf("String after removing vowels: %s\n", str);

    return 0;
}
